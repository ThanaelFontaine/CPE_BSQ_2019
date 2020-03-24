/*
** EPITECH PROJECT, 2019
** CPE_BSQ_2019
** File description:
** openfile.c
*/

#include "include/bsq.h"

char *fs_open_file(char const *filepath)
{
    char *str;
    int filedescriptor;
    struct stat s;

    filedescriptor = open(filepath, O_RDONLY);
    if (filedescriptor == -1) {
        write (2, "WARNING: No map found\n", 23);
        return (NULL);
    }
    stat(filepath, &s);
    if (s.st_size == 0) {
        write (2, "WARNING: Empty map\n", 20);
        return (NULL);
    }
    str = malloc(sizeof(char) * s.st_size + 1);
    read(filedescriptor, str, s.st_size);
    str[s.st_size] = '\0';
    return (str);
}