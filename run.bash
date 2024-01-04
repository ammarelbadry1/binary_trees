#!/usr/bin/env bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 $@ && ./a.out
