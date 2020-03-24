/*
** EPITECH PROJECT, 2019
** Basq.c
** File description:
** .c
*/

#include "include/my.h"
#include "include/bsq.h"

int print_the_map(char **map, int x, int y, int taille_max)
{
    int lenght = 0;
    int recup_taille_max = 0;

    for (; map[1][lenght]; lenght += 1);
    for (int i = y; i != y + taille_max; i += 1) {
        for (int j = x; j != x + taille_max; j += 1) {
            map[i][j] = 'x';
        }
    }
    for (; map[recup_taille_max] != NULL; recup_taille_max += 1);
    for (int i = 1; i <= (recup_taille_max-1); i += 1) {
        write(1, map[i], lenght);
        write(1, "\n", 1);
    }
}

bsq_t bsq_2(bsq_t info, int i, int j, char **map)
{
    for (int temp = 0; mooveXY(j, i, map, temp) == 0; temp += 1) {
        if (temp > info.size_max) {
            info.size_max = temp;
            info.x = j;
            info.y = i;
        }
    }
    return (info);
}

void *bsq(char **map)
{
    bsq_t info;

    info.x = 0;
    info.y = 0;
    info.size_max = 0;

    for (int i = 0; map[i] != NULL; i += 1) {
        for (int j = 0; map[i][j] != '\0'; j += 1) {
            info = bsq_2(info, i, j, map);
        }
    }
    print_the_map(map, info.x, info.y, info.size_max);
}

int main(int ac, char **av)
{
    char *str;
    char **map;

    if (ac != 2) {
        write (2, "WARNING: Missing or too many arguments\n", 40);
        return (84);
    }
    str = fs_open_file(av[1]);
    if (str == NULL)
        return (84);
    map = str_to_word_array(str, '\n');
    if (map == NULL)
        return (84);
    bsq(map);
    free(str);
    for (int y = 0; map[y]; y += 1)
        free(map[y]);
    free(map);
    return (0);
}