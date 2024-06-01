/*
** EPITECH PROJECT, 2023
** Hub_project_matchstick
** File description:
** strcmp.c
*/

#include "../include/my.h"

int compare_characters(char c1, char c2)
{
    if (c1 != c2)
        return (c1 > c2) ? 1 : -1;
    else if (c1 == '\0')
        return 0;
    return 0;
}

int my_strcmp(char *s1, char *s2)
{
    if (s1 == NULL || s2 == NULL) {
        return -1;
    }
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int my_strncmp(const char *s1, const char *s2, int n)
{
    int comparison_result;

    for (int i = 0; i < n; ++i) {
        comparison_result = compare_characters(s1[i], s2[i]);
        if (comparison_result != 0)
            return comparison_result;
    }
    return 0;
}
