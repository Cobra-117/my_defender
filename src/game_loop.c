/*
** EPITECH PROJECT, 2020
** Game loop
** File description:
** Loop of the game
*/

#include "../include/my.h"

int game_main_function(Index_t *index)
{
    display_map(index);
    sfRenderWindow_display(index->window);
}

int game_loop(Index_t *index)
{
    while (game_main_function(index) != 1);

}