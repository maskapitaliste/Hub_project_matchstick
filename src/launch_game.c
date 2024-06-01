/*
** EPITECH PROJECT, 2023
** Hub_project_matchstick
** File description:
** launch_game.c
*/

#include  "../include/my.h"

info_t launch_game(int argc, char **argv)
{
    info_t info;
    int lines = my_atoi(argv[1]);
    int max_matches = my_atoi(argv[2]);
    int **board = malloc(sizeof(int *) * lines);

    for (int i = 0; i < lines; i++) {
        board[i] = malloc(sizeof(int) * (i * 2 + 1));
        for (int j = 0; j < i * 2 + 1; j++) {
            board[i][j] = 1;
        }
    }

    info.Max = max_matches;
    info.ligne = lines;
    info.board = board;
    return info;
}

void print_board(int **board, int lines) {
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < i * 2 + 1; j++) {
            if (board[i][j] == 1)
                printf("|");
            else
                printf(" ");
        }
        printf("\n");
    }
}
