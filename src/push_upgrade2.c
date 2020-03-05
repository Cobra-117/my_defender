/*
** EPITECH PROJECT, 2020
** dfghjklm
** File description:
** xfghjk
*/

#include "../include/my.h"

void push_upgrade2(Index_t *index)
{
    index->ui_button_utilities.click_pos_upgrade2 = sfRectangleShape_getPosition
    (index->ui_button_utilities.button_upgrade2);
    index->ui_button_utilities.click_size_upgrade2 = sfRectangleShape_getSize
    (index->ui_button_utilities.button_upgrade2);
    button_game_clicked(index);
}