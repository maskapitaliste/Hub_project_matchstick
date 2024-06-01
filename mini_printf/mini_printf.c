/*
** EPITECH PROJECT, 2023
** Cpool_part2
** File description:
** mini_printf.c
*/

#include <stdarg.h>
#include "../include/my.h"

void my_switch(char c, va_list *parametre, int *len_count)
{
    char *str;

    switch (c) {
        case 'c':
            my_putchar((char)va_arg(*parametre, int));
            (*len_count)++;
            break;
        case 's':
            str = va_arg(*parametre, char *);
            my_putstr(str);
            (*len_count) += my_strlen(str);
            break;
        default:
            break;
    }
}

void my_switch_2(char c, va_list *parametre, int *len_count)
{
    int nb;

    switch (c) {
        case 'd':
        case 'i':
            nb = va_arg(*parametre, int);
            my_put_nbr(nb);
            (*len_count) += my_count_digits(nb);
            break;
        case '%':
            my_putchar('%');
            (*len_count)++;
            break;
        default:
            break;
    }
}

int print(const char *format, ...)
{
    int len_count = 0;
    va_list param_list;

    va_start(param_list, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%' && format[i + 1] != '\0') {
            my_switch(format[i + 1], &param_list, &len_count);
            my_switch_2(format[i + 1], &param_list, &len_count);
            i++;
        } else {
            my_putchar(format[i]);
            len_count++;
        }
    }
    va_end(param_list);
    return len_count;
}
