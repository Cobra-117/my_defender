/*
** EPITECH PROJECT, 2020
** functions
** File description:
** function prototyping
*/

#include "struct.h"
#include "includes.h"
int button_game_clicked(Index_t *index);
void display_map(Index_t *index);
void display_user_interface(Index_t *index);
void free_structs(Index_t *index);
void free_objs(Index_t *index);
int game_loop(Index_t *index);
void give_turrets_scale(Index_t *index);

void init_enemies(Index_t *index);
void init_enemies_list(Index_t *index);
void init_map(Index_t *index);
void init_obj(Index_t *index);
void init_skill(Index_t *index);
void init_structs(Index_t *index);
void init_ui_tower(Index_t *index);
void init_turrets(Index_t *index);
void init_user_interface(Index_t *index);
void init_utility(Index_t *index);
void init_wave(Index_t *index);
void init_window(Index_t *index);

int is_skill(Index_t *index);
int is_ui_tower(Index_t *index);
int is_utility(Index_t *index);

void my_defender(void);
int main_menu(sfRenderWindow *window);
void prepare_text_skill(Index_t *index);
void prepare_text_tower(Index_t *index);
void prepare_text_utility(Index_t *index);
void prepare_ui_tower(Index_t *index);
void print_ui_tower(Index_t *index);
void push_ui_tower(Index_t *index);
void push_utility(Index_t *index);
void push_skill(Index_t *index);

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_


#endif /* !FUNCTIONS_H_ */
