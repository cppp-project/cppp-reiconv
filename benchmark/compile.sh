#!/bin/sh
g++ *.cpp /tmp/inst/lib/libcppp-reiconv.static.a /tmp/inst/lib/libcharset.a /tmp/inst/lib/libiconv.a -I/tmp/inst/include /workspaces/benchmark/build/src/libbenchmark.a -licuuc -O3 -fPIC -o benchmark
