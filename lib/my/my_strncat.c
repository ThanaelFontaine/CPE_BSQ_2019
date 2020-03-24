/*
** EPITECH PROJECT, 2019
** my_strncat.c
** File description:
** my_strncat.c
*/

char *my_strncat(char *dest, char const *src, int n)
{
    int a = 0;
    int i = 0;

    while (dest[a] != '\0') {
        a += 1;
    }
    while (i != n) {
        dest[a] = src[i];
        a += 1;
        i += 1;
    }
}
