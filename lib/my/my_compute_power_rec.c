/*
** EPITECH PROJECT, 2019
** power rec
** File description:
** compute power rec
*/

int my_compute_power_rec(int nb, int i)
{
    if (i == 0) {
        return (1);
    } else if (i < 0) {
        return (0);
    } else {
        nb = nb * my_compute_power_rec(nb, i);
        return (nb);
    }
}
