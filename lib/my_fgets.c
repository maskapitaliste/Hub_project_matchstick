/*
** EPITECH PROJECT, 2023
** B-PSU-200-LYN-2-1-minishell1-ulysse.aubree
** File description:
** my_fgets.c
*/
#include "../include/my.h"

static int read_char(char *ch)
{
    int bytesRead = read(STDIN_FILENO, ch, 1);

    return bytesRead;
}

static void append_char(char **ptr, char ch)
{
    **ptr = ch;
    (*ptr)++;
}

static int is_newline(char ch)
{
    return (ch == '\n');
}

static int read_and_append(char **ptr, int *bytesRead)
{
    char ch;

    if (read_char(&ch) <= 0) {
        return 0;
    }
    append_char(ptr, ch);
    (*bytesRead)++;
    return !is_newline(ch);
}

char *my_fgets(char *buffer, int size)
{
    char *ptr = buffer;
    int bytesRead = 0;

    while (bytesRead < size - 1) {
        if (!read_and_append(&ptr, &bytesRead)) {
            break;
        }
    }
    *ptr = '\0';
    return (bytesRead == 0 && size > 0) ? NULL : buffer;
}
