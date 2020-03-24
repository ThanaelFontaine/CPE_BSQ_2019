/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** my_strdup.c
*/
#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    char *dest;
    int l = my_strlen(src);

    dest = malloc(sizeof(char) * (l + 1));
    for (int i = 0; i <= l+1; i += 1) {
        dest[i] = src[i];
    }
    return (dest);
}
