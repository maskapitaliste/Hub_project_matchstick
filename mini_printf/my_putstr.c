/*
** EPITECH PROJECT, 2023
** Bureau
** File description:
** my_putstr.c
*/

#include "../include/my.h"

int my_putstr(char const *str)
{
    do {
        my_putchar(*str);
        str += 1;
    } while (*str != '\0');
    return 0;
}
