/*
** EPITECH PROJECT, 2020
** init enemies
** File description:
** init the enemies (tanks)
*/

#include "../include/my.h"

void link_enemies_sprites_and_textures(Index_t *index)
{
    sfSprite_setTexture(index->enemies.heavyHull_spr,
    index->enemies.heavyHull_tex, sfTrue);
    sfSprite_setTexture(index->enemies.heavyW_spr,
    index->enemies.heavyW_tex, sfTrue);
    sfSprite_setTexture(index->enemies.medHull_spr,
    index->enemies.medHull_tex, sfTrue);
    sfSprite_setTexture(index->enemies.medW_spr,
    index->enemies.medW_tex, sfTrue);
    sfSprite_setTexture(index->enemies.lightHull_spr,
    index->enemies.lightHull_tex, sfTrue);
    sfSprite_setTexture(index->enemies.lightW_spr,
    index->enemies.lightW_tex, sfTrue);
}

void init_enemies_sprites(Index_t *index)
{
    index->enemies.heavyHull_spr = sfSprite_create();
    index->enemies.heavyW_spr = sfSprite_create();
    index->enemies.medHull_spr = sfSprite_create();
    index->enemies.medW_spr = sfSprite_create();
    index->enemies.lightHull_spr = sfSprite_create();
    index->enemies.lightW_spr = sfSprite_create();
}

void init_enemies_tex(Index_t *index)
{
    index->enemies.heavyHull_tex =
    sfTexture_createFromFile("assets/tanks/Heavy_H.png", NULL);
    index->enemies.heavyW_tex =
    sfTexture_createFromFile("assets/tanks/Heavy_W.png", NULL);
    index->enemies.medHull_tex =
    sfTexture_createFromFile("assets/tanks/Med_H.png", NULL);
    index->enemies.medW_tex =
    sfTexture_createFromFile("assets/tanks/Med_W.png", NULL);
    index->enemies.lightHull_tex =
    sfTexture_createFromFile("assets/tanks/Light_H.png", NULL);
    index->enemies.lightW_tex =
    sfTexture_createFromFile("assets/tanks/Light_W.png", NULL);
}

void init_enemies(Index_t *index)
{
    init_enemies_tex(index);
    init_enemies_sprites(index);
    link_enemies_sprites_and_textures(index);
}