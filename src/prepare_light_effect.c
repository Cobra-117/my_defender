/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** sdfghj
*/

#include "../include/my.h"

void prepare_light_effect(Index_t *index)
{
    index->ui_turrets.light_effect_tex =
    sfTexture_createFromFile("assets/UI/White_Square.png", NULL);
    index->ui_turrets.light_effect_spr = sfSprite_create();
    sfSprite_setTexture(index->ui_turrets.light_effect_spr,
    index->ui_turrets.light_effect_tex, sfTrue);
    index->ui_turrets.pos_light_effect.x = 680;
    index->ui_turrets.pos_light_effect.y = 74;
    sfSprite_setPosition(index->ui_turrets.light_effect_spr,
    index->ui_turrets.pos_light_effect);
    index->ui_turrets.scale_light_effect.x = 0.22;
    index->ui_turrets.scale_light_effect.y = 0.5;
    sfSprite_setScale(index->ui_turrets.light_effect_spr,
    index->ui_turrets.scale_light_effect);
    sfSprite_rotate(index->ui_turrets.light_effect_spr, 90);
    index->light_effect_play = 0;
}