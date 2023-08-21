#!/bin/bash
gcc -wall -wextra -werror -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.c
export LD_LIBRARY_PUTH=.:$LD_LIBRARY_PATH
