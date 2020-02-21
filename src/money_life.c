/*
** EPITECH PROJECT, 2020
** dfghjklm
** File description:
** dfghjkl
*/

#include "../include/my.h"

void set_tex_money_life(Index_t *index)
{
    index->ui_info.money_tex =
    sfTexture_createFromFile("assets/UI/Money.png", NULL);
    index->ui_info.life_tex =
    sfTexture_createFromFile("assets/UI/Life.png", NULL);
}

void set_spr_money_life(Index_t *index)
{
    index->ui_info.money_spr = sfSprite_create();
    index->ui_info.life_spr = sfSprite_create();
}

void link_money_life(Index_t *index)
{
    sfSprite_setTexture(index->ui_info.money_spr,
    index->ui_info.money_tex, sfTrue);
    sfSprite_setTexture(index->ui_info.life_spr,
    index->ui_info.life_tex, sfTrue);
}

void give_pos_money_life(Index_t *index)
{
    index->ui_info.pos_money.x = 1000;
    index->ui_info.pos_money.y = 10;
    sfSprite_setPosition(index->ui_info.money_spr,
    index->ui_info.pos_money);
    index->ui_info.pos_life.x = 20;
    index->ui_info.pos_life.y = 900;
    sfSprite_setPosition(index->ui_info.life_spr,
    index->ui_info.pos_life);
    index->ui_info.scale_money.x = 0.5;
    index->ui_info.scale_money.y = 0.5;
    sfSprite_setScale(index->ui_info.money_spr,
    index->ui_info.scale_money);
    index->ui_info.scale_life.x = 1;
    index->ui_info.scale_life.y = 1;
    sfSprite_setScale(index->ui_info.life_spr,
    index->ui_info.scale_life);
}

void init_money_life(Index_t *index)
{
    set_tex_money_life(index);
    set_spr_money_life(index);
    link_money_life(index);
    give_pos_money_life(index);
}