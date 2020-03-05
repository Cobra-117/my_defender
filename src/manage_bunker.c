/*
** EPITECH PROJECT, 2020
** manage bunker
** File description:
** manage the bunker
*/

#include "../include/my.h"

void bunker_greenlife_bar(Index_t *index)
{
    sfVector2f pos;
    sfVector2f scale;
    sfVector2f defaultScale;

    pos.x = 1200;
    pos.y = 870;
    scale.x = 7 * ((float)index->bunker_life / BUNKER_LIFE);
    scale.y = 7;
    defaultScale.x = 1;
    defaultScale.y = 1;
    sfSprite_setPosition(index->lifebar.green_spr, pos);
    sfSprite_setScale(index->lifebar.green_spr, scale);
    sfRenderWindow_drawSprite(index->window, index->lifebar.green_spr, NULL);
    sfSprite_setScale(index->lifebar.green_spr, defaultScale);

}

void bunker_redlife_bar(Index_t *index)
{
    sfVector2f pos;
    sfVector2f scale;
    sfVector2f defaultScale;

    pos.x = 1200;
    pos.y = 870;
    scale.x = 7;
    scale.y = 7;
    defaultScale.x = 1;
    defaultScale.y = 1;
    sfSprite_setPosition(index->lifebar.red_spr, pos);
    sfSprite_setScale(index->lifebar.red_spr, scale);
    sfRenderWindow_drawSprite(index->window, index->lifebar.red_spr, NULL);
    sfSprite_setScale(index->lifebar.red_spr, defaultScale);

}

void display_bunker(Index_t *index)
{
    bunker_redlife_bar(index);
    bunker_greenlife_bar(index);
}