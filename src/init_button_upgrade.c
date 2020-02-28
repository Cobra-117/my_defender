/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** sdfghj
*/

#include "../include/my.h"

void init_button_upgrade(Index_t *index)
{
    index->ui_button_skills.pos_upgrade.x = 1150;
    index->ui_button_skills.pos_upgrade.y = 240;
    index->ui_button_skills.size_upgrade.x = 120;
    index->ui_button_skills.size_upgrade.y = 70;
    index->ui_button_skills.click_pos_upgrade.x = 0;
    index->ui_button_skills.click_pos_upgrade.y = 0;
    index->ui_button_skills.button_upgrade = sfRectangleShape_create();
    sfRectangleShape_setPosition(index->ui_button_skills.button_upgrade,
    index->ui_button_skills.pos_upgrade);
    sfRectangleShape_setSize(index->ui_button_skills.button_upgrade,
    index->ui_button_skills.size_upgrade);
    sfTexture *texture = sfTexture_createFromFile
    ("assets/UI/Red_Square.png", NULL);
    sfRectangleShape_setTexture(index->ui_button_skills.button_upgrade,
    texture, 0);
}