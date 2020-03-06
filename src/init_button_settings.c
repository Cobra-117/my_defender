/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** sdf
*/

#include "../include/my.h"

void init_button_minus1(menu_t *menu)
{
    menu->button.a = -1;
    menu->button.b = -1;
    menu->button.pos_minus.x = 550;
    menu->button.pos_minus.y = 480;
    menu->button.size_minus.x = 100;
    menu->button.size_minus.y = 100;
    menu->button.button_minus = sfRectangleShape_create();
    sfRectangleShape_setPosition(menu->button.button_minus,
    menu->button.pos_minus);
    sfRectangleShape_setSize(menu->button.button_minus,
    menu->button.size_minus);
    sfTexture *texture = sfTexture_createFromFile
    ("assets/UI/Red_Square.png", NULL);
    sfRectangleShape_setTexture(menu->button.button_minus, texture, 0);
}

void init_button_plus1(menu_t *menu)
{
    menu->button.a = -1;
    menu->button.b = -1;
    menu->button.pos_plus.x = 1320;
    menu->button.pos_plus.y = 480;
    menu->button.size_plus.x = 100;
    menu->button.size_plus.y = 100;
    menu->button.button_plus = sfRectangleShape_create();
    sfRectangleShape_setPosition(menu->button.button_plus,
    menu->button.pos_plus);
    sfRectangleShape_setSize(menu->button.button_plus, menu->button.size_plus);
    sfTexture *texture = sfTexture_createFromFile
    ("assets/UI/Red_Square.png", NULL);
    sfRectangleShape_setTexture(menu->button.button_plus, texture, 0);
}

void init_button_minus2(menu_t *menu)
{
    menu->button.a = -1;
    menu->button.b = -1;
    menu->button.pos_minus2.x = 550;
    menu->button.pos_minus2.y = 680;
    menu->button.size_minus2.x = 100;
    menu->button.size_minus2.y = 100;
    menu->button.button_minus2 = sfRectangleShape_create();
    sfRectangleShape_setPosition(menu->button.button_minus2,
    menu->button.pos_minus2);
    sfRectangleShape_setSize(menu->button.button_minus2,
    menu->button.size_minus2);
    sfTexture *texture = sfTexture_createFromFile
    ("assets/UI/Red_Square.png", NULL);
    sfRectangleShape_setTexture(menu->button.button_minus2, texture, 0);
}

void init_button_plus2(menu_t *menu)
{
    menu->button.a = -1;
    menu->button.b = -1;
    menu->button.pos_plus2.x = 1320;
    menu->button.pos_plus2.y = 680;
    menu->button.size_plus2.x = 100;
    menu->button.size_plus2.y = 100;
    menu->button.button_plus2 = sfRectangleShape_create();
    sfRectangleShape_setPosition(menu->button.button_plus2,
    menu->button.pos_plus2);
    sfRectangleShape_setSize(menu->button.button_plus2,
    menu->button.size_plus2);
    sfTexture *texture = sfTexture_createFromFile
    ("assets/UI/Red_Square.png", NULL);
    sfRectangleShape_setTexture(menu->button.button_plus2, texture, 0);
}

void init_button_settings(menu_t *menu)
{
    init_button_plus1(menu);
    init_button_minus1(menu);
    init_button_plus2(menu);
    init_button_minus2(menu);
    init_button_back(menu);
}