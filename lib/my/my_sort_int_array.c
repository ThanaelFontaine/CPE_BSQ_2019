/*
** EPITECH PROJECT, 2019
** sort array
** File description:
** sort int array
*/

#include <stdlib.h>

void my_sort_int_array(int *array, int size)
{
    int tempo;
    int a = 0;
    int b = 0;

    while (a != size) {
        a += 1;
        while (a != size) {
            a -= 1;
            b += 1;
            if (array[b] > array [b + 1]) {
                tempo = array[b + 1];
                array[b + 1] = array[b];
                array[b] = tempo;
            }
        }
    }
}
