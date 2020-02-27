/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** dfghj
*/

#include "../include/my.h"

void init_button_tesla2(Index_t *index)
{
    index->ui_button_skills.pos_tesla2.x = 1190;
    index->ui_button_skills.pos_tesla2.y = 85;
    index->ui_button_skills.size_tesla2.x = 45;
    index->ui_button_skills.size_tesla2.y = 100;
    index->ui_button_skills.click_pos_tesla2.x = 0;
    index->ui_button_skills.click_pos_tesla2.y = 0;
    index->ui_button_skills.button_tesla2 = sfRectangleShape_create();
    sfRectangleShape_setPosition(index->ui_button_skills.button_tesla2,
    index->ui_button_skills.pos_tesla2);
    sfRectangleShape_setSize(index->ui_button_skills.button_tesla2,
    index->ui_button_skills.size_tesla2);
}

void init_button_flame2(Index_t *index)
{
    index->ui_button_skills.pos_flame2.x = 1060;
    index->ui_button_skills.pos_flame2.y = 85;
    index->ui_button_skills.size_flame2.x = 45;
    index->ui_button_skills.size_flame2.y = 100;
    index->ui_button_skills.click_pos_flame2.x = 0;
    index->ui_button_skills.click_pos_flame2.y = 0;
    index->ui_button_skills.button_flame2 = sfRectangleShape_create();
    sfRectangleShape_setPosition(index->ui_button_skills.button_flame2,
    index->ui_button_skills.pos_flame2);
    sfRectangleShape_setSize(index->ui_button_skills.button_flame2,
    index->ui_button_skills.size_flame2);
    init_button_tesla2(index);
}

void init_button_arti2(Index_t *index)
{
    index->ui_button_skills.pos_arti2.x = 930;
    index->ui_button_skills.pos_arti2.y = 85;
    index->ui_button_skills.size_arti2.x = 45;
    index->ui_button_skills.size_arti2.y = 100;
    index->ui_button_skills.click_pos_arti2.x = 0;
    index->ui_button_skills.click_pos_arti2.y = 0;
    index->ui_button_skills.button_arti2 = sfRectangleShape_create();
    sfRectangleShape_setPosition(index->ui_button_skills.button_arti2,
    index->ui_button_skills.pos_arti2);
    sfRectangleShape_setSize(index->ui_button_skills.button_arti2,
    index->ui_button_skills.size_arti2);
    init_button_flame2(index);
}

void init_button_heavy2(Index_t *index)
{
    index->ui_button_skills.pos_heavy2.x = 800;
    index->ui_button_skills.pos_heavy2.y = 85;
    index->ui_button_skills.size_heavy2.x = 45;
    index->ui_button_skills.size_heavy2.y = 100;
    index->ui_button_skills.click_pos_heavy2.x = 0;
    index->ui_button_skills.click_pos_heavy2.y = 0;
    index->ui_button_skills.button_heavy2 = sfRectangleShape_create();
    sfRectangleShape_setPosition(index->ui_button_skills.button_heavy2,
    index->ui_button_skills.pos_heavy2);
    sfRectangleShape_setSize(index->ui_button_skills.button_heavy2,
    index->ui_button_skills.size_heavy2);
    init_button_arti2(index);
}

void init_button_casu2(Index_t *index)
{
    index->ui_button_skills.pos_casu2.x = 670;
    index->ui_button_skills.pos_casu2.y = 85;
    index->ui_button_skills.size_casu2.x = 45;
    index->ui_button_skills.size_casu2.y = 100;
    index->ui_button_skills.click_pos_casu2.x = 0;
    index->ui_button_skills.click_pos_casu2.y = 0;
    index->ui_button_skills.button_casu2 = sfRectangleShape_create();
    sfRectangleShape_setPosition(index->ui_button_skills.button_casu2,
    index->ui_button_skills.pos_casu2);
    sfRectangleShape_setSize(index->ui_button_skills.button_casu2,
    index->ui_button_skills.size_casu2);
    init_button_heavy2(index);
}