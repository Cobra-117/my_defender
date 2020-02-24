/*
** EPITECH PROJECT, 2020
** sdfghjk
** File description:
** sdfghjk
*/

#include "../include/my.h"

void init_tex_ui_turrets(Index_t *index)
{
    index->ui_turrets.arti_ui_mkI_tex =
    sfTexture_createFromFile("assets/UI/Arti_lvl1.png", NULL);
    index->ui_turrets.heavy_ui_mkI_tex =
    sfTexture_createFromFile("assets/UI/Heavy_lvl1.png", NULL);
    index->ui_turrets.tesla_ui_mkI_tex =
    sfTexture_createFromFile("assets/UI/Tesla_lvl1.png", NULL);
    index->ui_turrets.casu_ui_mkI_tex =
    sfTexture_createFromFile("assets/UI/Casu_lvl1.png", NULL);
    index->ui_turrets.flame_ui_mkI_tex =
    sfTexture_createFromFile("assets/UI/Flame_lvl1.png", NULL);
}

void init_spri__ui_turrets(Index_t *index)
{
    index->ui_turrets.arti_ui_mkI_spr = sfSprite_create();
    index->ui_turrets.heavy_ui_mkI_spr = sfSprite_create();
    index->ui_turrets.tesla_ui_mkI_spr = sfSprite_create();
    index->ui_turrets.casu_ui_mkI_spr = sfSprite_create();
    index->ui_turrets.flame_ui_mkI_spr = sfSprite_create();
}

void spri_to_tex(Index_t *index)
{
    sfSprite_setTexture(index->ui_turrets.arti_ui_mkI_spr,
    index->ui_turrets.arti_ui_mkI_tex, sfTrue);
    sfSprite_setTexture(index->ui_turrets.heavy_ui_mkI_spr,
    index->ui_turrets.heavy_ui_mkI_tex, sfTrue);
    sfSprite_setTexture(index->ui_turrets.tesla_ui_mkI_spr,
    index->ui_turrets.tesla_ui_mkI_tex, sfTrue);
    sfSprite_setTexture(index->ui_turrets.casu_ui_mkI_spr,
    index->ui_turrets.casu_ui_mkI_tex, sfTrue);
    sfSprite_setTexture(index->ui_turrets.flame_ui_mkI_spr,
    index->ui_turrets.flame_ui_mkI_tex, sfTrue);
}

void give_position(Index_t *index)
{
    index->ui_turrets.pos_ui_arti_mkI.x = 890;
    index->ui_turrets.pos_ui_arti_mkI.y = 80;
    sfSprite_setPosition(index->ui_turrets.arti_ui_mkI_spr,
    index->ui_turrets.pos_ui_arti_mkI);
    index->ui_turrets.pos_ui_heavy_mkI.x = 760;
    index->ui_turrets.pos_ui_heavy_mkI.y = 80;
    sfSprite_setPosition(index->ui_turrets.heavy_ui_mkI_spr,
    index->ui_turrets.pos_ui_heavy_mkI);
    index->ui_turrets.pos_ui_tesla_mkI.x = 1150;
    index->ui_turrets.pos_ui_tesla_mkI.y = 80;
    sfSprite_setPosition(index->ui_turrets.tesla_ui_mkI_spr,
    index->ui_turrets.pos_ui_tesla_mkI);
    index->ui_turrets.pos_ui_casu_mkI.x = 630;
    index->ui_turrets.pos_ui_casu_mkI.y = 80;
    sfSprite_setPosition(index->ui_turrets.casu_ui_mkI_spr,
    index->ui_turrets.pos_ui_casu_mkI);
    index->ui_turrets.pos_ui_flame_mkI.x = 1020;
    index->ui_turrets.pos_ui_flame_mkI.y = 80;
    sfSprite_setPosition(index->ui_turrets.flame_ui_mkI_spr,
    index->ui_turrets.pos_ui_flame_mkI);
}

void prepare_ui_tower(Index_t *index)
{
    init_tex_ui_turrets(index);
    init_spri__ui_turrets(index);
    spri_to_tex(index);
    give_position(index);
    give_turrets_scale(index);
}