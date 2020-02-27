/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** sdfghj
*/

#include "../include/my.h"

void is_light_effect5(Index_t *index)
{
    if (index->light_effect_play == 19 && index->what_is_open == 3) {
        index->ui_turrets.pos_light_effect.x = 1119;
        sfSprite_setPosition(index->ui_turrets.light_effect_spr,
        index->ui_turrets.pos_light_effect);
        sfRenderWindow_drawSprite(index->window,
        index->ui_turrets.light_effect_spr, NULL);
    }
    if (index->light_effect_play == 20 && index->what_is_open == 3) {
        index->ui_turrets.pos_light_effect.x = 1249;
        sfSprite_setPosition(index->ui_turrets.light_effect_spr,
        index->ui_turrets.pos_light_effect);
        sfRenderWindow_drawSprite(index->window,
        index->ui_turrets.light_effect_spr, NULL);
    }
}

void is_light_effect4(Index_t *index)
{
    if (index->light_effect_play == 17 && index->what_is_open == 3) {
        index->ui_turrets.pos_light_effect.x = 859;
        sfSprite_setPosition(index->ui_turrets.light_effect_spr,
        index->ui_turrets.pos_light_effect);
        sfRenderWindow_drawSprite(index->window,
        index->ui_turrets.light_effect_spr, NULL);
    }
    if (index->light_effect_play == 18 && index->what_is_open == 3) {
        index->ui_turrets.pos_light_effect.x = 989;
        sfSprite_setPosition(index->ui_turrets.light_effect_spr,
        index->ui_turrets.pos_light_effect);
        sfRenderWindow_drawSprite(index->window,
        index->ui_turrets.light_effect_spr, NULL);
    }
    is_light_effect5(index);
}

void is_light_effect3(Index_t *index)
{
    if (index->light_effect_play == 15 && index->what_is_open == 1) {
        index->ui_turrets.pos_light_effect.x = 1249;
        sfSprite_setPosition(index->ui_turrets.light_effect_spr,
        index->ui_turrets.pos_light_effect);
        sfRenderWindow_drawSprite(index->window,
        index->ui_turrets.light_effect_spr, NULL);
    }
    if (index->light_effect_play == 16 && index->what_is_open == 3) {
        index->ui_turrets.pos_light_effect.x = 729;
        sfSprite_setPosition(index->ui_turrets.light_effect_spr,
        index->ui_turrets.pos_light_effect);
        sfRenderWindow_drawSprite(index->window,
        index->ui_turrets.light_effect_spr, NULL);
    }
    is_light_effect4(index);
}

void is_light_effect2(Index_t *index)
{
    if (index->light_effect_play == 13 && index->what_is_open == 1) {
        index->ui_turrets.pos_light_effect.x = 989;
        sfSprite_setPosition(index->ui_turrets.light_effect_spr,
        index->ui_turrets.pos_light_effect);
        sfRenderWindow_drawSprite(index->window,
        index->ui_turrets.light_effect_spr, NULL);
    }
    if (index->light_effect_play == 14 && index->what_is_open == 1) {
        index->ui_turrets.pos_light_effect.x = 1119;
        sfSprite_setPosition(index->ui_turrets.light_effect_spr,
        index->ui_turrets.pos_light_effect);
        sfRenderWindow_drawSprite(index->window,
        index->ui_turrets.light_effect_spr, NULL);
    }
    is_light_effect3(index);
}

void is_light_effect(Index_t *index)
{
    if (index->light_effect_play == 11 && index->what_is_open == 1) {
        index->ui_turrets.pos_light_effect.x = 729;
        sfSprite_setPosition(index->ui_turrets.light_effect_spr,
        index->ui_turrets.pos_light_effect);
        sfRenderWindow_drawSprite(index->window,
        index->ui_turrets.light_effect_spr, NULL);
    }
    if (index->light_effect_play == 12 && index->what_is_open == 1) {
        index->ui_turrets.pos_light_effect.x = 859;
        sfSprite_setPosition(index->ui_turrets.light_effect_spr,
        index->ui_turrets.pos_light_effect);
        sfRenderWindow_drawSprite(index->window,
        index->ui_turrets.light_effect_spr, NULL);
    }
    is_light_effect2(index);
}