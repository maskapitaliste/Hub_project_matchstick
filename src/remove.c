/*
** EPITECH PROJECT, 2023
** Hub_project_matchstick
** File description:
** remove.c
*/

#include "../include/my.h"

int removes(info_t *info, int line, int matches)
{
    int width = info->ligne * 2 - 1;
    int match_count = 0;
    int i = width - 1;

    while (i >= 0 && match_count < matches) {
        if (info->board[line][i] == 1) {
            info->board[line][i] = 0;
            info->matches[line]--;
            match_count++;
        }
        i--;
    }
    return match_count;
}
