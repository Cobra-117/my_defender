/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** sdfghj
*/

#include "../include/my.h"

void push_tesla2(Index_t *index)
{
    index->ui_button_skills.click_pos_tesla2 = sfRectangleShape_getPosition
    (index->ui_button_skills.button_tesla2);
    index->ui_button_skills.click_size_tesla2 = sfRectangleShape_getSize
    (index->ui_button_skills.button_tesla2);
    button_game_clicked(index);
}

void push_flame2(Index_t *index)
{
    index->ui_button_skills.click_pos_flame2 = sfRectangleShape_getPosition
    (index->ui_button_skills.button_flame2);
    index->ui_button_skills.click_size_flame2 = sfRectangleShape_getSize
    (index->ui_button_skills.button_flame2);
    button_game_clicked(index);
}

void push_arti2(Index_t *index)
{
    index->ui_button_skills.click_pos_arti2 = sfRectangleShape_getPosition
    (index->ui_button_skills.button_arti2);
    index->ui_button_skills.click_size_arti2 = sfRectangleShape_getSize
    (index->ui_button_skills.button_arti2);
    button_game_clicked(index);
}

void push_heavy2(Index_t *index)
{
    index->ui_button_skills.click_pos_heavy2 = sfRectangleShape_getPosition
    (index->ui_button_skills.button_heavy2);
    index->ui_button_skills.click_size_heavy2 = sfRectangleShape_getSize
    (index->ui_button_skills.button_heavy2);
    button_game_clicked(index);
}

void push_casu2(Index_t *index)
{
    index->ui_button_skills.click_pos_casu2 = sfRectangleShape_getPosition
    (index->ui_button_skills.button_casu2);
    index->ui_button_skills.click_size_casu2 = sfRectangleShape_getSize
    (index->ui_button_skills.button_casu2);
    button_game_clicked(index);
}