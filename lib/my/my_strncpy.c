/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** copy n characters from a string to another
*/

char *my_strncpy(char *dest, char const *src, int i)
{
    int a = 0;

    while (src[a] != '\0') {
        a += 1;
    }
    if (i > a) {
        return (0);
    }
    for (int b = 0; i < b; b++) {
        dest[b] = src[b];
    }
    return (dest);
}
