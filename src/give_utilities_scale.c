/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** sdfghj
*/

#include "../include/my.h"

void set_utilities_scale(Index_t *index)
{
    sfSprite_setScale(index->ui_utilities.mine_ui_spr,
    index->ui_utilities.scale_ui_mine);
    sfSprite_setScale(index->ui_utilities.order_ui_spr,
    index->ui_utilities.scale_ui_order);
    sfSprite_setScale(index->ui_utilities.tchernobyl_ui_spr,
    index->ui_utilities.scale_ui_tchernobyl);
}

void give_utilities_scale(Index_t *index)
{
    index->ui_utilities.scale_ui_mine.x = 1.5;
    index->ui_utilities.scale_ui_mine.y = 1.5;
    index->ui_utilities.scale_ui_order.x = 0.8;
    index->ui_utilities.scale_ui_order.y = 0.8;
    index->ui_utilities.scale_ui_tchernobyl.x = 1.5;
    index->ui_utilities.scale_ui_tchernobyl.y = 1.5;
    set_utilities_scale(index);
}