#!/bin/bash
gcc -Wall -Werror -Werror -pedantic -c *.c
ar rc liball.a *.o
