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
        printf("RESUME\n");
}

int is_go_menu(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_pause_button.click_pos_go_menu.x +
    index->ui_pause_button.click_size_go_menu.x && index->ui.coord_mouse_x >=
    index->ui_pause_button.click_pos_go_menu.x && index->ui.coord_mouse_y <=
    index->ui_pause_button.click_pos_go_menu.y + index->ui_pause_button.
    click_size_go_menu.y && index->ui.coord_mouse_y >= index->ui_pause_button.
    click_pos_go_menu.y && index->what_is_open == 4)
        printf("GO MENU\n");
}

int is_exit2(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_pause_button.click_pos_exit.x +
    index->ui_pause_button.click_size_exit.x && index->ui.coord_mouse_x >=
    index->ui_pause_button.click_pos_exit.x && index->ui.coord_mouse_y <=
    index->ui_pause_button.click_pos_exit.y + index->ui_pause_button.
    click_size_exit.y && index->ui.coord_mouse_y >= index->ui_pause_button.
    click_pos_exit.y && index->what_is_open == 4)
        printf("EXIT\n");
}