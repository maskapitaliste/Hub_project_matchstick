/*
** EPITECH PROJECT, 2023
** Hub_project_matchstick
** File description:
** strdup.c
*/

#include "../include/my.h"

char *my_strdup(char *src)
{
    int len = my_strlen(src);
    char *duplicate = (char *)malloc((len + 1) * sizeof(char));

    if (duplicate == NULL) {
        perror("malloc");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i <= len; i++) {
        duplicate[i] = src[i];
    }
    return duplicate;
}
