/*
** EPITECH PROJECT, 2020
** dfghj
** File description:
** dfghj
*/

#include "../include/my.h"

int is_upgrade2(Index_t *index)
{
    if (index->ui.coord_mouse_x <=
    index->ui_button_utilities.click_pos_upgrade2.x +
    index->ui_button_utilities.click_size_upgrade2.x &&
    index->ui.coord_mouse_x >=
    index->ui_button_utilities.click_pos_upgrade2.x &&
    index->ui.coord_mouse_y <=
    index->ui_button_utilities.click_pos_upgrade2.y +
    index->ui_button_utilities.click_size_upgrade2.y &&
    index->ui.coord_mouse_y >=
    index->ui_button_utilities.click_pos_upgrade2.y &&
    index->what_is_open == 2) {
        index->upgrading = 1;
    }
}