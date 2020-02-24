/*
** EPITECH PROJECT, 2020
** init enemies
** File description:
** init the enemies (tanks)
*/

#include "../include/my.h"

void link_enemies_sprites_and_textures(Index_t *index)
{
    sfSprite_setTexture(index->enemies.heavy_spr,
    index->enemies.heavy_tex, sfTrue);
    sfSprite_setTexture(index->enemies.med_spr,
    index->enemies.med_tex, sfTrue);
    sfSprite_setTexture(index->enemies.light_spr,
    index->enemies.light_tex, sfTrue);
}

void init_enemies_sprites(Index_t *index)
{
    index->enemies.heavy_spr = sfSprite_create();
    index->enemies.med_spr = sfSprite_create();
    index->enemies.light_spr = sfSprite_create();
}

void init_enemies_tex(Index_t *index)
{
    index->enemies.heavy_tex =
    sfTexture_createFromFile("assets/tanks/Heavy.png", NULL);
    index->enemies.med_tex =
    sfTexture_createFromFile("assets/tanks/Med.png", NULL);
    index->enemies.light_tex =
    sfTexture_createFromFile("assets/tanks/Light.png", NULL);
}

void init_enemies(Index_t *index)
{
    init_enemies_tex(index);
    init_enemies_sprites(index);
    link_enemies_sprites_and_textures(index);
}