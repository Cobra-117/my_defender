/*
** EPITECH PROJECT, 2020
** functions
** File description:
** function prototyping
*/

#include "struct.h"
#include "includes.h"
void add_enemy(Index_t *index, int type);
int button_game_clicked(Index_t *index);
void buy_turret(Index_t *index);
void change_skills_colors(Index_t *index);
void change_ui_tower_colors(Index_t *index);
void change_utility_colors(Index_t *index);
void check_text(Index_t *index);
int compare_time(Index_t *index, int balise_nbr, float interval);

void display_enemies(Index_t *index);
void display_first_layers(Index_t *index);
void display_map(Index_t *index);
void display_snow(Index_t *index);
void display_user_interface(Index_t *index);

void free_structs(Index_t *index);
void free_objs(Index_t *index);
int game_loop(Index_t *index);
float get_turret_optimal_rotation(Index_t *index, sfVector2f pos);
void give_turrets_scale(Index_t *index);
void give_skills_scale(Index_t *index);
void info_casu(Index_t *index);
void info_casu2(Index_t *index);

void init_button_casu(Index_t *index);
void init_button_casu2(Index_t *index);
void init_button_upgrade(Index_t *index);
void init_enemies(Index_t *index);
void init_enemies_list(Index_t *index);
void init_map(Index_t *index);
void init_money_life(Index_t *index);
void init_obj(Index_t *index);
void init_price_turrets(Index_t *index);
void init_skill(Index_t *index);
void init_structs(Index_t *index);
void init_time(Index_t *index);
void init_turrets(Index_t *index);
void init_text_casu2(Index_t *index);
void init_turret_array(Index_t *index);
void init_turrets_origin(Index_t *index);
void init_turrets_rects(Index_t *index);
void init_turrets_value(Index_t *index);
void init_ui_tower(Index_t *index);
void init_user_interface(Index_t *index);
void init_utility(Index_t *index);
void init_wave(Index_t *index);
void init_window(Index_t *index);

int is_arti(Index_t *index);
int is_arti2(Index_t *index);
int is_casu(Index_t *index);
int is_casu2(Index_t *index);
int is_exit2(Index_t *index);
int is_flamme(Index_t *index);
int is_flame2(Index_t *index);
int is_go_menu(Index_t *index);
int is_heavy(Index_t *index);
int is_heavy2(Index_t *index);
void is_light_effect(Index_t *index);
int is_resume(Index_t *index);
int is_skill(Index_t *index);
void init_snow(visual_effects_t *vis_effect);
int is_tesla(Index_t *index);
int is_tesla2(Index_t *index);
int is_ui_tower(Index_t *index);
int is_upgrade(Index_t *index);
int is_utility(Index_t *index);

void give_utilities_scale(Index_t *index);
sfVector2f get_tile_from_pos(sfVector2f pos);
int main_menu(sfRenderWindow *window);

void manage_enemies(Index_t *index);
void manage_waves(Index_t *index);

void move_down(Index_t *index, enemies_list_t *current, sfVector2f tile);
void move_up(Index_t *index, enemies_list_t *current, sfVector2f tile);
void move_enemies(Index_t *index);
void move_forward(Index_t *index, enemies_list_t *current, sfVector2f tile);

void modify_money_arti(Index_t *index);
void modify_money_casu(Index_t *index);
void modify_money_flamme(Index_t *index);
void modify_money_heavy(Index_t *index);
void modify_money_tesla(Index_t *index);
void my_defender(void);
char *my_nbr_to_str(int i);
void place_is_valid(Index_t *index);

void prepare_bunker(Index_t *index);
void prepare_light_effect(Index_t *index);
void prepare_pause_button(Index_t *index);
void prepare_pause_menu(Index_t *index);
void prepare_text_arti(Index_t *index);
void prepare_text_casu(Index_t *index);
void prepare_text_flamme(Index_t *index);
void prepare_text_heavy(Index_t *index);
void prepare_text_money(Index_t *index);
void prepare_text_pause(Index_t *index);
void prepare_text_skill(Index_t *index);
void prepare_text_tesla(Index_t *index);
void prepare_text_tower(Index_t *index);
void prepare_text_utility(Index_t *index);
void prepare_ui_skills(Index_t *index);
void prepare_ui_tower(Index_t *index);
void prepare_ui_utilities(Index_t *index);

void print_pause_menu(Index_t *index);
void print_ui_skills(Index_t *index);
void print_ui_tower(Index_t *index);
void print_ui_utilities(Index_t *index);

void push_arti(Index_t *index);
void push_arti2(Index_t *index);
void push_casu(Index_t *index);
void push_casu2(Index_t *index);
void push_exit2(Index_t *index);
void push_flamme(Index_t *index);
void push_flame2(Index_t *index);
void push_go_menu(Index_t *index);
void push_heavy(Index_t *index);
void push_heavy2(Index_t *index);
void push_resume(Index_t *index);
void push_skill(Index_t *index);
void push_tesla(Index_t *index);
void push_tesla2(Index_t *index);
void push_ui_tower(Index_t *index);
void push_upgrade(Index_t *index);
void push_utility(Index_t *index);

void quick_init(Index_t *index);
void rm_enemy(Index_t *index, enemies_list_t *current);
void set_utilities_scale(Index_t *index);

int will_collision_if_move_down(Index_t *index, enemies_list_t *current);
int will_collision_if_move_forward(Index_t *index, enemies_list_t *current);
int will_collision_if_move_up(Index_t *index, enemies_list_t *current);

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_


#endif /* !FUNCTIONS_H_ */
