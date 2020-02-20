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
}

int game_main_function(Index_t *index)
{
    check_event(index);
    display_map(index);
    display_user_interface(index);
    sfRenderWindow_display(index->window);
}

int game_loop(Index_t *index)
{
    init_user_interface(index);
    while (game_main_function(index) != 1);

}