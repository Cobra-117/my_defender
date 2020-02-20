/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** dfghjk
*/

#include "../include/my.h"

void init_ui_tower(Index_t *index)
{
    index->ui.coord_mouse_x = -1;
    index->ui.coord_mouse_y = -1;
    index->ui.pos_ui_tower.x = 640;
    index->ui.pos_ui_tower.y = 0;
    index->ui.size_ui_tower.x = 100;
    index->ui.size_ui_tower.y = 70;
    index->ui.button_ui_tower = sfRectangleShape_create();
    sfRectangleShape_setPosition(index->ui.button_ui_tower,
    index->ui.pos_ui_tower);
    sfRectangleShape_setSize(index->ui.button_ui_tower,
    index->ui.size_ui_tower);
    sfTexture *texture = sfTexture_createFromFile
    ("assets/UI/Red_Square.png", NULL);
    sfRectangleShape_setTexture(index->ui.button_ui_tower, texture, 0);
}

void init_utility(Index_t *index)
{
    index->ui.coord_mouse_x = -1;
    index->ui.coord_mouse_y = -1;
    index->ui.pos_utility.x = 750;
    index->ui.pos_utility.y = 0;
    index->ui.size_utility.x = 100;
    index->ui.size_utility.y = 70;
    index->ui.button_utility = sfRectangleShape_create();
    sfRectangleShape_setPosition(index->ui.button_utility,
    index->ui.pos_utility);
    sfRectangleShape_setSize(index->ui.button_utility,
    index->ui.size_utility);
    sfTexture *texture = sfTexture_createFromFile
    ("assets/UI/Red_Square.png", NULL);
    sfRectangleShape_setTexture(index->ui.button_utility, texture, 0);
}

void init_skill(Index_t *index)
{
    index->ui.coord_mouse_x = -1;
    index->ui.coord_mouse_y = -1;
    index->ui.pos_skill.x = 860;
    index->ui.pos_skill.y = 0;
    index->ui.size_skill.x = 100;
    index->ui.size_skill.y = 70;
    index->ui.button_skill = sfRectangleShape_create();
    sfRectangleShape_setPosition(index->ui.button_skill,
    index->ui.pos_skill);
    sfRectangleShape_setSize(index->ui.button_skill,
    index->ui.size_skill);
    sfTexture *texture = sfTexture_createFromFile
    ("assets/UI/Red_Square.png", NULL);
    sfRectangleShape_setTexture(index->ui.button_skill, texture, 0);
}