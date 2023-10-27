#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar t liball.a *.o
