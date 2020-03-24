/*
** EPITECH PROJECT, 2019
** strupcase
** File description:
** gg
*/

#include <stdlib.h>

char *my_strupcase(char *str)
{
    int u = 0;

    while (str[u] != '\0') {
        u += 1;
        if ('a' <= str[u] && str[u] <= 'z') {
            str[u] = str[u] - 32;
        }
    }
    return (str);
}
