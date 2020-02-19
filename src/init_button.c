/*
** EPITECH PROJECT, 2020
** dfghjk
** File description:
** dfghj
*/

#include "../include/my.h"

void init_button_play(menu_t *menu)
{
    menu->button.a = -1;
    menu->button.b = -1;
    menu->button.pos_play.x = 710;
    menu->button.pos_play.y = 350;
    menu->button.size_play.x = 500;
    menu->button.size_play.y = 180;
    menu->button.button_play = sfRectangleShape_create();
    sfRectangleShape_setPosition(menu->button.button_play,
    menu->button.pos_play);
    sfRectangleShape_setSize(menu->button.button_play, menu->button.size_play);
    sfTexture *texture = sfTexture_createFromFile
    ("assets/UI/Red_Square.png", NULL);
    sfRectangleShape_setTexture(menu->button.button_play, texture, 0);
}

void init_button_exit(menu_t *menu)
{
    menu->button.a = -1;
    menu->button.b = -1;
    menu->button.pos_exit.x = 710;
    menu->button.pos_exit.y = 650;
    menu->button.size_exit.x = 500;
    menu->button.size_exit.y = 180;
    menu->button.button_exit = sfRectangleShape_create();
    sfRectangleShape_setPosition(menu->button.button_exit,
    menu->button.pos_exit);
    sfRectangleShape_setSize(menu->button.button_exit, menu->button.size_exit);
    sfTexture *texture = sfTexture_createFromFile
    ("assets/UI/Red_Square.png", NULL);
    sfRectangleShape_setTexture(menu->button.button_exit, texture, 0);
}

void init_button_htp(menu_t *menu)
{
    menu->button.a = -1;
    menu->button.b = -1;
    menu->button.pos_htp.x = 1400;
    menu->button.pos_htp.y = 50;
    menu->button.size_htp.x = 500;
    menu->button.size_htp.y = 180;
    menu->button.button_htp = sfRectangleShape_create();
    sfRectangleShape_setPosition(menu->button.button_htp, menu->button.pos_htp);
    sfRectangleShape_setSize(menu->button.button_htp, menu->button.size_htp);
    sfTexture *texture = sfTexture_createFromFile
    ("assets/UI/Red_Square.png", NULL);
    sfRectangleShape_setTexture(menu->button.button_htp, texture, 0);
}

void init_button_param(menu_t *menu)
{
    menu->button.a = -1;
    menu->button.b = -1;
    menu->button.pos_param.x = 20;
    menu->button.pos_param.y = 50;
    menu->button.size_param.x = 500;
    menu->button.size_param.y = 180;
    menu->button.button_param = sfRectangleShape_create();
    sfRectangleShape_setPosition(menu->button.button_param,
    menu->button.pos_param);
    sfRectangleShape_setSize(menu->button.button_param,
    menu->button.size_param);
    sfTexture *texture = sfTexture_createFromFile
    ("assets/UI/Red_Square.png", NULL);
    sfRectangleShape_setTexture(menu->button.button_param, texture, 0);
}