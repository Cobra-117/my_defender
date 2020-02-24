/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** sdfghjk
*/

#include "../include/my.h"

void set_skills_scale(Index_t *index)
{
    sfSprite_setScale(index->ui_skills.order_ui_spr,
    index->ui_skills.scale_ui_order);
}

void give_skills_scale(Index_t *index)
{
    index->ui_skills.scale_ui_order.x = 1.5;
    index->ui_skills.scale_ui_order.y = 1.5;
    set_skills_scale(index);
}