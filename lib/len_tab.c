/*
** EPITECH PROJECT, 2023
** Hub_project_matchstick
** File description:
** len_tab.c
*/

#include "../include/my.h"

int len_tab(char *arr)
{
    int length = 0;

    while (arr[length] != '\0') {
        length++;
    }
    return length;
}
