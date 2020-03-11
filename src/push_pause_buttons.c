/*
** EPITECH PROJECT, 2020
** sdfghjk
** File description:
** sdfghj
*/

#include "../include/my.h"

void push_resume(Index_t *index)
{
    index->ui_pause_button.click_pos_resume = sfRectangleShape_getPosition
    (index->ui_pause_button.button_resume);
    index->ui_pause_button.click_size_resume = sfRectangleShape_getSize
    (index->ui_pause_button.button_resume);
    button_game_clicked(index);
}

void push_go_menu(Index_t *index)
{
    index->ui_pause_button.click_pos_go_menu = sfRectangleShape_getPosition
    (index->ui_pause_button.button_go_menu);
    index->ui_pause_button.click_size_go_menu = sfRectangleShape_getSize
    (index->ui_pause_button.button_go_menu);
    button_game_clicked(index);
}

void push_exit2(Index_t *index)
{
    index->ui_pause_button.click_pos_exit = sfRectangleShape_getPosition
    (index->ui_pause_button.button_exit);
    index->ui_pause_button.click_size_exit = sfRectangleShape_getSize
    (index->ui_pause_button.button_exit);
    button_game_clicked(index);
}

void push_win(Index_t *index)
{
    index->ui_pause_button.click_pos_win = sfRectangleShape_getPosition
    (index->ui_pause_button.button_win);
    index->ui_pause_button.click_size_win = sfRectangleShape_getSize
    (index->ui_pause_button.button_win);
    button_win_clicked(index);
}