/*
** EPITECH PROJECT, 2019
** print params
** File description:
** jdo
*/

int my_put_nbr(int n);

void my_putstr(char const *str);

void my_putchar(char c);

int main(int argc, char **argv)
{
    int i = 0;

    my_put_nbr(argc);
    while (i != argc) {
        my_putstr(argv[i]);
        i += 1;
        my_putchar('\n');
    }
    return (0);
}
