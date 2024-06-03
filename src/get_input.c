/*
** EPITECH PROJECT, 2023
** Hub_project_matchstick
** File description:
** get_input.c
*/
#include "../include/my.h"

int get_int_input(char *prompt)
{
    char buffer[256];
    int value;

    while (1) {
        print("%s", prompt);
        if (my_fgets(buffer, sizeof(buffer)) == NULL) {
            print("Error reading input\n");
            return -1;
        }
        if (is_valid_number(buffer)) {
            value = my_atoi(buffer);
            return value;
        } else {
            print("Invalid input, please enter a valid number.\n");
        }
    }
}

int get_valid_line(info_t *info)
{
    int line;

    while (1) {
        line = get_int_input("Ligne: ") - 1;
        if (is_valid_line(info, line)) {
            return line;
        }
        print("Error: this line is out of range\n");
    }
}

int get_valid_matches(info_t *info, int line)
{
    int matches = 0;

    while (1) {
        matches = get_int_input("Matches:");
        if (v_c_match(info, matches) && removes(info, line, matches) == 0) {
            return matches;
        } else {
            print("Error: invalid match count or ");
            print("not enough matches on this line\n");
        }
    }
}

void player_turn(info_t *info)
{
    int line = get_valid_line(info);
    int matches = get_valid_matches(info, line);

    removes(info, line, (matches - 3));
    print("Player removed %d match(es) from line %d\n", matches, line + 1);
}
