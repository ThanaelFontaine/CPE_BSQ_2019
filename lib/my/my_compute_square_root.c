/*
** EPITECH PROJECT, 2019
** square root
** File description:
** my square root
*/

int my_compute_square_root(int nb)
{
    int i = 2;

    while (i < nb) {
        if (i * i == nb) {
            return (i);
        }
        i += 1;
    }
    return (0);
}
