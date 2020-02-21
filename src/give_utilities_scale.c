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
    sfSprite_setScale(index->ui_utilities.barb_ui_spr,
    index->ui_utilities.scale_ui_barb);
}

void give_utilities_scale(Index_t *index)
{
    index->ui_utilities.scale_ui_mine.x = 0.5;
    index->ui_utilities.scale_ui_mine.y = 0.5;
    index->ui_utilities.scale_ui_barb.x = 0.5;
    index->ui_utilities.scale_ui_barb.y = 0.5;
    set_utilities_scale(index);
}