/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** fghjkl
*/

#include "../include/my.h"

void info_heavy(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_button_turret.click_pos_heavy.x +
    index->ui_button_turret.click_size_heavy.x && index->ui.coord_mouse_x >=
    index->ui_button_turret.click_pos_heavy.x && index->ui.coord_mouse_y <=
    index->ui_button_turret.click_pos_heavy.y + index->ui_button_turret.
    click_size_heavy.y && index->ui.coord_mouse_y >= index->ui_button_turret.
    click_pos_heavy.y && index->what_is_open == 1)
        index->ui_text.which_text = 2;
    else
        index->ui_text.which_text = 0;
}

void info_casu(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_button_turret.click_pos_casu.x +
    index->ui_button_turret.click_size_casu.x && index->ui.coord_mouse_x >=
    index->ui_button_turret.click_pos_casu.x && index->ui.coord_mouse_y <=
    index->ui_button_turret.click_pos_casu.y + index->ui_button_turret.
    click_size_casu.y && index->ui.coord_mouse_y >= index->ui_button_turret.
    click_pos_casu.y && index->what_is_open == 1)
        index->ui_text.which_text = 1;
    else
        info_heavy(index);
}