/*
** EPITECH PROJECT, 2020
** dfghj
** File description:
** sdfghj
*/

#include "../include/my.h"

int is_upgrade(Index_t *index)
{
    change_price_upgrade(index);
    check_the_upgrade(index);
    if (index->ui.coord_mouse_x <= index->ui_button_skills.click_pos_upgrade.x
    + index->ui_button_skills.click_size_upgrade.x && index->ui.coord_mouse_x
    >= index->ui_button_skills.click_pos_upgrade.x && index->ui.coord_mouse_y
    <= index->ui_button_skills.click_pos_upgrade.y +
    index->ui_button_skills.click_size_upgrade.y && index->ui.coord_mouse_y >=
    index->ui_button_skills.click_pos_upgrade.y && index->what_is_open == 3) {
        index->ui_is_upgrade = 1;
        if (index->ui_is_upgrade == 1)
            buy_upgrade(index);
    }
}