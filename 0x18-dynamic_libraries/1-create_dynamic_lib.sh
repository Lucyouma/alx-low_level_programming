#!/bin/bash
# creates dynamic library

gcc -c *.c
gcc -shared -o libdynamic.so *.o
