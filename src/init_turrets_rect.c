/*
** EPITECH PROJECT, 2020
** init turrets
** File description:
** init the rect
*/

#include "../include/my.h"

sfIntRect init_flame_turret_rect(Index_t *index)
{
    sfIntRect rect;

    rect.height = 456;
    rect.width = 256;
    rect.top = 1;
    rect.left = 1;
    return (rect);
}

sfIntRect init_regular_turret_rect(Index_t *index)
{
    sfIntRect rect;

    rect.height = 256;
    rect.width = 256;
    rect.top = 1;
    rect.left = 1;
    return (rect);
}

void init_turrets_rects(Index_t *index)
{
    sfIntRect regular = init_regular_turret_rect(index);
    sfIntRect flame = init_flame_turret_rect(index);

    sfSprite_setTextureRect(index->turrets.casu_mkI_spr, regular);
    sfSprite_setTextureRect(index->turrets.heavy_mkI_spr, regular);
    sfSprite_setTextureRect(index->turrets.arti_mkI_spr, regular);
    sfSprite_setTextureRect(index->turrets.flame_mkI_spr, flame);
    sfSprite_setTextureRect(index->turrets.tesla_mkI_spr, regular);
    sfSprite_setTextureRect(index->turrets.casu_mkII_spr, regular);
    sfSprite_setTextureRect(index->turrets.heavy_mkII_spr, regular);
    sfSprite_setTextureRect(index->turrets.arti_mkII_spr, regular);
    sfSprite_setTextureRect(index->turrets.flame_mkII_spr, flame);
    sfSprite_setTextureRect(index->turrets.tesla_mkII_spr, regular);
}