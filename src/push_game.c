/*
** EPITECH PROJECT, 2020
** dfghjklm
** File description:
** sdfghjk
*/

#include "../include/my.h"

void push_ui_tower(Index_t *index)
{
    index->ui.click_pos_ui_tower = sfRectangleShape_getPosition
    (index->ui.button_ui_tower);
    index->ui.click_size_ui_tower = sfRectangleShape_getSize
    (index->ui.button_ui_tower);
    button_game_clicked(index);
}

void push_utility(Index_t *index)
{
    index->ui.click_pos_utility = sfRectangleShape_getPosition
    (index->ui.button_utility);
    index->ui.click_size_utility = sfRectangleShape_getSize
    (index->ui.button_utility);
    button_game_clicked(index);
}

void push_skill(Index_t *index)
{
    index->ui.click_pos_skill = sfRectangleShape_getPosition
    (index->ui.button_skill);
    index->ui.click_size_skill = sfRectangleShape_getSize
    (index->ui.button_skill);
    button_game_clicked(index);
}