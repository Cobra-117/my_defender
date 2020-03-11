/*
** EPITECH PROJECT, 2020
** dfghj
** File description:
** dfghj
*/

#include "../include/my.h"

int is_resume(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_pause_button.click_pos_resume.x +
    index->ui_pause_button.click_size_resume.x && index->ui.coord_mouse_x >=
    index->ui_pause_button.click_pos_resume.x && index->ui.coord_mouse_y <=
    index->ui_pause_button.click_pos_resume.y + index->ui_pause_button.
    click_size_resume.y && index->ui.coord_mouse_y >= index->ui_pause_button.
    click_pos_resume.y && index->what_is_open == 4)
        index->what_is_open = index->tmp;
}

int is_go_menu(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_pause_button.click_pos_go_menu.x +
    index->ui_pause_button.click_size_go_menu.x && index->ui.coord_mouse_x >=
    index->ui_pause_button.click_pos_go_menu.x && index->ui.coord_mouse_y <=
    index->ui_pause_button.click_pos_go_menu.y + index->ui_pause_button.
    click_size_go_menu.y && index->ui.coord_mouse_y >= index->ui_pause_button.
    click_pos_go_menu.y && index->what_is_open == 4) {
        index->what_is_open = 5;
    }
}

int is_exit2(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_pause_button.click_pos_exit.x +
    index->ui_pause_button.click_size_exit.x && index->ui.coord_mouse_x >=
    index->ui_pause_button.click_pos_exit.x && index->ui.coord_mouse_y <=
    index->ui_pause_button.click_pos_exit.y + index->ui_pause_button.
    click_size_exit.y && index->ui.coord_mouse_y >= index->ui_pause_button.
    click_pos_exit.y && index->what_is_open == 4) {
        index->what_is_open = 6;
        quick_free(index);
    }
}

int is_win(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_pause_button.click_pos_win.x +
    index->ui_pause_button.click_size_win.x && index->ui.coord_mouse_x >=
    index->ui_pause_button.click_pos_win.x && index->ui.coord_mouse_y <=
    index->ui_pause_button.click_pos_win.y + index->ui_pause_button.
    click_size_win.y && index->ui.coord_mouse_y >= index->ui_pause_button.
    click_pos_win.y && index->what_is_open == 100)
        index->what_is_open = 1;
}