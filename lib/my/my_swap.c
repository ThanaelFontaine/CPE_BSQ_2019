/*
** EPITECH PROJECT, 2019
** my_swap
** File description:
** erre
*/

#include <unistd.h>

void my_swap(int *a, int *b)
{
    int i = *a;

    *a = *b;
    *b = i;
}
