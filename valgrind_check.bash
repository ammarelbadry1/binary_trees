#!/usr/bin/env bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -g *.c && valgrind ./a.out
