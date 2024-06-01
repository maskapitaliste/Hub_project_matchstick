/*
** EPITECH PROJECT, 2023
** Cpool_part2
** File description:
** my_count_digits.c
*/

#include "../include/my.h"

int my_count_digits(int nb)
{
    int result = 0;

    while (nb > 10) {
        nb = nb / 10;
        result ++;
    }
    return result + 1;
}
