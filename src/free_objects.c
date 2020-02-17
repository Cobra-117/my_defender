/*
** EPITECH PROJECT, 2020
** free objects
** File description:
** free the objects
*/

#include "../include/my.h"

void destroy_textures(Index_t *index)
{
    sfTexture_destroy(index->enemies.heavyHull_tex);
    sfTexture_destroy(index->enemies.heavyW_tex);
    sfTexture_destroy(index->enemies.medHull_tex);
    sfTexture_destroy(index->enemies.medW_tex);
    sfTexture_destroy(index->enemies.lightHull_tex);
    sfTexture_destroy(index->enemies.lightW_tex);
}

void destroy_sprites(Index_t *index)
{
    sfSprite_destroy(index->enemies.heavyHull_spr);
    sfSprite_destroy(index->enemies.heavyW_spr);
    sfSprite_destroy(index->enemies.medHull_spr);
    sfSprite_destroy(index->enemies.medW_spr);
    sfSprite_destroy(index->enemies.lightHull_spr);
    sfSprite_destroy(index->enemies.lightW_spr);
}

void free_objs(Index_t *index)
{
    destroy_sprites(index);
    destroy_textures(index);
    sfRenderWindow_destroy(index->window);
}