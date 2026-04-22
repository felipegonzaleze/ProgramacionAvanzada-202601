#!/bin/bash                                                                              
gcc -g val1.c -o val1
valgrind ./val1 
# valgrind --track-origins=yes ./val1
