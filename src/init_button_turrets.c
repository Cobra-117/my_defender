/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** dfghjk
*/

#include "../include/my.h"

void init_button_tesla(Index_t *index)
{
    index->ui_button_turret.pos_tesla.x = 1195;
    index->ui_button_turret.pos_tesla.y = 80;
    index->ui_button_turret.size_tesla.x = 45;
    index->ui_button_turret.size_tesla.y = 100;
    index->ui_button_turret.click_pos_tesla.x = 0;
    index->ui_button_turret.click_pos_tesla.y = 0;
    index->ui_button_turret.button_tesla = sfRectangleShape_create();
    sfRectangleShape_setPosition(index->ui_button_turret.button_tesla,
    index->ui_button_turret.pos_tesla);
    sfRectangleShape_setSize(index->ui_button_turret.button_tesla,
    index->ui_button_turret.size_tesla);
}

void init_button_flamme(Index_t *index)
{
    index->ui_button_turret.pos_flamme.x = 1065;
    index->ui_button_turret.pos_flamme.y = 80;
    index->ui_button_turret.size_flamme.x = 50;
    index->ui_button_turret.size_flamme.y = 100;
    index->ui_button_turret.click_pos_flamme.x = 0;
    index->ui_button_turret.click_pos_flamme.y = 0;
    index->ui_button_turret.button_flamme = sfRectangleShape_create();
    sfRectangleShape_setPosition(index->ui_button_turret.button_flamme,
    index->ui_button_turret.pos_flamme);
    sfRectangleShape_setSize(index->ui_button_turret.button_flamme,
    index->ui_button_turret.size_flamme);
    init_button_tesla(index);
}

void init_button_arti(Index_t *index)
{
    index->ui_button_turret.pos_arti.x = 930;
    index->ui_button_turret.pos_arti.y = 80;
    index->ui_button_turret.size_arti.x = 50;
    index->ui_button_turret.size_arti.y = 100;
    index->ui_button_turret.click_pos_arti.x = 0;
    index->ui_button_turret.click_pos_arti.y = 0;
    index->ui_button_turret.button_arti = sfRectangleShape_create();
    sfRectangleShape_setPosition(index->ui_button_turret.button_arti,
    index->ui_button_turret.pos_arti);
    sfRectangleShape_setSize(index->ui_button_turret.button_arti,
    index->ui_button_turret.size_arti);
    init_button_flamme(index);
}

void init_button_heavy(Index_t *index)
{
    index->ui_button_turret.pos_heavy.x = 800;
    index->ui_button_turret.pos_heavy.y = 80;
    index->ui_button_turret.size_heavy.x = 50;
    index->ui_button_turret.size_heavy.y = 100;
    index->ui_button_turret.click_pos_heavy.x = 0;
    index->ui_button_turret.click_pos_heavy.y = 0;
    index->ui_button_turret.button_heavy = sfRectangleShape_create();
    sfRectangleShape_setPosition(index->ui_button_turret.button_heavy,
    index->ui_button_turret.pos_heavy);
    sfRectangleShape_setSize(index->ui_button_turret.button_heavy,
    index->ui_button_turret.size_heavy);
    init_button_arti(index);
}

void init_button_casu(Index_t *index)
{
    index->ui_button_turret.pos_casu.x = 680;
    index->ui_button_turret.pos_casu.y = 80;
    index->ui_button_turret.size_casu.x = 40;
    index->ui_button_turret.size_casu.y = 100;
    index->ui_button_turret.click_pos_casu.x = 0;
    index->ui_button_turret.click_pos_casu.y = 0;
    index->ui_button_turret.button_casu = sfRectangleShape_create();
    sfRectangleShape_setPosition(index->ui_button_turret.button_casu,
    index->ui_button_turret.pos_casu);
    sfRectangleShape_setSize(index->ui_button_turret.button_casu,
    index->ui_button_turret.size_casu);
    init_button_heavy(index);
}