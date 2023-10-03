#!/bin/bash
gcc  -Wall -pendantic -Werror -Wextra -c *.c
ar rcs libmy.a *.o
ranlib libmy.a
