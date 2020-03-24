/*
** EPITECH PROJECT, 2019
** concat_params
** File description:
** concat_params
*/
#include <stdlib.h>

#include <stdio.h>

int my_strlen(char const *str);

char *concat_params(int argc, char **argv)
{
    char *fin;
    int l = 0;
    int j;
    int k = 0;

    for (int i = 1; i < argc; i += 1) {
        l = l + my_strlen(argv[i]) + 1;
    }
    fin = malloc(sizeof(char)*l);
    for (int i = 0; i < argc; i += 1) {
        j = 0;
        while (argv[i][j] != '\0') {
            fin[k] = argv[i][j];
            j += 1;
            k += 1;
        }
        fin[k] = '\n';
        k += 1;
    }
    return (fin);
}
