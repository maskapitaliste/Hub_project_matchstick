/*
** EPITECH PROJECT, 2023
** Hub_project_matchstick
** File description:
** is_valid.c
*/

#include "../include/my.h"

int v_c_match(info_t *info, int matches)
{
    return (matches >= 1 && matches <= info->Max);
}

int is_valid_line(info_t *i, int l)
{
    return (l >= 0 && l < i->ligne && (c_match(i->board[l], i->ligne) == 1));
}

int is_valid_number(char *buffer)
{
    for (char *ptr = buffer; *ptr != '\n' && *ptr != '\0'; ptr++) {
        if (*ptr < '0' || *ptr > '9') {
            return 0;
        }
    }
    return 1;
}
