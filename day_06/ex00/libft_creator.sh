#!/bin/bash
gcc -c ft_atoi.c ft_itoa.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
ar rcs libft.a ft_atoi.o ft_itoa.o ft_putchar.o ft_putnbr.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o