/*
** EPITECH PROJECT, 2023
** Hub_project_matchstick
** File description:
** strcpy.c
*/

#include "../include/my.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    int len = 0;

    for (len; len[src] != '\0'; len++);
    dest[len] = '\0';
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    return dest;
}
