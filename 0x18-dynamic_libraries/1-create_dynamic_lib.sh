#!/bin/bash
gcc -c *.c
ar -rc liball.so *.o
ranlib liball.so
