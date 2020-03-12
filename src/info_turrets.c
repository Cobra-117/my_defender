/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** fghjkl
*/

#include "../include/my.h"

void info_tesla(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_button_turret.click_pos_tesla.x +
    index->ui_button_turret.click_size_tesla.x && index->ui.coord_mouse_x >=
    index->ui_button_turret.click_pos_tesla.x && index->ui.coord_mouse_y <=
    index->ui_button_turret.click_pos_tesla.y +
    index->ui_button_turret.click_size_tesla.y && index->ui.coord_mouse_y >=
    index->ui_button_turret.click_pos_tesla.y && index->what_is_open == 1)
        index->ui_text.which_text = 5;
    else
        info_casu2(index);
}

void info_flamme(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_button_turret.click_pos_flamme.x +
    index->ui_button_turret.click_size_flamme.x && index->ui.coord_mouse_x >=
    index->ui_button_turret.click_pos_flamme.x && index->ui.coord_mouse_y <=
    index->ui_button_turret.click_pos_flamme.y +
    index->ui_button_turret.click_size_flamme.y && index->ui.coord_mouse_y >=
    index->ui_button_turret.click_pos_flamme.y && index->what_is_open == 1)
        index->ui_text.which_text = 4;
    else
        info_tesla(index);
}

void info_arti(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_button_turret.click_pos_arti.x +
    index->ui_button_turret.click_size_arti.x && index->ui.coord_mouse_x >=
    index->ui_button_turret.click_pos_arti.x && index->ui.coord_mouse_y <=
    index->ui_button_turret.click_pos_arti.y +
    index->ui_button_turret.click_size_arti.y && index->ui.coord_mouse_y >=
    index->ui_button_turret.click_pos_arti.y && index->what_is_open == 1)
        index->ui_text.which_text = 3;
    else
        info_flamme(index);
}

void info_heavy(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_button_turret.click_pos_heavy.x +
    index->ui_button_turret.click_size_heavy.x && index->ui.coord_mouse_x >=
    index->ui_button_turret.click_pos_heavy.x && index->ui.coord_mouse_y <=
    index->ui_button_turret.click_pos_heavy.y +
    index->ui_button_turret.click_size_heavy.y && index->ui.coord_mouse_y >=
    index->ui_button_turret.click_pos_heavy.y && index->what_is_open == 1)
        index->ui_text.which_text = 2;
    else
        info_arti(index);
}

void info_casu(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_button_turret.click_pos_casu.x +
    index->ui_button_turret.click_size_casu.x && index->ui.coord_mouse_x >=
    index->ui_button_turret.click_pos_casu.x && index->ui.coord_mouse_y <=
    index->ui_button_turret.click_pos_casu.y +
    index->ui_button_turret.click_size_casu.y && index->ui.coord_mouse_y >=
    index->ui_button_turret.click_pos_casu.y && index->what_is_open == 1)
        index->ui_text.which_text = 1;
    else
        info_heavy(index);
}