/*
** EPITECH PROJECT, 2022
** My Sokoban
** File description:
** Sofiane Chabane
*/

#include "../include/my.h"

int nb_char(player *p, char c)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (p->tab[i] != NULL) {
        while (p->tab[i][j] != '\0') {
            (p->tab[i][j] == c) ? k++ : 0;
            j++;
        }
        j = 0;
        i++;
    }
    return k;
}

void verif_charact(player *p)
{
    int i = 0;
    int j = 0;
    while (p->tab[i] != NULL) {
        while (p->tab[i][j] != '\0') {
            (p->tab[i][j] != ' ' && p->tab[i][j] != '#'
            && p->tab[i][j] != 'O' && p->tab[i][j] != 'X'
            && p->tab[i][j] != 'P') ? exit (84) : 0;
            j++;
        }
        j = 0;
        i++;
    }
}

void tab_copy(player *p)
{
    for (int i = 0; p->tab2[i] != NULL; i++) {
        for (int j = 0; p->tab2[i][j] != '\0'; j++) {
            (p->tab2[i][j] == 'O' && p->tab[i][j] == ' ')
            ? p->tab[i][j] = 'O' : 0;
        }
    }
}

void erreur(player *p)
{
    int x = nb_char(p, 'X');
    int o = nb_char(p, 'O');
    int np = nb_char(p, 'P');
    if (o != x) {
        exit (84);
    }
    if (o < 1 || x < 1) {
        exit (84);
    }
    if (np != 1) {
        exit (84);
    }
}
