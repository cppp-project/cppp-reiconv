@echo off
rem Setup a repository during individual development.
rem
rem This script requires git program in the PATH.

rem Copyright (C) 2023 The C++ Plus Project.
rem
rem This program is free software: you can redistribute it and/or modify
rem it under the terms of the GNU Lesser General Public License as published by
rem the Free Software Foundation; either version 3 of the License, or
rem (at your option) any later version.
rem
rem This program is distributed in the hope that it will be useful,
rem but WITHOUT ANY WARRANTY; without even the implied warranty of
rem MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
rem GNU Lesser General Public License for more details.
rem
rem You should have received a copy of the GNU Lesser General Public License
rem along with this program.  If not, see <https://www.gnu.org/licenses/>.

rem Usage: setup.cmd

if exist .\build-aux (
    echo Success: '.\build-aux' is exists, please don't remove it, and you can develop this package normally.
    goto QUIT
)

if exist ..\build-aux (
    echo Success: '..\build-aux' is exists, please don't remove it, and you can develop this package normally.
    goto QUIT
)

echo Notice: '..\build-aux' for C++ Plus are not exists, cloning it......
git clone https://github.com/cppp-project/build-aux
if %errorlevel%==0 (
    echo Success: '.\build-aux' cloned successfully, please don't remove it, and you can develop this package normally.
) else (
    echo Error: .\build-aux' cloned failed, you can clone it by yourself or copy it from C++ Plus release source package.
    echo Notice: try to run 'git clone https://github.com/cppp-project/build-aux'.
)

:QUIT
