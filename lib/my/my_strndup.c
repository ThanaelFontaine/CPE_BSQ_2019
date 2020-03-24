/*
** EPITECH PROJECT, 2019
** CPE_BSQ_2019
** File description:
** my_strndup.c
*/

#include <stdlib.h>

char *my_strndup(char *str, int a)
{
    char *dest = malloc(sizeof(char) * (a + 1));
    int i = 0;

    while (str[i] != '\0' && i < a) {
        dest[i] = str[i];
        i += 1;
    }
    dest[a] = '\0';
    return (dest);
}