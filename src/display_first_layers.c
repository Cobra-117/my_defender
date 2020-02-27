/*
** EPITECH PROJECT, 2020
** display first layers
** File description:
** display first layer
*/

#include "../include/my.h"

void debug_display(Index_t *index)
{
    sfVector2f pos;
    static float rotation = 180;

    pos.x = 192 + 32;
    pos.y = 80;
    if (compare_time(index, BAL_DEBUG, INTERV_DEBUG) == 1)
        rotation += 10;
    sfSprite_setPosition(index->turrets.casu_mkI_spr, pos);
    sfSprite_setRotation(index->turrets.casu_mkI_spr, rotation);
    sfRenderWindow_drawSprite(index->window, index->turrets.casu_mkI_spr, NULL);
}

void display_first_layers(Index_t *index)
{
    display_map(index);
    display_turrets(index);
    display_enemies(index);
    sfRenderWindow_drawSprite(index->window, index->turrets.casu_mkI_spr, NULL);
}