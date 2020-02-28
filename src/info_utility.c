/*
** EPITECH PROJECT, 2020
** sdfghjkl
** File description:
** sdfghjklm
*/

#include "../include/my.h"

int info_tchernobyl(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_button_utilities
    .click_pos_tchernobyl.x + index->ui_button_utilities.click_size_tchernobyl.
    x && index->ui.coord_mouse_x >= index->ui_button_utilities.
    click_pos_tchernobyl.x && index->ui.coord_mouse_y <= index->
    ui_button_utilities.click_pos_tchernobyl.y + index->ui_button_utilities.
    click_size_tchernobyl.y && index->ui.coord_mouse_y >= index->
    ui_button_utilities.click_pos_tchernobyl.y && index->what_is_open == 2) {
        index->ui_text.which_text = 13;
    } else
        index->ui_text.which_text = 0;
}

int info_order(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_button_utilities.
    click_pos_order.x + index->ui_button_utilities.click_size_order.x &&
    index->ui.coord_mouse_x >= index->ui_button_utilities.click_pos_order.x
    && index->ui.coord_mouse_y <= index->ui_button_utilities.click_pos_order
    .y + index->ui_button_utilities.click_size_order.y && index->ui.
    coord_mouse_y >= index->ui_button_utilities.click_pos_order.y &&
    index->what_is_open == 2) {
        index->ui_text.which_text = 12;
    } else
        info_tchernobyl(index);
}

int info_mine(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_button_utilities.click_pos_mine.x +
    index->ui_button_utilities.click_size_mine.x && index->ui.coord_mouse_x >=
    index->ui_button_utilities.click_pos_mine.x && index->ui.coord_mouse_y <=
    index->ui_button_utilities.click_pos_mine.y + index->ui_button_utilities.
    click_size_mine.y && index->ui.coord_mouse_y >= index->ui_button_utilities.
    click_pos_mine.y && index->what_is_open == 2) {
        index->ui_text.which_text = 11;
    } else
        info_order(index);
}