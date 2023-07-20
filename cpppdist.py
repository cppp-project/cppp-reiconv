#!/usr/bin/env python3

# Copyright (C) 2023 The C++ Plus Project.
# This file is part of the cppp library.
#
# The cppp library is free software; you can redistribute it
# and/or modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either version 3
# of the License, or (at your option) any later version.
#
# The cppp library is distributed in the hope that it will be
# useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public
# License along with the cppp library; see the file COPYING.
# If not, see <https://www.gnu.org/licenses/>.

# C++ Plus dist utils.

import os
import sys
import json
import shutil
import importlib.util

PACKAGE_INFO = "CPPPPKG"
PROGNAME = "cpppdist.py"

def import_file(path):
    """
    Import a Python file from it's path

    Args:
        path (str): Python file's path

    Raises:
        ModuleNotFoundError: When module invalid, load error or not found.

    Returns:
        ModuleType: module
    """
    spec = importlib.util.spec_from_file_location(os.path.basename(path).replace(".py", ""), path)
    if(spec == None):
        raise ModuleNotFoundError("Invalid module or module not found: " + path)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module

class Package:
    """
    A dist package type
    """
    name = ""
    version = ""
    list_file_path = ""
    filelist = []
    subpackages = {}

    def __init__(self, pkginfo_filepath) -> None:
        try:
            os.chdir(fwd)
            with open(pkginfo_filepath, "r", encoding="UTF-8") as info_file:
                data = json.load(info_file)
                self.name = data["name"]
                self.version = data["version"]
                self.list_file_path = data["list_file_path"]
                try:
                    _subpackages = data["subpackages"]
                    for pkgname in _subpackages:
                        pkgpath = _subpackages[pkgname]["path"]
                        try:
                            pkgmodule = import_file(os.path.join(pkgpath, PROGNAME))
                            self.subpackages[pkgpath] = pkgmodule.package
                        except Exception as e:
                            if(not _subpackages[pkgname]["ignore"]):
                                raise
                            else:
                                print(f"DEBUG: Ignore a subpackage '{pkgname}': {e}", file=sys.stderr)
                except KeyError:
                    pass
                self.filelist = self.get_file_list()
        finally:
            os.chdir(cwd)

    def get_file_list(self) -> list:
        """
        Get file list for dist.
        """
        try:
            os.chdir(fwd)
            file_list = []
            with open(self.list_file_path, "rt", encoding="UTF-8") as list_file:
                data = list_file.read()
                file_list = data.strip().split("\n")
            return file_list
        finally:
            os.chdir(cwd)

    def copy_files(self, dest):
        """
        Copy files to dist dest
        """
        try:
            os.chdir(fwd)
            if(os.path.exists(dest)):
                shutil.rmtree(dest)
            print(f"Copy package '{self.name}' to '{dest}' ... ", file=sys.stderr)
            progressbar = ProgressBar(len(self.filelist))
            for file in self.filelist:
                relpath = os.path.relpath(file, fwd)
                filedir = os.path.abspath(os.path.join(dest, relpath, ".."))
                if(not os.path.exists(filedir)):
                    os.makedirs(filedir)
                shutil.copy(file, os.path.join(dest, relpath))
                progressbar.add(1)
            progressbar.end()
            print("", end="\n", file=sys.stderr)
            # Copy subpackages
            for (pkgpath, pkg) in self.subpackages.items():
                pkg.copy_files(os.path.join(dest, os.path.join(dest, pkgpath)))
        finally:
            os.chdir(cwd)

class ProgressBar:
    """
    Progress bar type.
    """
    def __init__(self, total):
        self.total = total
        self.cur = 0
        sys.stderr.write("\n")
        self.update()

    def add(self, step):
        """
        Add current value and update.
        """
        self.cur += step
        self.update()

    def set(self, cur):
        """
        Set current value and update.
        """
        self.cur = cur
        self.update()

    def update(self):
        """
        Update progress bar.
        """
        try:
            progress = 0.0
            if(self.cur):
                progress = self.cur / self.total
            term_width = os.get_terminal_size(sys.stderr.fileno()).columns
            part_width = term_width - len("[]100.0%")
            if(part_width <= 0):
                # Terminal is too small, ignore.
                return
            sys.stderr.write("\r")
            # Part1 is '#'
            part1 = int(part_width * progress) * '#'
            # Part2 is ' '
            part2 = int(part_width - len(part1)) * ' '
            # Part3 is 'xxx.x%'
            part3 = str(int(progress * 1000) / 10) + "%"
            sys.stderr.write(f"[{part1}{part2}]{part3}")
            sys.stderr.flush()
        except:
            return

    def end(self):
        """
        End this progress bar
        """
        self.set(self.total)
        sys.stderr.write("\n")
        sys.stderr.flush()

cwd = os.path.abspath(os.curdir)
fwd = os.path.abspath(os.path.join(__file__, ".."))

package = None
try:
    package = Package(PACKAGE_INFO)
except Exception as exc:
    print("Getting packge infomation error:", exc, file=sys.stderr)
    raise exc

if __name__ == "__main__":
    distdir = f"{package.name}-v{package.version}"
    package.copy_files(os.path.abspath(distdir))
