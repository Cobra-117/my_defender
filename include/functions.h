/*
** EPITECH PROJECT, 2020
** functions
** File description:
** function prototyping
*/

#include "struct.h"
#include "includes.h"
int button_game_clicked(Index_t *index);
void change_skills_colors(Index_t *index);
void change_ui_tower_colors(Index_t *index);
void change_utility_colors(Index_t *index);
void check_text(Index_t *index);
int compare_time(Index_t *index, int balise_nbr, float interval);
void display_map(Index_t *index);
void display_user_interface(Index_t *index);
void free_structs(Index_t *index);
void free_objs(Index_t *index);
int game_loop(Index_t *index);
void give_turrets_scale(Index_t *index);
void give_skills_scale(Index_t *index);
void info_casu(Index_t *index);

void init_button_casu(Index_t *index);
void init_enemies(Index_t *index);
void init_enemies_list(Index_t *index);
void init_map(Index_t *index);
void init_money_life(Index_t *index);
void init_obj(Index_t *index);
void init_skill(Index_t *index);
void init_structs(Index_t *index);
void init_ui_tower(Index_t *index);
void init_turrets(Index_t *index);
void init_user_interface(Index_t *index);
void init_utility(Index_t *index);
void init_wave(Index_t *index);
void init_window(Index_t *index);

int is_arti(Index_t *index);
int is_casu(Index_t *index);
int is_flamme(Index_t *index);
int is_heavy(Index_t *index);
int is_skill(Index_t *index);
int is_tesla(Index_t *index);
int is_ui_tower(Index_t *index);
int is_utility(Index_t *index);


void my_defender(void);
int main_menu(sfRenderWindow *window);
void manage_enemies(Index_t *index);
char *my_nbr_to_str(int i);
void give_utilities_scale(Index_t *index);

void prepare_text_casu(Index_t *index);
void prepare_text_money(Index_t *index);
void prepare_text_skill(Index_t *index);
void prepare_text_tower(Index_t *index);
void prepare_text_utility(Index_t *index);
void prepare_ui_skills(Index_t *index);
void prepare_ui_tower(Index_t *index);
void prepare_ui_utilities(Index_t *index);

void print_ui_skills(Index_t *index);
void print_ui_tower(Index_t *index);
void print_ui_utilities(Index_t *index);

void push_arti(Index_t *index);
void push_casu(Index_t *index);
void push_flamme(Index_t *index);
void push_heavy(Index_t *index);
void push_tesla(Index_t *index);
void push_ui_tower(Index_t *index);
void push_utility(Index_t *index);
void push_skill(Index_t *index);

void quick_init(Index_t *index);
void set_utilities_scale(Index_t *index);

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_


#endif /* !FUNCTIONS_H_ */
