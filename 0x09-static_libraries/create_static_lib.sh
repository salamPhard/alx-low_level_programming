#!/bin/bash
gcc -c *.c
ar rc liall.a *.o
rm *.o
