##
## EPITECH PROJECT, 2023
## secured
## File description:
## Makefile
##

SRC	=	mini_printf/mini_printf.c	\
		mini_printf/my_count_digits.c	\
		mini_printf/my_put_nbr.c	\
		mini_printf/my_putchar.c	\
		mini_printf/my_putstr.c	\
		src/main.c \
		lib/len_tab.c \
		lib/strlen.c \
		lib/strcmp.c \
		lib/strdup.c \
		lib/realloc.c \
		lib/strcat.c \
		lib/my_atoi.c \
		lib/my_fgets.c \


OBJ		=	$(SRC:.c=.o)

NAME	=	matchstick

$(NAME):	$(OBJ)
			gcc -o $(NAME) $(OBJ)

all:	$(NAME)
		rm -f $(OBJ)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re: 	fclean all
