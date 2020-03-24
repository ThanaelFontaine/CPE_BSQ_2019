/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** my_strncmp.c
*/

#include <stdlib.h>

int my_strncmp(char const *s1, char const *s2, int m)
{
    int n = 0;
    int o = 0;
    int p = 0;

    while (s1[n] != '\0') {
        n += 1;
    }
    if (m > n) {
        return (0);
    }
    for (int a = 0; s1[a] != '\0'; a += 1) {
        o = o + s1[n];
    }
    for (int b = 0; s2[b] != '\0'; b += 1) {
        p = p + s2[n];
    }
    o = o - p;
    return (o);
}
