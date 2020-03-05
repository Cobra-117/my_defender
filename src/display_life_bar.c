/*
** EPITECH PROJECT, 2020
** display life bar
** File description:
** display the life bar
*/

#include "../include/my.h"

void display_green_bar(Index_t *index, enemies_list_t *current)
{
    sfVector2f pos;
    sfVector2f scale;

    scale.x = 1;
    scale.y = 1;
    pos.x = current->coordinates.x - 16;
    pos.y = current->coordinates.y - 35;
    if (current->type == 1)
        scale.x = (float)current->life / LIGHT_HEALTH;
    if (current->type == 2)
        scale.x = (float)current->life / MEDIUM_HEALTH;
    if (current->type == 3)
        scale.x = (float)current->life / HEAVY_HEALTH;
    sfSprite_setScale(index->lifebar.green_spr, scale);
    sfSprite_setPosition(index->lifebar.green_spr, pos);
    sfRenderWindow_drawSprite(index->window, index->lifebar.green_spr, NULL);
}

void display_red_bar(Index_t *index, enemies_list_t *current)
{
    sfVector2f pos;

    pos.x = current->coordinates.x - 16;
    pos.y = current->coordinates.y - 35;
    sfSprite_setPosition(index->lifebar.red_spr, pos);
    sfRenderWindow_drawSprite(index->window, index->lifebar.red_spr, NULL);
}

void display_life_bar(Index_t *index, enemies_list_t *current)
{
    display_red_bar(index, current);
    display_green_bar(index, current);
}