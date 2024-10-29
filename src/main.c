/*
** EPITECH PROJECT, 2022
** My Sokoban
** File description:
** Sofiane Chabane
*/

#include "../include/my.h"

void rules(int ac,  char **av)
{
    if (strcmp(av[1], "-h") == 0) {
        my_putstr("USAGE\n");
        my_putstr("    ./my_sokoban map\n");
        my_putstr("DESCRIPTION\n");
        my_putstr("    map  file representing the warehouse map,");
        my_putstr("containing '#' for walls,\n");
        my_putstr("        'P' for the player, 'X' for boxes");
        my_putstr("and 'O' for storage locations.\n");
        exit(0);
    }
}

int main(int ac, char **av)
{
    ac < 2 ? exit(84) : rules(ac,av);
    player *p = malloc(sizeof(player));
    initscr();
    keypad(stdscr, true);
    p = position(av[1], p);
    verif_charact(p);
    erreur(p);
    while (1) {
        clear();
        print_map(p);
        move_play(p);
        tab_copy(p);
        refresh();
    }
    endwin();
    free(p);
    return 0;
}
