/*
** EPITECH PROJECT, 2023
** Hub_project_matchstick
** File description:
** strlen.c
*/

#include "../include/my.h"

int my_strlen(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return i;
}
