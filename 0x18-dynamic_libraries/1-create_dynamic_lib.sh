#!/bin/bash
gcc -c -FPIC *.c
gcc -shared -o libdynamic.so *.o
