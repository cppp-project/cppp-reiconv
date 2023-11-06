#!/usr/bin/env pwsh

# Copyright (C) 2023 The C++ Plus Project.
# This file is part of the cppp-reiconv library.
#
# The cppp-reiconv library is free software; you can redistribute it
# and/or modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either version 3
# of the License, or (at your option) any later version.
#
# The cppp-reiconv library is distributed in the hope that it will be
# useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public
# License along with the cppp-reiconv library; see the file COPYING.
# If not, see <https://www.gnu.org/licenses/>.

# This script help to build the library.
# This script requires cmake program and C/C++ compiler in the PATH.
# This script requires to run in the root directory of the library.
# This script support varibale 'CMAKEFLAGS' to pass flags to cmake.

# Usage: ./tools/build.ps1

function colored_output {
    param (
        [Parameter(Mandatory=$true)][System.String]$color,
        [Parameter(Mandatory=$true)][string]$message
    )
    Write-Host $message -ForegroundColor $color
}

function output_log {
    param (
        [Parameter(Mandatory=$true)][string]$color,
        [Parameter(Mandatory=$true)][string]$level,
        [Parameter(Mandatory=$true)][string]$message
    )
    $timestamp = Get-Date -Format "yyyy/MM/dd HH:mm:ss"
    colored_output $color "[$level] [$timestamp] $message"
}

# Check cmake program.
if (-not (Get-Command cmake -ErrorAction SilentlyContinue)) {
    output_log Red FATAL "CMake program not found in PATH."
    exit 1
}
# Check if we run this script in the root directory.
if (-not (Test-Path "CMakeLists.txt")) {
    output_log Red FATAL "Please run this script in the root directory."
    exit 1
}
# Make package
output_log White INFO "Making package..."
if (Test-Path "build") {
    Remove-Item -Recurse -Force "build"
}
mkdir "build"
$nproc=1
if($env:OS -like "*Windows*") {
    $nproc = (Get-WmiObject -Class Win32_Processor).NumberOfLogicalProcessors
}
else  {
    if(Test-Path "/proc/cpuinfo") {
        $nproc = (Get-Content "/proc/cpuinfo" | Select-String "processor" | Measure-Object).Count
    }
}
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=build/install $env:CMAKEFLAGS
cmake --build build --config Release --parallel $nproc
cmake --install build --config Release
output_log Green SUCCESS "Package made successfully."
