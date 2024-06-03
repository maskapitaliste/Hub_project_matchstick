/*
** EPITECH PROJECT, 2023
** Hub_project_matchstick
** File description:
** ai.c
*/

#include "../include/my.h"

int calculate_nim_sum(int *matches, int lines)
{
    int nim_sum = 0;

    for (int i = 0; i < lines; i++) {
        nim_sum ^= matches[i];
    }
    return nim_sum;
}

void find_optimal_move(info_t *info, int nim_sum, int *best_line, int *b_m)
{
    int target_matches;

    for (int i = 0; i < info->ligne; i++) {
        target_matches = info->matches[i] ^ nim_sum;
        if (target_matches < info->matches[i]) {
            *best_line = i;
            *b_m = info->matches[i] - target_matches;
            break;
        }
    }
}

void find_best_move(info_t *info, int *best_line, int *best_matches)
{
    int nim_sum = calculate_nim_sum(info->matches, info->ligne);

    if (nim_sum == 0) {
        do {
            *best_line = rand() % info->ligne;
        } while (info->matches[*best_line] == 0);
        *best_matches = (rand() % info->Max) + 1;
        if (*best_matches > info->matches[*best_line]) {
            *best_matches = info->matches[*best_line];
        }
    } else {
        find_optimal_move(info, nim_sum, best_line, best_matches);
    }
}

void ai_turn(info_t *info)
{
    int l = 0;
    int m = 0;

    print("\nAI's turn...\n");
    srand(time(NULL));
    find_best_move(info, &l, &m);
    if (removes(info, l, m) == 0) {
        print("AI removed %d match(es) from line %d\n", m, l + 1);
    }
}
