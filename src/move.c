/*
** EPITECH PROJECT, 2022
** My Sokoban
** File description:
** Sofiane Chabane
*/

#include "../include/my.h"

void move_left(player *p)
{
    if (p->tab[p->y][p->x - 1] == ' ' || p->tab[p->y][p->x - 1] == 'O') {
        p->tab[p->y][p->x] = ' ';
        p->tab[p->y][p->x - 1] = 'P';
        p->x--;
        return;
    }
    if ((p->tab[p->y][p->x - 1] == 'X') && (p->tab[p->y][p->x - 2] == ' ')) {
        p->tab[p->y][p->x] = ' ';
        p->tab[p->y][p->x - 1] = 'P';
        p->tab[p->y][p->x - 2] = 'X';
        p->x--;
        return;
    }
    if ((p->tab[p->y][p->x - 1] == 'X') && (p->tab[p->y][p->x - 2] == 'O')) {
        p->tab[p->y][p->x] = ' ';
        p->tab[p->y][p->x - 1] = 'P';
        p->tab[p->y][p->x - 2] = 'X';
        p->x--;
        return;
    }
}

void move_right(player *p)
{
    if (p->tab[p->y][p->x + 1] == ' ' || p->tab[p->y][p->x + 1] == 'O') {
        p->tab[p->y][p->x] = ' ';
        p->tab[p->y][ p->x + 1] = 'P';
        p->x++;
        return;
    }
    if ((p->tab[p->y][p->x + 1] == 'X') && (p->tab[p->y][p->x + 2] == ' ')) {
        p->tab[p->y][p->x] = ' ';
        p->tab[p->y][p->x + 1] = 'P';
        p->tab[p->y][p->x + 2] = 'X';
        p->x++;
        return;
    }
    if ((p->tab[p->y][p->x + 1] == 'X') && (p->tab[p->y][p->x + 2] == 'O')) {
        p->tab[p->y][p->x] = ' ';
        p->tab[p->y][p->x + 1] = 'P';
        p->tab[p->y][p->x + 2] = 'X';
        p->x++;
        return;
    }
}

void move_up(player *p)
{
    if (p->tab[p->y - 1][p->x] == ' ' || p->tab[p->y - 1][p->x] == 'O') {
        p->tab[p->y][p->x] = ' ';
        p->tab[p->y - 1][p->x] = 'P';
        p->y--;
        return;
    }
    if ((p->tab[p->y - 1][p->x] == 'X') && (p->tab[p->y - 2][p->x] == ' ')) {
        p->tab[p->y][p->x] = ' ';
        p->tab[p->y - 1][p->x] = 'P';
        p->tab[p->y - 2][p->x] = 'X';
        p->y--;
        return;
    }
    if ((p->tab[p->y - 1][p->x] == 'X') && (p->tab[p->y - 2][p->x] == 'O')) {
        p->tab[p->y][p->x] = ' ';
        p->tab[p->y - 1][p->x] = 'P';
        p->tab[p->y - 2][p->x] = 'X';
        p->y--;
        return;
    }
}

void move_down(player *p)
{
    if (p->tab[p->y + 1][p->x] == ' ' || p->tab[p->y + 1][p->x] == 'O') {
        p->tab[p->y][p->x] = ' ';
        p->tab[p->y + 1][p->x] = 'P';
        p->y++;
        return;
    }
    if ((p->tab[p->y + 1][p->x] == 'X') && (p->tab[p->y + 2][p->x] == ' ')) {
        p->tab[p->y][p->x] = ' ';
        p->tab[p->y + 1][p->x] = 'P';
        p->tab[p->y + 2][p->x] = 'X';
        p->y++;
        return;
    }
    if ((p->tab[p->y + 1][p->x] == 'X') && (p->tab[p->y + 2][p->x] == 'O')) {
        p->tab[p->y][p->x] = ' ';
        p->tab[p->y + 1][p->x] = 'P';
        p->tab[p->y + 2][p->x] = 'X';
        p->y++;
        return;
    }
}

void move_play(player *p)
{
    int ch = getch();
    if (ch == KEY_LEFT) {
        move_left(p);
    }
    if (ch == KEY_RIGHT) {
        move_right(p);
    }
    if (ch == KEY_DOWN) {
        move_down(p);
    }
    if (ch == KEY_UP) {
        move_up(p);
    }
    if (ch == 32) {
        p->tab = p->tab2;
    }
}
