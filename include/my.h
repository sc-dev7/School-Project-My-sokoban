/*
** EPITECH PROJECT, 2022
** my all include
** File description:
** Sofiane Chabane
*/

#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <ncurses.h>
#include <string.h>

typedef struct {
    char **tab;
    char **tab2;
    int xx;
    int yx;
    int x;
    int y;
    int xp;
    int yp;
} player;


    int my_strlen(char const *str);
    void my_putchar(char c);
    void my_putstr(char const *str);
    int my_put_nbr(int nb);
    int my_getnbr(char const *str);
    char *my_strcpy(char *dest, char const *src);
    char *my_revstr(char *str);
    char **str_to_word_array(char *str);
    int my_strcmp(char const *s1, char const *s2);
    void move_play(player *p);
    void tab_copy(player *p);
    void erreur(player *p);
    void charact(player *p);
    void verif_charact(player *p);
    player *position(char *filepath, player *p);
    void print_map(player *p);
