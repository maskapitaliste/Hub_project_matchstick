/*
** EPITECH PROJECT, 2023
** Bureau
** File description:
** my_put_nbr.c
*/

#include "../include/my.h"

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar(45);
        nb *= -1;
    }
    if (nb < 10) {
        my_putchar(48 + nb);
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + 48);
    }
    return 0;
}
