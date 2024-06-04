/*
** EPITECH PROJECT, 2023
** secured
** File description:
** my.h
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>

#ifndef HASHTABLE_H
    #define HASHTABLE_H

// tools

typedef struct info {
    int Max;
    int ligne;
    int **orginal_board;
    int **board;
    int *matches;
} info_t;

int my_strlen(char *str);
char *my_strdup(char *str);
char *concat_strings(char *dest, char *src);
char *my_strcpy(char *dest, char const *src);
int my_strcmp(char *s1, char *s2);
int my_strncmp(const char *s1, const char *s2, int n);
int len_tab(char *arr);
int my_atoi(char *chaine);

// mini printf

int print(const char *format, ...);
int my_count_digits(int nb);
int my_put_nbr(int nb);
void my_putchar(char a);
int my_putstr(char const *str);

// Matchstick environment

info_t launch_game(int argc, char **argv);
int gameplay(info_t *info);
void print_board(int **board, int lines);
char *my_fgets(char *buffer, int size);
int removes(info_t *info, int line, int matches);
int check_victory(info_t *info);
void ai_turn(info_t *info);
int get_int_input(char *prompt);
int get_valid_line(info_t *info);
int get_valid_matches(info_t *info, int line);
int v_c_match(info_t *info, int matches);
int is_valid_line(info_t *info, int line);
int is_valid_number(char *buffer);
void player_turn(info_t *info);
int c_match(int *line, int length);
int add_matchs(info_t *info, int line, int matches);

#endif
