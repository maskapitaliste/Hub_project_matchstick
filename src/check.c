/*
** EPITECH PROJECT, 2023
** Hub_project_matchstick
** File description:
** check.c
*/

#include "../include/my.h"

int check_victory(info_t *info)
{
    int total_elements = info->ligne * (info->ligne * 2 - 1);
    int i;
    int j;

    for (int idx = 0; idx < total_elements; idx++) {
        i = idx / (info->ligne * 2 - 1);
        j = idx % (info->ligne * 2 - 1);
        if (info->board[i][j] == 1) {
            return 0;
        }
    }
    return 1;
}
