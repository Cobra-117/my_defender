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
}

int game_main_function(Index_t *index)
{
    //manage_enemies(index);
    check_event(index);
    display_map(index);
    display_user_interface(index);
    if (index->what_is_open == 1) {
        print_ui_tower(index);
        sfText_setColor(index->ui_text.txt_tower, sfBlack);
        sfText_setColor(index->ui_text.txt_utility, sfWhite);
        sfText_setColor(index->ui_text.txt_skill, sfWhite);
    }
    if (index->what_is_open == 2) {
        print_ui_utilities(index);
        sfText_setColor(index->ui_text.txt_tower, sfWhite);
        sfText_setColor(index->ui_text.txt_utility, sfBlack);
        sfText_setColor(index->ui_text.txt_skill, sfWhite);
    }
    if (index->what_is_open == 3) {
        print_ui_skills(index);
        sfText_setColor(index->ui_text.txt_tower, sfWhite);
        sfText_setColor(index->ui_text.txt_utility, sfWhite);
        sfText_setColor(index->ui_text.txt_skill, sfBlack);
    }
    sfRenderWindow_display(index->window);
}

int game_loop(Index_t *index)
{
    init_user_interface(index);
    while (game_main_function(index) != 1);

}