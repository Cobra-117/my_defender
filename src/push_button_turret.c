/*
** EPITECH PROJECT, 2020
** dfghjkl
** File description:
** dfghjkl
*/

#include "../include/my.h"

void push_casu(Index_t *index)
{
    index->ui_button_turret.click_pos_casu = sfRectangleShape_getPosition
    (index->ui_button_turret.button_casu);
    index->ui_button_turret.click_size_casu = sfRectangleShape_getSize
    (index->ui_button_turret.button_casu);
    button_game_clicked(index);
}

void push_heavy(Index_t *index)
{
    index->ui_button_turret.click_pos_heavy = sfRectangleShape_getPosition
    (index->ui_button_turret.button_heavy);
    index->ui_button_turret.click_size_heavy = sfRectangleShape_getSize
    (index->ui_button_turret.button_heavy);
    button_game_clicked(index);
}

void push_arti(Index_t *index)
{
    index->ui_button_turret.click_pos_arti = sfRectangleShape_getPosition
    (index->ui_button_turret.button_arti);
    index->ui_button_turret.click_size_arti = sfRectangleShape_getSize
    (index->ui_button_turret.button_arti);
    button_game_clicked(index);
}