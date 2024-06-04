/*
** EPITECH PROJECT, 2023
** Hub_project_matchstick
** File description:
** gamplay.c
*/

#include "../include/my.h"

int c_match(int *line, int length)
{
    for (int i = 0; i < length; i++) {
        if (line[i] > 0) {
            return 1;
        }
    }
    return 0;
}

int gameplay(info_t *info)
{
    print_board(info->board, info->ligne);
    while (1) {
        print("\nYour turn:\n");
        player_turn(info);
        print_board(info->board, info->ligne);
        if (check_victory(info) == 1) {
            print("You lost, too bad...\n");
            return 2;
        }
        ai_turn(info);
        print_board(info->board, info->ligne);
        if (check_victory(info) == 1) {
            print("I lost... snif... but I'll get you next time!!\n");
            return 1;
        }
    }
}
