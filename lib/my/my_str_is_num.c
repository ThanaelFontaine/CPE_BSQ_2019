/*
** EPITECH PROJECT, 2019
** my_str_isnum
** File description:
** str is num
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    if (str[0] == '\0')
        return (0);
    while (str[i] != '\0') {
        i += 1;
        if (str[i] < '0' || str[i] > '9')
            return (0);
    }
    return (1);
}