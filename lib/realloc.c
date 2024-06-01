/*
** EPITECH PROJECT, 2023
** Hub_project_matchstick
** File description:
** realloc.c
*/

#include "../include/my.h"


void *my_realloc(void *ptr, int size)
{
    void *new_ptr;
    char *src;
    char *dest;

    if (size == 0) {
        free(ptr);
        return NULL;
    }
    if (ptr == NULL)
        return malloc(size);
    new_ptr = malloc(size);
    if (new_ptr == NULL)
        return NULL;
    src = (char *)ptr;
    dest = (char *)new_ptr;
    for (int i = 0; i < size; ++i) {
        dest[i] = src[i];
    }
    free(ptr);
    return new_ptr;
}
