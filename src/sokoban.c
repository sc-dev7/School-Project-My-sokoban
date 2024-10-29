/*
** EPITECH PROJECT, 2022
** My Sokoban
** File description:
** Sofiane Chabane
*/

#include "../include/my.h"

player *position(char *filepath, player *p)
{
    p->tab = str_to_word_array(filepath);
    p->tab2 = str_to_word_array(filepath);
    int i = 0;
    int j = 0;
    while (p->tab[i] != NULL) {
        while (p->tab[i][j] != '\0') {
            p->x = (p->tab[i][j] == 'P') ? j : p->x;
            p->y = (p->tab[i][j] == 'P') ? i : p->y;
        j++;
        }
        j = 0;
        i++;
    }
    return p;
}

player *position_x(char *filepath, player *p)
{
    p->tab = str_to_word_array(filepath);
    p->tab2 = str_to_word_array(filepath);
    int i = 0;
    int j = 0;
    while (p->tab2[i] != NULL) {
        while (p->tab2[i][j] != '\0') {
            p->xp = (p->tab2[i][j] == 'P') ? j : p->xp;
            p->yp = (p->tab2[i][j] == 'P') ? i : p->yp;
        j++;
        }
        j = 0;
        i++;
    }
    return p;
}

void print_map(player *p)
{
    int i = 0;
    while (p->tab[i] != NULL) {
        printw(p->tab[i]);
        printw("\n");
        i++;
    }
}
