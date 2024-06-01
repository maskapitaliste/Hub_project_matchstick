/*
** EPITECH PROJECT, 2023
** Bureau
** File description:
** my_putchar.c
*/

#include "../include/my.h"

void my_putchar(char a)
{
    write(1, &a, 1);
}
