/*
** EPITECH PROJECT, 2023
** Hub_project_matchstick
** File description:
** print.c
*/

#include "../include/my.h"

void print_stars(int count)
{
    for (int i = 0; i < count; i++) {
        print("*");
    }
    print("\n");
}

void print_line(int *line, int width)
{
    print("*");
    for (int j = 0; j < width; j++) {
        if (line[j] == 1) {
            print("|");
        } else {
            print(" ");
        }
    }
    print("*\n");
}

void print_board(int **board, int lines)
{
    int width = lines * 2 - 1;

    print_stars(width + 2);
    for (int i = 0; i < lines; i++) {
        print_line(board[i], width);
    }
    print_stars(width + 2);
}
