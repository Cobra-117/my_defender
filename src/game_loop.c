/*
** EPITECH PROJECT, 2020
** Game loop
** File description:
** Loop of the game
*/

#include "../include/my.h"

void check_event(Index_t *index)
{
    push_ui_tower(index);
    push_utility(index);
    push_skill(index);
    push_casu(index);
    push_heavy(index);
    push_arti(index);
    push_flamme(index);
    push_tesla(index);
    push_resume(index);
    push_go_menu(index);
    push_exit2(index);
    push_casu2(index);
    push_heavy2(index);
    push_arti2(index);
    push_flame2(index);
    push_tesla2(index);
    push_upgrade(index);
}

void manage_what_is_open(Index_t *index)
{
    if (index->what_is_open == 1) {
        print_ui_tower(index);
        change_ui_tower_colors(index);
        check_text(index);
    }
    if (index->what_is_open == 2) {
        print_ui_utilities(index);
        change_utility_colors(index);
    }
    if (index->what_is_open == 3) {
        print_ui_skills(index);
        change_skills_colors(index);
        check_text(index);
    }
    if (index->what_is_open == 4)
        print_pause_menu(index);
}

int game_main_function(Index_t *index)
{
    manage_waves(index);
    manage_enemies(index);
    check_event(index);
    display_first_layers(index);
    display_user_interface(index);
    manage_what_is_open(index);
    sfRenderWindow_display(index->window);
    sfRenderWindow_clear(index->window, sfBlack);
}

int game_loop(Index_t *index)
{
    quick_init(index);
    init_user_interface(index);
    while (game_main_function(index) != 1 && index->what_is_open != 5
    && index->what_is_open != 6);
    if (index->what_is_open == 6)
        return (-1);
}