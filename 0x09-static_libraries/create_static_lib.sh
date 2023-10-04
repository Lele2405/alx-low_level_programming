#!/bin/bash
gcc -wall -pedantic -Werror -Wextra -c *.c
ar -re liball.a *.o
ranlib liball.a
