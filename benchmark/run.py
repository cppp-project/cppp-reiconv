#!/usr/bin/env python3

"""Run the benchmark and plot the results."""

from __future__ import annotations

import json
import sys
from pathlib import Path
from subprocess import PIPE, Popen

import rich
import rich.progress
from matplotlib import pyplot as plt

TEST_STRING_LEN = 50
MAX_REPET_TIME = 100

data: dict[str, list[list[float]]] = {}


def command(args: list[str] | str) -> str:
    """Generate shell command from a list of arguments.

    Args:
        args (list[str] | str): The list of arguments.

    Returns:
        str: The shell command.

    """
    if isinstance(args, str):
        return args

    res_command = ""
    for arg in args:
        if " " in arg:
            if '"' in arg:
                arg = arg.replace('"', '\\"')  # noqa: PLW2901
            res_command += f'"{arg}" '
        else:
            res_command += f"{arg} "
    return res_command.strip()


def add_data(str_repet_time: int, benchmark_name: str, time: float) -> None:
    """Add data to the data dict.

    Args:
        str_repet_time (int): The number of times the test string is
            repeated.
        benchmark_name (str): The name of the test.
        time (float): The time taken to run the test.

    """
    if benchmark_name not in data:
        data[benchmark_name] = []
    data[benchmark_name].append([str_repet_time * TEST_STRING_LEN, time])


if __name__ == "__main__":
    cwd = (Path(sys.argv[0]) / "..").resolve()
    executable = cwd / "benchmark"
    executable.chmod(0o755)

    with rich.progress.Progress() as progress:
        task = progress.add_task("Running", total=MAX_REPET_TIME)
        for test_string_repet_time in range(MAX_REPET_TIME):
            with Popen(  # noqa: S603
                [str(executable), str(test_string_repet_time)],
                cwd=cwd,
                shell=False,
                stdout=PIPE,
            ) as proc:
                arg1 = command([str(executable)])
                rich.print(
                    f"Running benchmark: [green]{arg1}[/green] "
                    f"{test_string_repet_time} ...",
                )
                if proc.wait() != 0:
                    rich.print(
                        f"[red]Error: Process failed with code "
                        f"{proc.returncode}[/red]",
                    )
                    sys.exit(1)
                proc.stdout.flush()  # type: ignore[attr-defined]
                test_data = json.loads(
                    proc.stdout.read().decode(  # type: ignore[attr-defined]
                        "UTF-8",
                    ),
                )
                for unit_data in test_data["benchmarks"]:
                    add_data(
                        test_string_repet_time,
                        unit_data["run_name"],
                        unit_data["real_time"],
                    )
            progress.update(task, advance=1)

    rich.print("[green]All benchmarks have been run successfully.[/green]")
    rich.print(data)

    for name, values in data.items():
        plt.plot(*zip(*values), label=name)
    plt.legend()
    plt.xlabel("Test string length (bytes)")
    plt.ylabel("Time (ns)")
    plt.title("Benchmark")
    plt.show()
