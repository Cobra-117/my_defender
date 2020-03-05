/*
** EPITECH PROJECT, 2020
** sdfghjk
** File description:
** dfghjk
*/

#include "../include/my.h"

void init_button_back(menu_t *menu)
{
    menu->button.a = -1;
    menu->button.b = -1;
    menu->button.pos_back.x = 900;
    menu->button.pos_back.y = 900;
    menu->button.size_back.x = 200;
    menu->button.size_back.y = 100;
    menu->button.button_back = sfRectangleShape_create();
    sfRectangleShape_setPosition(menu->button.button_back,
    menu->button.pos_back);
    sfRectangleShape_setSize(menu->button.button_back,
    menu->button.size_back);
    sfTexture *texture = sfTexture_createFromFile
    ("assets/UI/Red_Square.png", NULL);
    sfRectangleShape_setTexture(menu->button.button_back, texture, 0);
}