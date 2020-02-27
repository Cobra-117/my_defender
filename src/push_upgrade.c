/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** sdfghjk
*/

#include "../include/my.h"

void push_upgrade(Index_t *index)
{
    index->ui_button_skills.click_pos_upgrade = sfRectangleShape_getPosition
    (index->ui_button_skills.button_upgrade);
    index->ui_button_skills.click_size_upgrade = sfRectangleShape_getSize
    (index->ui_button_skills.button_upgrade);
    button_game_clicked(index);
}