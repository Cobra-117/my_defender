/*
** EPITECH PROJECT, 2020
** free objects
** File description:
** free the objects
*/

#include "../include/my.h"

void destroy_enemies(Index_t *index)
{
    sfTexture_destroy(index->enemies.heavy_tex);
    sfTexture_destroy(index->enemies.med_tex);
    sfTexture_destroy(index->enemies.light_tex);
    sfSprite_destroy(index->enemies.heavy_spr);
    sfSprite_destroy(index->enemies.med_spr);
    sfSprite_destroy(index->enemies.light_spr);
}

void destroy_turrets_tex(Index_t *index)
{
    sfTexture_destroy(index->turrets.arti_mkI_tex);
    sfTexture_destroy(index->turrets.arti_mkII_tex);
    sfTexture_destroy(index->turrets.heavy_mkI_tex);
    sfTexture_destroy(index->turrets.heavy_mkII_tex);
    sfTexture_destroy(index->turrets.tesla_mkI_tex);
    sfTexture_destroy(index->turrets.tesla_mkII_tex);
    sfTexture_destroy(index->turrets.casu_mkI_tex);
    sfTexture_destroy(index->turrets.casu_mkII_tex);
    sfTexture_destroy(index->turrets.flame_mkI_tex);
    sfTexture_destroy(index->turrets.flame_mkII_tex);
}

void destroy_turrets_spr(Index_t *index)
{
    sfSprite_destroy(index->turrets.arti_mkI_spr);
    sfSprite_destroy(index->turrets.arti_mkII_spr);
    sfSprite_destroy(index->turrets.heavy_mkI_spr);
    sfSprite_destroy(index->turrets.heavy_mkII_spr);
    sfSprite_destroy(index->turrets.tesla_mkI_spr);
    sfSprite_destroy(index->turrets.tesla_mkII_spr);
    sfSprite_destroy(index->turrets.casu_mkI_spr);
    sfSprite_destroy(index->turrets.casu_mkII_spr);
    sfSprite_destroy(index->turrets.flame_mkI_spr);
    sfSprite_destroy(index->turrets.flame_mkII_spr);
}

void free_objs(Index_t *index)
{
    destroy_enemies(index);
    destroy_turrets_tex(index);
    destroy_turrets_spr(index);
    sfRenderWindow_destroy(index->window);
}