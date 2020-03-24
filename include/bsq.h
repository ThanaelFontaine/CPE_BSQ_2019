/*
** EPITECH PROJECT, 2019
** CPE_BSQ_2019
** File description:
** bsq.h
*/

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>

char *fs_open_file(char const *filepath);
int mooveXY(int x, int y, char **map, int taille);

typedef struct bsq_s
{
    int x;
    int y;
    int size_max;
}bsq_t;