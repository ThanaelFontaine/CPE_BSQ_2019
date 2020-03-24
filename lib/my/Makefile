##
## EPITECH PROJECT, 2019
## makefile infin_add
## File description:
## compile lib etc
##

SRC	=	concat_params.c				\
		my_compute_factorial_rec.c 	\
		my_compute_power_rec.c 		\
		my_compute_square_root.c	\
		my_getnbr.c					\
		my_str_isalpha.c			\
		my_str_islower.c			\
		my_isneg.c					\
		my_str_is_num.c				\
		my_is_prime.c				\
		my_print_params.c			\
		my_putchar.c				\
		my_put_nbr.c				\
		my_putstr.c					\
		my_rev_params.c				\
		my_printf.c					\
		my_revstr.c					\
		my_showmem.c				\
		my_showstr.c				\
		my_show_word_array.c		\
		my_sort_int_array.c			\
		my_strcapitalize.c			\
		my_strcat.c					\
		my_strcmp.c					\
		my_strcpy.c					\
		my_strdup.c					\
		my_strlen.c					\
		my_strlowcase.c				\
		my_strncat.c				\
		my_strncmp.c				\
		my_str_to_word_array.c		\
		my_strncpy.c				\
		my_strstr.c					\
		my_strupcase.c				\
		my_swap.c					\
		my_strtol.c					\
		my_putnbr_base.c			\
		my_strndup.c				\
		compter_avant.c				\
		compter_caractere.c

OBJ	=	$(SRC:.c=.o)

NAME	=	test

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc libmy.a $(OBJ)
		rm -f $(OBJ)
		rm -f $(NAME)
		cp libmy.a ../../