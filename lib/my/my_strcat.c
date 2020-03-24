/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** my_strcat
*/

#include <stdio.h>

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int a = 0;

    while (dest[i] != '\0') {
        i += 1;
    }
    while (src[a] != '\0') {
        dest[i] = src[a];
        i += 1;
        a += 1;
    }
}
