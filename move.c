/*
** EPITECH PROJECT, 2019
** CPE_BSQ_2019
** File description:
** move.c
*/

#include "include/bsq.h"

int mooveXY(int x, int y, char **map, int taille)
{
    for (int i = y; i != y + taille; i += 1) {
        if (map[i] == NULL || map[i][x + taille - 1] != '.')
            return (1);
    }
    for (int i = x; i != x + taille; i += 1) {
        if (map[y + taille - 1][i] != '.')
            return (1);
    }
    return (0);
}

int main()
{
	if(yhukmou)
		
}
	
	
