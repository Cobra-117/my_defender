##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make file
##

NAME	= 	my_defender

RM 	= 	rm -f

SRCS	=	src/main.c				\
			src/my_defender.c		\
			src/init_struct.c		\
			src/init_obj.c			\
			src/init_window.c		\
			src/free_structs.c		\
			src/free_objects.c		\
			src/init_turrets.c		\
			src/init_enemies.c		\
			src/init_map.c			\
			src/display_map.c		\
			src/main_menu.c			\
			src/is_what_button.c	\
			src/set_text_menu.c		\
			src/init_button.c		\
			src/push.c				\
			src/game_loop.c			\
			src/user_interface.c	\
			src/init_button_interface.c	\
			src/button_game_clicked.c	\
			src/push_game.c			\
			src/is_game_button.c	\
			src/set_text_game.c		\
			src/prepare_ui_tower.c	\
			src/print_ui_tower.c	\
			src/give_turrets_scale.c\

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
