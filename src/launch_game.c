/*
** EPITECH PROJECT, 2023
** Hub_project_matchstick
** File description:
** launch_game.c
*/
#include "../include/my.h"


void initialize_line(int *line, int line_number, int t_l, int *matches)
{
    for (int j = 0; j < t_l * 2 - 1; j++) {
        if (j < t_l - 1 - line_number || j > t_l - 1 + line_number) {
            line[j] = 0;
        } else {
            line[j] = 1;
            matches[line_number]++;
        }
    }
}

int **copy_board(int **original_board, int lines)
{
    int **new_board = malloc(sizeof(int *) * lines);

    for (int i = 0; i < lines; i++) {
        new_board[i] = malloc(sizeof(int) * (lines * 2 - 1));
        for (int j = 0; j < lines * 2 - 1; j++) {
            new_board[i][j] = original_board[i][j];
        }
    }
    return new_board;
}

info_t launch_game(int argc, char **argv)
{
    info_t info;
    int lines = my_atoi(argv[1]);
    int max_matches = my_atoi(argv[2]);
    int **board = malloc(sizeof(int *) * lines);
    int *matches = malloc(sizeof(int) * lines);

    for (int i = 0; i < lines; i++) {
        board[i] = malloc(sizeof(int) * (lines * 2 - 1));
        matches[i] = 0;
        initialize_line(board[i], i, lines, matches);
    }
    info.Max = max_matches;
    info.ligne = lines;
    info.board = board;
    info.matches = matches;
    info.orginal_board = copy_board(board, lines);
    return info;
}
