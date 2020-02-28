/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** sdfghj
*/

#include "../include/my.h"

void info_tesla2(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_button_skills.click_pos_tesla2.x +
    index->ui_button_skills.click_size_tesla2.x && index->ui.coord_mouse_x >=
    index->ui_button_skills.click_pos_tesla2.x && index->ui.coord_mouse_y <=
    index->ui_button_skills.click_pos_tesla2.y + index->ui_button_skills.
    click_size_tesla2.y && index->ui.coord_mouse_y >= index->ui_button_skills.
    click_pos_tesla2.y && index->what_is_open == 3)
        index->ui_text.which_text = 10;
    else
        info_mine(index);
}

void info_flame2(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_button_skills.click_pos_flame2.x +
    index->ui_button_skills.click_size_flame2.x && index->ui.coord_mouse_x >=
    index->ui_button_skills.click_pos_flame2.x && index->ui.coord_mouse_y <=
    index->ui_button_skills.click_pos_flame2.y + index->ui_button_skills.
    click_size_flame2.y && index->ui.coord_mouse_y >= index->ui_button_skills.
    click_pos_flame2.y && index->what_is_open == 3)
        index->ui_text.which_text = 9;
    else
        info_tesla2(index);
}

void info_arti2(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_button_skills.click_pos_arti2.x +
    index->ui_button_skills.click_size_arti2.x && index->ui.coord_mouse_x >=
    index->ui_button_skills.click_pos_arti2.x && index->ui.coord_mouse_y <=
    index->ui_button_skills.click_pos_arti2.y + index->ui_button_skills.
    click_size_arti2.y && index->ui.coord_mouse_y >= index->ui_button_skills.
    click_pos_arti2.y && index->what_is_open == 3)
        index->ui_text.which_text = 8;
    else
        info_flame2(index);
}

void info_heavy2(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_button_skills.click_pos_heavy2.x +
    index->ui_button_skills.click_size_heavy2.x && index->ui.coord_mouse_x >=
    index->ui_button_skills.click_pos_heavy2.x && index->ui.coord_mouse_y <=
    index->ui_button_skills.click_pos_heavy2.y + index->ui_button_skills.
    click_size_heavy2.y && index->ui.coord_mouse_y >= index->ui_button_skills.
    click_pos_heavy2.y && index->what_is_open == 3)
        index->ui_text.which_text = 7;
    else
        info_arti2(index);
}

void info_casu2(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_button_skills.click_pos_casu2.x +
    index->ui_button_skills.click_size_casu2.x && index->ui.coord_mouse_x >=
    index->ui_button_skills.click_pos_casu2.x && index->ui.coord_mouse_y <=
    index->ui_button_skills.click_pos_casu2.y + index->ui_button_skills.
    click_size_casu2.y && index->ui.coord_mouse_y >= index->ui_button_skills.
    click_pos_casu2.y && index->what_is_open == 3)
        index->ui_text.which_text = 6;
    else
        info_heavy2(index);
}