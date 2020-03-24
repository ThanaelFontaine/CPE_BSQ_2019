/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** reverse str
*/

char *my_revstr(char *str)
{
    int i = 0;
    int a = 0;
    int b = 0;
    unsigned char swap;

    while (str[b]) {
        b += 1;
    }
    b -= 1;
    a = b;
    while (i <= b/2) {
        swap = str[i];
        str[i] = str[a];
        str[a] = swap;
        i += 1;
        a -= 1;
    }
    return (str);
}
