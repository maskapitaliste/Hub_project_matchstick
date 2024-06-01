/*
** EPITECH PROJECT, 2023
** Hub_project_matchstick
** File description:
** strcat.c
*/

#include "../include/my.h"

char *my_strcat(char *dest, char *src)
{
    int len_dest = my_strlen(dest);
    int len_src = my_strlen(src);

    for (int x = 0; x < len_src; x++) {
        dest[len_dest + x] = src[x];
    }
    dest[len_dest + len_src] = '\0';
    return dest;
}
