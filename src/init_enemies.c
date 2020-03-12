/*
** EPITECH PROJECT, 2020
** init enemies
** File description:
** init the enemies (tanks)
*/

#include "../include/my.h"

void init_enemies_scale_and_origin(Index_t *index)
{
    sfVector2f scale;
    sfVector2f origin;

    scale.x = 0.25;
    scale.y = 0.25;
    origin.x = 128;
    origin.y = 130;
    sfSprite_setScale(index->enemies.heavy_spr, scale);
    sfSprite_setOrigin(index->enemies.heavy_spr, origin);
    sfSprite_setScale(index->enemies.med_spr, scale);
    sfSprite_setOrigin(index->enemies.med_spr, origin);
    sfSprite_setScale(index->enemies.light_spr, scale);
    sfSprite_setOrigin(index->enemies.light_spr, origin);
}

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
    init_enemies_scale_and_origin(index);
}