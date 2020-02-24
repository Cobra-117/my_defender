/*
** EPITECH PROJECT, 2020
** sdfghjk
** File description:
** sdfghjk
*/

#include "../include/my.h"

void init_tex_ui_skills(Index_t *index)
{
    index->ui_skills.order_ui_tex =
    sfTexture_createFromFile("assets/UI/Order_227.png", NULL);
}

void init_spri__ui_skills(Index_t *index)
{
    index->ui_skills.order_ui_spr = sfSprite_create();
}

void spri_to_tex_skills(Index_t *index)
{
    sfSprite_setTexture(index->ui_skills.order_ui_spr,
    index->ui_skills.order_ui_tex, sfTrue);
}

void give_position_skills(Index_t *index)
{
    index->ui_skills.pos_ui_order.x = 650;
    index->ui_skills.pos_ui_order.y = 100;
    sfSprite_setPosition(index->ui_skills.order_ui_spr,
    index->ui_skills.pos_ui_order);
}

void prepare_ui_skills(Index_t *index)
{
    init_tex_ui_skills(index);
    init_spri__ui_skills(index);
    spri_to_tex_skills(index);
    give_position_skills(index);
    give_skills_scale(index);
}