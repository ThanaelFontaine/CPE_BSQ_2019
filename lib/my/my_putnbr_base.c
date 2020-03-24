/*
** EPITECH PROJECT, 2019
** my_putnbr_base
** File description:
** my_putnbr_base
*/

#include "../../include/my.h"

static int displaynbr_base(const int nbr, const int l, const char *base)
{
    int i = 0;

    if (nbr < 0)
    {
        my_putchar('-');
        i = nbr % l * (-1);
        displaynbr_base(nbr / l * -1, l, base);
        my_putchar(base[i]);
    }
    if (nbr > 0)
    {
        i = nbr % l;
        displaynbr_base(nbr / l, l, base);
        my_putchar(base[i]);
    }
    return 0;
}

int my_putnbr_base(int nbr, const char *base)
{
    if (nbr == 0)
    {
        my_putchar('0');
        return 0;
    }
    const int len = my_strlen(base);
    return displaynbr_base(nbr, len, base);
}
