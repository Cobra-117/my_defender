/*
** EPITECH PROJECT, 2020
** dfghjk
** File description:
** sdfghj
*/

#include "../include/my.h"

void change_ui_tower_colors(Index_t *index)
{
    sfText_setColor(index->ui_text.txt_tower, sfBlack);
    sfText_setColor(index->ui_text.txt_utility, sfWhite);
    sfText_setColor(index->ui_text.txt_skill, sfWhite);
}

void change_utility_colors(Index_t *index)
{
    sfText_setColor(index->ui_text.txt_tower, sfWhite);
    sfText_setColor(index->ui_text.txt_utility, sfBlack);
    sfText_setColor(index->ui_text.txt_skill, sfWhite);
}

void change_skills_colors(Index_t *index)
{
    sfText_setColor(index->ui_text.txt_tower, sfWhite);
    sfText_setColor(index->ui_text.txt_utility, sfWhite);
    sfText_setColor(index->ui_text.txt_skill, sfBlack);
}