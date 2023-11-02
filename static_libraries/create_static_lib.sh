#!bin/bash
gcc -wall -pedanic -Werror -Wextra -c *.c
ar -rc libmy.a *.o
ranlib libmy.a
ar -t libmy.a
nm libmy.a
