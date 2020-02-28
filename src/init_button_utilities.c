/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** sdf
*/

#include "../include/my.h"

void init_button_mine(Index_t *index)
{
    index->ui_button_utilities.pos_mine.x = 660;
    index->ui_button_utilities.pos_mine.y = 100;
    index->ui_button_utilities.size_mine.x = 80;
    index->ui_button_utilities.size_mine.y = 95;
    index->ui_button_utilities.click_pos_mine.x = 0;
    index->ui_button_utilities.click_pos_mine.y = 0;
    index->ui_button_utilities.button_mine = sfRectangleShape_create();
    sfRectangleShape_setPosition(index->ui_button_utilities.button_mine,
    index->ui_button_utilities.pos_mine);
    sfRectangleShape_setSize(index->ui_button_utilities.button_mine,
    index->ui_button_utilities.size_mine);
}

void init_button_order(Index_t *index)
{
    index->ui_button_utilities.pos_order.x = 780;
    index->ui_button_utilities.pos_order.y = 100;
    index->ui_button_utilities.size_order.x = 105;
    index->ui_button_utilities.size_order.y = 100;
    index->ui_button_utilities.click_pos_order.x = 0;
    index->ui_button_utilities.click_pos_order.y = 0;
    index->ui_button_utilities.button_order = sfRectangleShape_create();
    sfRectangleShape_setPosition(index->ui_button_utilities.button_order,
    index->ui_button_utilities.pos_order);
    sfRectangleShape_setSize(index->ui_button_utilities.button_order,
    index->ui_button_utilities.size_order);
}

void init_button_tchernobyl(Index_t *index)
{
    index->ui_button_utilities.pos_tchernobyl.x = 910;
    index->ui_button_utilities.pos_tchernobyl.y = 100;
    index->ui_button_utilities.size_tchernobyl.x = 100;
    index->ui_button_utilities.size_tchernobyl.y = 95;
    index->ui_button_utilities.click_pos_tchernobyl.x = 0;
    index->ui_button_utilities.click_pos_tchernobyl.y = 0;
    index->ui_button_utilities.button_tchernobyl = sfRectangleShape_create();
    sfRectangleShape_setPosition(index->ui_button_utilities.button_tchernobyl,
    index->ui_button_utilities.pos_tchernobyl);
    sfRectangleShape_setSize(index->ui_button_utilities.button_tchernobyl,
    index->ui_button_utilities.size_tchernobyl);
}

void init_button_utilities(Index_t *index)
{
    init_button_mine(index);
    init_button_order(index);
    init_button_tchernobyl(index);
}