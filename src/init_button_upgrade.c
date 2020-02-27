/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** sdfghj
*/

#include "../include/my.h"

void init_button_upgrade(Index_t *index)
{
    index->ui_button_skills.pos_upgrade.x = 0;
    index->ui_button_skills.pos_upgrade.y = 0;
    index->ui_button_skills.size_upgrade.x = 45;
    index->ui_button_skills.size_upgrade.y = 100;
    index->ui_button_skills.click_pos_upgrade.x = 0;
    index->ui_button_skills.click_pos_upgrade.y = 0;
    index->ui_button_skills.button_upgrade = sfRectangleShape_create();
    sfRectangleShape_setPosition(index->ui_button_skills.button_upgrade,
    index->ui_button_skills.pos_upgrade);
    sfRectangleShape_setSize(index->ui_button_skills.button_upgrade,
    index->ui_button_skills.size_upgrade);
}