##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make file
##

NAME	= 	my_defender

RM 	= 	rm -f

SRCS	=	src/main.c						\
			src/my_defender.c				\
			src/init_struct.c				\
			src/init_obj.c					\
			src/init_window.c				\
			src/free_structs.c				\
			src/free_objects.c				\
			src/init_turrets.c				\
			src/init_enemies.c				\
			src/init_map.c					\
			src/display_map.c				\
			src/main_menu.c					\
			src/is_what_button.c			\
			src/set_text_menu.c				\
			src/init_button.c				\
			src/push.c						\
			src/game_loop.c					\
			src/user_interface.c			\
			src/init_button_interface.c		\
			src/button_game_clicked.c		\
			src/push_game.c					\
			src/is_game_button.c			\
			src/set_text_game.c				\
			src/prepare_ui_tower.c			\
			src/print_ui_tower.c			\
			src/give_turrets_scale.c		\
			src/init_wave.c					\
			src/init_enemies_list.c			\
			src/money_life.c				\
			src/my_nbr_to_str.c				\
			src/init_utilities.c			\
			src/give_utilities_scale.c		\
			src/init_skills.c				\
			src/give_skills_scale.c			\
			src/init_button_turrets.c		\
			src/push_button_turret.c		\
			src/is_turrets.c				\
			src/manage_enemies.c			\
			src/init_time.c					\
			src/info_turrets.c				\
			src/text_info_turrets.c 		\
			src/time_utilies.c				\
			src/change_text_colors.c		\
			src/check_text.c				\
			src/add_enemies.c				\
			src/quick_init.c				\
			src/print_pause_menu.c			\
			src/move_enemies.c				\
			src/display_first_layers.c		\
			src/display_enemies.c			\
			src/prepare_pause_button.c		\
			src/init_text_pause.c			\
			src/push_pause_buttons.c		\
			src/is_what_pause.c				\
			src/buy_turret.c				\
			src/init_price_turrets.c		\
			src/modify_money.c				\
			src/prepare_light_effect.c		\
			src/is_light_effect.c			\
			src/prepare_bunker.c			\
			src/move_directions.c			\
			src/will_collision_if_move.c	\
			src/rm_enemies.c				\
			src/manage_waves.c				\
			src/init_turrets_rect.c			\
			src/init_turrets_part2.c		\

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
