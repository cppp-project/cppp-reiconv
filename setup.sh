#!/usr/bin/env sh
# Setup a repository during individual development.
#
# This script requires git program in the PATH.

# Copyright (C) 2023 The C++ Plus Project.
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU Lesser General Public License as published by
# the Free Software Foundation; either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with this program.  If not, see <https://www.gnu.org/licenses/>.

# Usage: ./setup.sh
# 

# Usage: text_out [color_id] [level] [msg]
text_out()
{
  echo "\033[$1m$2: $3 \033[0m"
}

# Usage: execute [command]
execute()
{
  text_out 94 "$1"
  $1
  return $?
}

if test -d './build-aux'
then
  text_out 32 "Success" "'./build-aux' is exists, please don't remove it, and you can develop this package normally."
  exit 0
fi

if test -d '../build-aux'
then
  text_out 32 "Success" "'../build-aux' is exists, please don't remove it, and you can develop this package normally."
  exit 0
fi

text_out 0 "Notice" "'../build-aux' for C++ Plus are not exists, cloning it......"
execute "git clone https://github.com/cppp-project/build-aux"
if [ $? -eq 0 ]
then
  text_out 32 "Success" "'./build-aux' cloned successfully, please don't remove it, and you can develop this package normally."
else
  text_out 31 "Error" "'./build-aux' cloned failed, you can clone it by yourself or copy it from C++ Plus release source package."
  text_out 0 "Notice" "try to run 'git clone https://github.com/cppp-project/build-aux'. "
fi
