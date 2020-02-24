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
    click_pos_casu.y && index->what_is_open == 1)
            printf("Casu\n");
}

int is_heavy(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_button_turret.click_pos_heavy.x +
    index->ui_button_turret.click_size_heavy.x && index->ui.coord_mouse_x >=
    index->ui_button_turret.click_pos_heavy.x && index->ui.coord_mouse_y <=
    index->ui_button_turret.click_pos_heavy.y + index->ui_button_turret.
    click_size_heavy.y && index->ui.coord_mouse_y >= index->ui_button_turret.
    click_pos_heavy.y && index->what_is_open == 1)
            printf("Heavy\n");
}