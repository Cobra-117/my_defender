/*
** EPITECH PROJECT, 2020
** sfghjk
** File description:
** dfghjk
*/

#include "../include/my.h"

void set_turrets_scale(Index_t *index)
{
    sfSprite_setScale(index->ui_turrets.arti_ui_mkI_spr,
    index->ui_turrets.scale_ui_arti_mkI);
    sfSprite_setScale(index->ui_turrets.heavy_ui_mkI_spr,
    index->ui_turrets.scale_ui_heavy_mkI);
    sfSprite_setScale(index->ui_turrets.casu_ui_mkI_spr,
    index->ui_turrets.scale_ui_casu_mkI);
    sfSprite_setScale(index->ui_turrets.tesla_ui_mkI_spr,
    index->ui_turrets.scale_ui_tesla_mkI);
    sfSprite_setScale(index->ui_turrets.flame_ui_mkI_spr,
    index->ui_turrets.scale_ui_flame_mkI);
}

void give_turrets_scale(Index_t *index)
{
    index->ui_turrets.scale_ui_arti_mkI.x = 0.5;
    index->ui_turrets.scale_ui_arti_mkI.y = 0.5;
    index->ui_turrets.scale_ui_heavy_mkI.x = 0.5;
    index->ui_turrets.scale_ui_heavy_mkI.y = 0.5;
    index->ui_turrets.scale_ui_casu_mkI.x = 0.5;
    index->ui_turrets.scale_ui_casu_mkI.y = 0.5;
    index->ui_turrets.scale_ui_tesla_mkI.x = 0.5;
    index->ui_turrets.scale_ui_tesla_mkI.y = 0.5;
    index->ui_turrets.scale_ui_flame_mkI.x = 0.5;
    index->ui_turrets.scale_ui_flame_mkI.y = 0.5;
    set_turrets_scale(index);
}