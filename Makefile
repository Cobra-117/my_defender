##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make file
##

NAME	= 	my_defender

RM 	= 	rm -f

SRCS	=	src/main.c			\
			src/my_defender.c	\
			src/init_struct.c	\
			src/init_obj.c		\
			src/init_window.c	\
			src/free_structs.c	\
			src/free_objects.c	\

OBJ 	=	$(SRCS.c= .o)

CFLAGS	=	-Wall -O0 -Wextra

all:	$(NAME)

$(NAME):library $(OBJS)
	gcc -o $(NAME) $(SRCS) $(OBJ) -L lib/my -l my -l csfml-graphics -l csfml-system -l csfml-audio -g3
library:
	make -C ./lib/my
$(OBJ) :
	gcc -g3 -c $(SRCS) -Wall -Wextra --pedantic
clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
