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

    if (bytesRead < 0) {
        perror("Error reading the entry");
    }
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

char *return_fgets_t(int bR, char *b)
{
    if (bR == 0) {
        return NULL;
    } else {
        b[bR] = '\0';
        return b;
    }
}

char *my_fgets(char *b, int size)
{
    char *ptr = b;
    int bR = 0;
    char ch;

    while (bR < size - 1) {
        if (read_char(&ch) <= 0) {
            return return_fgets_t(bR, b);
        }
        append_char(&ptr, ch);
        bR++;
        if (is_newline(ch)) {
            break;
        }
    }
    *ptr = '\0';
    return b;
}
