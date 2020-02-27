/*
** EPITECH PROJECT, 2020
** init turrets part 2
** File description:
** init other things on the turrets
*/

#include "../include/my.h"

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

    sfSprite_setOrigin(index->turrets.casu_mkI_spr, regular_origin);
}