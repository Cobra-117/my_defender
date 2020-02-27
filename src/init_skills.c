/*
** EPITECH PROJECT, 2020
** sdfghjk
** File description:
** sdfghjk
*/

#include "../include/my.h"

void init_tex_ui_skills(Index_t *index)
{
    index->ui_skills.casu_sk_tex =
    sfTexture_createFromFile("assets/UI/Casu_lvl2.png", NULL);
    index->ui_skills.heavy_sk_tex =
    sfTexture_createFromFile("assets/UI/Heavy_lvl2.png", NULL);
    index->ui_skills.arti_sk_tex =
    sfTexture_createFromFile("assets/UI/Arti_lvl2.png", NULL);
    index->ui_skills.flame_sk_tex =
    sfTexture_createFromFile("assets/UI/Flame_lvl2.png", NULL);
    index->ui_skills.tesla_sk_tex =
    sfTexture_createFromFile("assets/UI/Tesla_lvl2.png", NULL);
}

void init_spri__ui_skills(Index_t *index)
{
    index->ui_skills.casu_sk_spr = sfSprite_create();
    index->ui_skills.heavy_sk_spr = sfSprite_create();
    index->ui_skills.arti_sk_spr = sfSprite_create();
    index->ui_skills.flame_sk_spr = sfSprite_create();
    index->ui_skills.tesla_sk_spr = sfSprite_create();
}

void spri_to_tex_skills(Index_t *index)
{
    sfSprite_setTexture(index->ui_skills.casu_sk_spr,
    index->ui_skills.casu_sk_tex, sfTrue);
    sfSprite_setTexture(index->ui_skills.heavy_sk_spr,
    index->ui_skills.heavy_sk_tex, sfTrue);
    sfSprite_setTexture(index->ui_skills.arti_sk_spr,
    index->ui_skills.arti_sk_tex, sfTrue);
    sfSprite_setTexture(index->ui_skills.flame_sk_spr,
    index->ui_skills.flame_sk_tex, sfTrue);
    sfSprite_setTexture(index->ui_skills.tesla_sk_spr,
    index->ui_skills.tesla_sk_tex, sfTrue);
}

void give_position_skills(Index_t *index)
{
    index->ui_skills.pos_sk_casu.x = 630;
    index->ui_skills.pos_sk_casu.y = 80;
    sfSprite_setPosition(index->ui_skills.casu_sk_spr,
    index->ui_skills.pos_sk_casu);
    index->ui_skills.pos_sk_heavy.x = 760;
    index->ui_skills.pos_sk_heavy.y = 80;
    sfSprite_setPosition(index->ui_skills.heavy_sk_spr,
    index->ui_skills.pos_sk_heavy);
    index->ui_skills.pos_sk_arti.x = 890;
    index->ui_skills.pos_sk_arti.y = 80;
    sfSprite_setPosition(index->ui_skills.arti_sk_spr,
    index->ui_skills.pos_sk_arti);
    index->ui_skills.pos_sk_flame.x = 1020;
    index->ui_skills.pos_sk_flame.y = 80;
    sfSprite_setPosition(index->ui_skills.flame_sk_spr,
    index->ui_skills.pos_sk_flame);
    index->ui_skills.pos_sk_tesla.x = 1150;
    index->ui_skills.pos_sk_tesla.y = 80;
    sfSprite_setPosition(index->ui_skills.tesla_sk_spr,
    index->ui_skills.pos_sk_tesla);
}

void prepare_ui_skills(Index_t *index)
{

    init_tex_ui_skills(index);
    init_spri__ui_skills(index);
    spri_to_tex_skills(index);
    give_position_skills(index);
    give_skills_scale(index);
}