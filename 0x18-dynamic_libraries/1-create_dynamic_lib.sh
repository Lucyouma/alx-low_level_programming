#!/bin/bash
# creates dynamic library

gcc -c -fPIC *.c
gcc -shared -o libdynamic.so *.o
