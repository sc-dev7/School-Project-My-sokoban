/*
** EPITECH PROJECT, 2022
** My Sokoban
** File description:
** Sofiane Chabane
*/

#include "../include/my.h"

char *map(char *filepath)
{
    struct stat abc;
    stat(filepath, &abc);
    int fd;
    char *buf;
    buf = malloc(sizeof(char) * (abc.st_size + 1));
    fd = open(filepath, O_RDONLY);
    read(fd, buf, abc.st_size);
    return buf;
}

int ligne(char *str)
{
    int i = 0;
    int j = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            j++;
        }
        i++;
    }
    return j;
}

int colonne(char *str, int nb)
{
    int i = 0;
    while (str[nb] != '\n') {
        nb++;
        i++;
    }
    return i;
}

char *returnstr(char *str, int nb)
{
    int i = 0;
    char *strb;
    strb = malloc(sizeof(char) * colonne(str, nb));
    while (str[i] != '\n') {
        strb[i] = str[nb];
        i++;
        nb++;
    }
    return strb;
}

char **str_to_word_array(char *filepath)
{
    char *str = map(filepath);
    char **tab;
    int lmax = ligne(str);
    tab = malloc(sizeof(char *) * lmax + 1);
    int i = 0;
    int j = 0;
    while (i != lmax) {
        int cmax = colonne(str, j);
        tab[i] = malloc(sizeof(char) * cmax + 1);
        my_strcpy(tab[i], returnstr(str, j));
        i++;
        j = j + cmax + 1;
    }
    tab[i] = NULL;
    return tab;
}
