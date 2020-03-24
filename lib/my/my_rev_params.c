/*
** EPITECH PROJECT, 2019
** print params
** File description:
** rev_params
*/

int my_put_nbr(int n);

void my_putstr(char const *str);

void my_putchar(char c);

int my_rev_params(int argc, char **argv)
{
    int i = argc - 1;

    my_put_nbr(argc);
    while (i >= 0) {
        my_putstr(argv[i]);
        i -= 1;
        my_putchar('\n');
    }
    return (0);
}
