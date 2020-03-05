/*
** EPITECH PROJECT, 2020
** init struct
** File description:
** initialize the structures
*/

#include "../include/my.h"

void init_life_bar(Index_t *index)
{
    index->lifebar.red_tex =
    sfTexture_createFromFile("assets/UI/redlife.png", NULL);
    index->lifebar.red_spr = sfSprite_create();
    sfSprite_setTexture
    (index->lifebar.red_spr, index->lifebar.red_tex, sfFalse);
    index->lifebar.green_tex =
    sfTexture_createFromFile("assets/UI/greenlife.png", NULL);
    index->lifebar.green_spr = sfSprite_create();
    sfSprite_setTexture
    (index->lifebar.green_spr, index->lifebar.green_tex, sfFalse);
}

void init_structs(Index_t *index)
{
    init_window(index);
    init_obj(index);
    init_map(index);
    init_wave(index);
    init_turret_array(index);
    init_time(index);
    init_snow(&index->vis_effects);
    init_life_bar(index);
}