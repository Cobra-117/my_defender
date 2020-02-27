/*
** EPITECH PROJECT, 2020
** init turrets
** File description:
** init the rect
*/

#include "../include/my.h"

sfIntRect init_regular_turret_rect(Index_t *index)
{
    sfIntRect rect;

    rect.height = 256;
    rect.width = 256;
    rect.top = 0;
    rect.left = 1;
    return (rect);
}

void init_turrets_rects(Index_t *index)
{
    sfIntRect regular = init_regular_turret_rect(index);

    sfSprite_setTextureRect(index->turrets.casu_mkI_spr, regular);
}