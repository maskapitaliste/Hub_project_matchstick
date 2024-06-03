/*
** EPITECH PROJECT, 2023
** Hub_project_matchstick
** File description:
** concat_string.c
*/

#include "../include/my.h"

char *concat_strings(char *dest, char *src)
{
    int lend = my_strlen(dest);
    int lens = my_strlen(src);
    char *copy = malloc(sizeof(char) * (lend + lens + 1));

    if (copy == NULL) {
        perror("malloc");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < lend; i++) {
        copy[i] = dest[i];
    }
    for (int i = 0; i < lens; i++) {
        copy[lend + i] = src[i];
    }
    copy[lend + lens] = '\0';
    return copy;
}
