/*
** EPITECH PROJECT, 2024
** Delivery
** File description:
** my_atoi
*/

#include "../include/my.h"

int my_atoi(char *chaine)
{
    int resultat = 0;
    int signe = 1;

    while (*chaine == ' ')
        chaine++;
    if (*chaine == '-') {
        signe = -1;
        chaine++;
    } else if (*chaine == '+') {
        chaine++;
    }
    while (*chaine >= '0' && *chaine <= '9') {
        resultat = resultat * 10 + (*chaine - '0');
        chaine++;
    }
    return resultat * signe;
}
