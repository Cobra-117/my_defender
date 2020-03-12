/*
** EPITECH PROJECT, 2020
** sdfghjk
** File description:
** sdfghj
*/

#include "../include/my.h"

int is_casu2(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_button_skills.click_pos_casu2.x +
    index->ui_button_skills.click_size_casu2.x && index->ui.coord_mouse_x >=
    index->ui_button_skills.click_pos_casu2.x && index->ui.coord_mouse_y <=
    index->ui_button_skills.click_pos_casu2.y +
    index->ui_button_skills.click_size_casu2.y && index->ui.coord_mouse_y >=
    index->ui_button_skills.click_pos_casu2.y && index->what_is_open == 3) {
        index->ui_which_turret = 6;
        index->light_effect_play = 16;
    }
}

int is_heavy2(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_button_skills.click_pos_heavy2.x +
    index->ui_button_skills.click_size_heavy2.x && index->ui.coord_mouse_x >=
    index->ui_button_skills.click_pos_heavy2.x && index->ui.coord_mouse_y <=
    index->ui_button_skills.click_pos_heavy2.y +
    index->ui_button_skills.click_size_heavy2.y && index->ui.coord_mouse_y >=
    index->ui_button_skills.click_pos_heavy2.y && index->what_is_open == 3) {
        index->ui_which_turret = 7;
        index->light_effect_play = 17;
    }
}

int is_arti2(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_button_skills.click_pos_arti2.x +
    index->ui_button_skills.click_size_arti2.x && index->ui.coord_mouse_x >=
    index->ui_button_skills.click_pos_arti2.x && index->ui.coord_mouse_y <=
    index->ui_button_skills.click_pos_arti2.y +
    index->ui_button_skills.click_size_arti2.y && index->ui.coord_mouse_y >=
    index->ui_button_skills.click_pos_arti2.y && index->what_is_open == 3) {
        index->ui_which_turret = 8;
        index->light_effect_play = 18;
    }
}

int is_flame2(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_button_skills.click_pos_flame2.x +
    index->ui_button_skills.click_size_flame2.x && index->ui.coord_mouse_x >=
    index->ui_button_skills.click_pos_flame2.x && index->ui.coord_mouse_y <=
    index->ui_button_skills.click_pos_flame2.y +
    index->ui_button_skills.click_size_flame2.y && index->ui.coord_mouse_y >=
    index->ui_button_skills.click_pos_flame2.y && index->what_is_open == 3) {
        index->ui_which_turret = 9;
        index->light_effect_play = 19;
    }
}

int is_tesla2(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_button_skills.click_pos_tesla2.x +
    index->ui_button_skills.click_size_tesla2.x && index->ui.coord_mouse_x >=
    index->ui_button_skills.click_pos_tesla2.x && index->ui.coord_mouse_y <=
    index->ui_button_skills.click_pos_tesla2.y +
    index->ui_button_skills.click_size_tesla2.y && index->ui.coord_mouse_y >=
    index->ui_button_skills.click_pos_tesla2.y && index->what_is_open == 3) {
        index->ui_which_turret = 10;
        index->light_effect_play = 20;
    }
}