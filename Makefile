##
## EPITECH PROJECT, 2019
## makefile infin_add
## File description:
## compile lib etc
##

SRC	=	move.c 					\
		openfile.c 				\
		bsq.c					\

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C ./lib/my
	gcc -o $(NAME) $(OBJ) ./libmy.a -W -Werror -Wall -Wextra -O3
clean:
	rm -f $(OBJ)
	rm -f libmy.a
fclean:	clean
	rm -f $(NAME)
re:	fclean all
