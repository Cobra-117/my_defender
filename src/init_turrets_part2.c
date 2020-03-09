/*
** EPITECH PROJECT, 2020
** init turrets part 2
** File description:
** init other things on the turrets
*/

#include "../include/my.h"

sfVector2f init_flame_turrets_origin(Index_t *index)
{
    sfVector2f origin;

    origin.x = 128;
    origin.y = 335;
    return (origin);
}

sfVector2f init_regular_turrets_origin(Index_t *index)
{
    sfVector2f origin;

    origin.x = 128;
    origin.y = 200;
    return (origin);
}

void init_turrets_origin(Index_t *index)
{
    sfVector2f regular_origin = init_regular_turrets_origin(index);
    sfVector2f flame_origin = init_flame_turrets_origin(index);

    sfSprite_setOrigin(index->turrets.casu_mkI_spr, regular_origin);
    sfSprite_setOrigin(index->turrets.heavy_mkI_spr, regular_origin);
    sfSprite_setOrigin(index->turrets.arti_mkI_spr, regular_origin);
    sfSprite_setOrigin(index->turrets.flame_mkI_spr, regular_origin);
    sfSprite_setOrigin(index->turrets.tesla_mkI_spr, regular_origin);
    sfSprite_setOrigin(index->turrets.casu_mkII_spr, regular_origin);
    sfSprite_setOrigin(index->turrets.heavy_mkII_spr, regular_origin);
    sfSprite_setOrigin(index->turrets.arti_mkII_spr, regular_origin);
    sfSprite_setOrigin(index->turrets.flame_mkII_spr, regular_origin);
    sfSprite_setOrigin(index->turrets.tesla_mkII_spr, regular_origin);
}