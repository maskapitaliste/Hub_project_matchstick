/*
** EPITECH PROJECT, 2023
** Hub_project_matchstick
** File description:
** ai.c
*/
#include "../include/my.h"

void make_total_even(info_t *info, int *l, int *m)
{
    int max_line = -1;
    int max_matches = -1;

    for (int i = 0; i < info->ligne; i++) {
        if (info->matches[i] > max_matches) {
            max_matches = info->matches[i];
            max_line = i;
        }
    }
    if (max_matches > 1) {
        *l = max_line;
        *m = (max_matches % 2 == 0) ? max_matches - 1 : max_matches;
        if (*m > info->Max) {
            *m = info->Max;
        }
        return;
    }
    for (int i = 0; i < info->ligne; i++) {
        if (info->matches[i] > 0) {
            *l = i;
            *m = (info->matches[i] < info->Max) ? info->matches[i] : info->Max;
            return;
        }
    }
}

void find_best_move(info_t *info, int *l, int *m)
{
    make_total_even(info, l, m);
}

void ai_turn(info_t *info)
{
    int l = 0;
    int m = 0;

    print("\nAI's turn...\n");
    srand(time(NULL));
    find_best_move(info, &l, &m);
    removes(info, l, m);
    print("AI removed %d match(es) from line %d\n", m, l + 1);
}
