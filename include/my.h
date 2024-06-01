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
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>

#ifndef HASHTABLE_H
    #define HASHTABLE_H

// tools

typedef struct info
{
    int Max;
    int ligne;
    int **board;
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

#endif
