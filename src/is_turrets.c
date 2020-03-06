/*
** EPITECH PROJECT, 2020
** dfghjk
** File description:
** sdfghjk
*/

#include "../include/my.h"

int is_casu(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_button_turret.click_pos_casu.x +
    index->ui_button_turret.click_size_casu.x && index->ui.coord_mouse_x >=
    index->ui_button_turret.click_pos_casu.x && index->ui.coord_mouse_y <=
    index->ui_button_turret.click_pos_casu.y + index->ui_button_turret.
    click_size_casu.y && index->ui.coord_mouse_y >= index->ui_button_turret.
    click_pos_casu.y && index->what_is_open == 1) {
        index->ui_which_turret = 1;
        index->light_effect_play  = 11;
    }
}

int is_heavy(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_button_turret.click_pos_heavy.x +
    index->ui_button_turret.click_size_heavy.x && index->ui.coord_mouse_x >=
    index->ui_button_turret.click_pos_heavy.x && index->ui.coord_mouse_y <=
    index->ui_button_turret.click_pos_heavy.y + index->ui_button_turret.
    click_size_heavy.y && index->ui.coord_mouse_y >= index->ui_button_turret.
    click_pos_heavy.y && index->what_is_open == 1) {
        index->ui_which_turret = 2;
        index->light_effect_play = 12;
    }
}

int is_arti(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_button_turret.click_pos_arti.x +
    index->ui_button_turret.click_size_arti.x && index->ui.coord_mouse_x >=
    index->ui_button_turret.click_pos_arti.x && index->ui.coord_mouse_y <=
    index->ui_button_turret.click_pos_arti.y + index->ui_button_turret.
    click_size_arti.y && index->ui.coord_mouse_y >= index->ui_button_turret.
    click_pos_arti.y && index->what_is_open == 1) {
        index->ui_which_turret = 3;
        index->light_effect_play = 13;
    }
}

int is_flamme(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_button_turret.click_pos_flamme.x +
    index->ui_button_turret.click_size_flamme.x && index->ui.coord_mouse_x >=
    index->ui_button_turret.click_pos_flamme.x && index->ui.coord_mouse_y <=
    index->ui_button_turret.click_pos_flamme.y + index->ui_button_turret.
    click_size_flamme.y && index->ui.coord_mouse_y >= index->ui_button_turret.
    click_pos_flamme.y && index->what_is_open == 1) {
        index->ui_which_turret = 4;
        index->light_effect_play = 14;
    }
}

int is_tesla(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_button_turret.click_pos_tesla.x +
    index->ui_button_turret.click_size_tesla.x && index->ui.coord_mouse_x >=
    index->ui_button_turret.click_pos_tesla.x && index->ui.coord_mouse_y <=
    index->ui_button_turret.click_pos_tesla.y + index->ui_button_turret.
    click_size_tesla.y && index->ui.coord_mouse_y >= index->ui_button_turret.
    click_pos_tesla.y && index->what_is_open == 1) {
        index->ui_which_turret = 5;
        index->light_effect_play = 15;
    }
}