##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## sc
##

SRC	=	src/*.c

NAME	=	my_sokoban

all:
	gcc	-o	$(NAME)	$(SRC)	-g3 -lncurses

clean:
	rm	-f	*#

fclean:	clean
	rm	-f	$(NAME)

re:	fclean	all
