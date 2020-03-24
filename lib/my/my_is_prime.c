/*
** EPITECH PROJECT, 2019
** task06
** File description:
** ff
*/

int my_is_prime(int nb)
{
    int i = 0;
    int a = 1;

    while (i < nb) {
        if (nb % i == 0) {
            a = 0;
            i += 1;
        }
    }
    return (a);
}
