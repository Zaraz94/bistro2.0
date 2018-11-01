##
## EPITECH PROJECT, 2018
## makefile
## File description:
## simple makefile
##

CC	=	gcc -Wall -Wextra -W

SRC	=	main.c	\
		add_element_after.c \
		add_element_before.c \
		delete_element.c \
		new_list.c \
		print_list.c \
		my_putchar.c \
		eval_expr.c \
		create_list.c \
		do_op_add.c \
		change_list_to_str_after.c \
		change_list_to_str_before.c \
		my_revstr.c \
		do_op_parant.c

OBJ	=	$(SRC:.c=.o)

NAME	=	eval_expr

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
