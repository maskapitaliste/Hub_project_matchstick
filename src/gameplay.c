/*
** EPITECH PROJECT, 2023
** Hub_project_matchstick
** File description:
** gamplay.c
*/

#include "../include/my.h"



int gameplay(info_t *info) {
    int line = 0;
    int matches = 0;

    while (1) {
        print("Your turn:\n");

        while (1) {
            line = get_int_input("Line: ");
            if (line >= 1 && line <= info->Max[0]) {
                break;
            } else {
                print("Error: this line is out of range\n");
            }
        }
        while (1) {
            matches = get_int_input("Matches: ");
            if (matches >= 1 && matches <= info->Max[0]) {
                break;
            } else {
                print("Error: this number of matches is out of range\n");
            }
        }
        return 0;
    }
}

