/*
** EPITECH PROJECT, 2020
** init turrets
** File description:
** init the turrets
*/

#include "../include/my.h"

void init_turrets_scale(Index_t *index)
{
    sfVector2f scale;

    scale.x = 0.33;
    scale.y = 0.33;

    sfSprite_setScale(index->turrets.casu_mkI_spr, scale);
    sfSprite_setScale(index->turrets.heavy_mkI_spr, scale);
    sfSprite_setScale(index->turrets.arti_mkI_spr, scale);
    sfSprite_setScale(index->turrets.flame_mkI_spr, scale);
    sfSprite_setScale(index->turrets.tesla_mkI_spr, scale);
    sfSprite_setScale(index->turrets.casu_mkII_spr, scale);
    sfSprite_setScale(index->turrets.heavy_mkII_spr, scale);
    sfSprite_setScale(index->turrets.arti_mkII_spr, scale);
    sfSprite_setScale(index->turrets.flame_mkII_spr, scale);
    sfSprite_setScale(index->turrets.tesla_mkII_spr, scale);
}

void link_turrets_sprites_and_textures(Index_t *index)
{
    sfSprite_setTexture(index->turrets.arti_mkI_spr,
    index->turrets.arti_mkI_tex, sfTrue);
    sfSprite_setTexture(index->turrets.arti_mkII_spr,
    index->turrets.arti_mkII_tex, sfTrue);
    sfSprite_setTexture(index->turrets.heavy_mkI_spr,
    index->turrets.heavy_mkI_tex, sfTrue);
    sfSprite_setTexture(index->turrets.heavy_mkII_spr,
    index->turrets.heavy_mkII_tex, sfTrue);
    sfSprite_setTexture(index->turrets.tesla_mkI_spr,
    index->turrets.tesla_mkI_tex, sfTrue);
    sfSprite_setTexture(index->turrets.tesla_mkII_spr,
    index->turrets.tesla_mkII_tex, sfTrue);
    sfSprite_setTexture(index->turrets.casu_mkI_spr,
    index->turrets.casu_mkI_tex, sfTrue);
    sfSprite_setTexture(index->turrets.casu_mkII_spr,
    index->turrets.casu_mkII_tex, sfTrue);
    sfSprite_setTexture(index->turrets.flame_mkI_spr,
    index->turrets.flame_mkI_tex, sfTrue);
    sfSprite_setTexture(index->turrets.flame_mkII_spr,
    index->turrets.flame_mkII_tex, sfTrue);
}

void init_turrets_sprites(Index_t *index)
{
    index->turrets.arti_mkI_spr = sfSprite_create();
    index->turrets.arti_mkII_spr = sfSprite_create();
    index->turrets.heavy_mkI_spr = sfSprite_create();
    index->turrets.heavy_mkII_spr = sfSprite_create();
    index->turrets.tesla_mkI_spr = sfSprite_create();
    index->turrets.tesla_mkII_spr = sfSprite_create();
    index->turrets.casu_mkI_spr = sfSprite_create();
    index->turrets.casu_mkII_spr = sfSprite_create();
    index->turrets.flame_mkI_spr = sfSprite_create();
    index->turrets.flame_mkII_spr = sfSprite_create();
}

void init_turrets_tex(Index_t *index)
{
    index->turrets.arti_mkI_tex =
    sfTexture_createFromFile("assets/turrets/Arti_lvl1.png", NULL);
    index->turrets.arti_mkII_tex =
    sfTexture_createFromFile("assets/turrets/Arti_lvl2.png", NULL);
    index->turrets.heavy_mkI_tex =
    sfTexture_createFromFile("assets/turrets/Heavy_lvl1.png", NULL);
    index->turrets.heavy_mkII_tex =
    sfTexture_createFromFile("assets/turrets/Heavy_lvl2.png", NULL);
    index->turrets.tesla_mkI_tex =
    sfTexture_createFromFile("assets/turrets/Tesla_lvl1.png", NULL);
    index->turrets.tesla_mkII_tex =
    sfTexture_createFromFile("assets/turrets/Tesla_lvl2.png", NULL);
    index->turrets.casu_mkI_tex =
    sfTexture_createFromFile("assets/turrets/Casu_lvl1.png", NULL);
    index->turrets.casu_mkII_tex =
    sfTexture_createFromFile("assets/turrets/Casu_lvl2.png", NULL);
    index->turrets.flame_mkI_tex =
    sfTexture_createFromFile("assets/turrets/Flame_lvl1.png", NULL);
    index->turrets.flame_mkII_tex =
    sfTexture_createFromFile("assets/turrets/Flame_lvl2.png", NULL);
}

void init_turrets(Index_t *index)
{
    init_turrets_tex(index);
    init_turrets_sprites(index);
    link_turrets_sprites_and_textures(index);
    init_turrets_origin(index);
    init_turrets_rects(index);
    init_turrets_scale(index);
}
