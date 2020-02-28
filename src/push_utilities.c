/*
** EPITECH PROJECT, 2020
** sdf
** File description:
** sdfg
*/

#include "../include/my.h"

void push_mine(Index_t *index)
{
    index->ui_button_utilities.click_pos_mine = sfRectangleShape_getPosition
    (index->ui_button_utilities.button_mine);
    index->ui_button_utilities.click_size_mine = sfRectangleShape_getSize
    (index->ui_button_utilities.button_mine);
    button_game_clicked(index);
}

void push_order(Index_t *index)
{
    index->ui_button_utilities.click_pos_order = sfRectangleShape_getPosition
    (index->ui_button_utilities.button_order);
    index->ui_button_utilities.click_size_order = sfRectangleShape_getSize
    (index->ui_button_utilities.button_order);
    button_game_clicked(index);
}

void push_tchernobyl(Index_t *index)
{
    index->ui_button_utilities.click_pos_tchernobyl =
    sfRectangleShape_getPosition
    (index->ui_button_utilities.button_tchernobyl);
    index->ui_button_utilities.click_size_tchernobyl = sfRectangleShape_getSize
    (index->ui_button_utilities.button_tchernobyl);
    button_game_clicked(index);
}