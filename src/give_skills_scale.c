/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** sdfghjk
*/

#include "../include/my.h"

void set_skills_scale(Index_t *index)
{
    sfSprite_setScale(index->ui_skills.casu_sk_spr,
    index->ui_skills.scale_sk_casu);
    sfSprite_setScale(index->ui_skills.heavy_sk_spr,
    index->ui_skills.scale_sk_heavy);
    sfSprite_setScale(index->ui_skills.arti_sk_spr,
    index->ui_skills.scale_sk_arti);
    sfSprite_setScale(index->ui_skills.flame_sk_spr,
    index->ui_skills.scale_sk_flame);
    sfSprite_setScale(index->ui_skills.tesla_sk_spr,
    index->ui_skills.scale_sk_tesla);
}

void give_skills_scale(Index_t *index)
{
    index->ui_skills.scale_sk_casu.x = 0.5;
    index->ui_skills.scale_sk_casu.y = 0.5;
    index->ui_skills.scale_sk_heavy.x = 0.5;
    index->ui_skills.scale_sk_heavy.y = 0.5;
    index->ui_skills.scale_sk_arti.x = 0.5;
    index->ui_skills.scale_sk_arti.y = 0.5;
    index->ui_skills.scale_sk_flame.x = 0.5;
    index->ui_skills.scale_sk_flame.y = 0.5;
    index->ui_skills.scale_sk_tesla.x = 0.5;
    index->ui_skills.scale_sk_tesla.y = 0.5;
    set_skills_scale(index);
}