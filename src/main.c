/*
** EPITECH PROJECT, 2023
** Hub_project_matchstick
** File description:
** main.c
*/

#include "../include/my.h"


int pdef(int argc, char **argv)
{
    int lines = 0;
    int max_matches = 0;

    if (argc != 3)
        return (84);
    lines = my_atoi(argv[1]);
    max_matches = my_atoi(argv[2]);
    if (lines < 2 || lines > 99 || max_matches < 0)
        return (84);
    return 0;
}

int main(int argc, char **argv)
{
    info_t info;

    if (pdef(argc, argv) != 0) {
        print("USAGE\n ./matchstick lines max_matches");
        print("\n\n DESCRIPTION\n lines number of lines of ");
        print("the game, greater than 1\n max_matches maximum");
        print("number of matches that can be taken out each ");
        print("turn\n");
        return (84);
    }
    info = launch_game(argc, argv);
    while (gameplay(&info) == 0) {
    }
    return (0);
}
