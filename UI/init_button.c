/*
** EPITECH PROJECT, 2020
** dfghjk
** File description:
** dfghj
*/

#include "my_ui.h"

void init_button_play(button_t *button)
{
    button->a = -1;
    button->b = -1;
    button->pos_play.x = 710;
    button->pos_play.y = 350;
    button->size_play.x = 500;
    button->size_play.y = 180;
    button->button_play = sfRectangleShape_create();
    sfRectangleShape_setPosition(button->button_play, button->pos_play);
    sfRectangleShape_setSize(button->button_play, button->size_play);
    sfTexture *texture = sfTexture_createFromFile("rectangle_rouge.png", NULL);
    sfRectangleShape_setTexture(button->button_play, texture, 0);
}

void init_button_exit(button_t *button)
{
    button->a = -1;
    button->b = -1;
    button->pos_exit.x = 710;
    button->pos_exit.y = 650;
    button->size_exit.x = 500;
    button->size_exit.y = 180;
    button->button_exit = sfRectangleShape_create();
    sfRectangleShape_setPosition(button->button_exit, button->pos_exit);
    sfRectangleShape_setSize(button->button_exit, button->size_exit);
    sfTexture *texture = sfTexture_createFromFile("rectangle_rouge.png", NULL);
    sfRectangleShape_setTexture(button->button_exit, texture, 0);
}

void init_button_htp(button_t *button)
{
    button->a = -1;
    button->b = -1;
    button->pos_htp.x = 1400;
    button->pos_htp.y = 50;
    button->size_htp.x = 500;
    button->size_htp.y = 180;
    button->button_htp = sfRectangleShape_create();
    sfRectangleShape_setPosition(button->button_htp, button->pos_htp);
    sfRectangleShape_setSize(button->button_htp, button->size_htp);
    sfTexture *texture = sfTexture_createFromFile("rectangle_rouge.png", NULL);
    sfRectangleShape_setTexture(button->button_htp, texture, 0);
}

void init_button_param(button_t *button)
{
    button->a = -1;
    button->b = -1;
    button->pos_param.x = 20;
    button->pos_param.y = 50;
    button->size_param.x = 500;
    button->size_param.y = 180;
    button->button_param = sfRectangleShape_create();
    sfRectangleShape_setPosition(button->button_param, button->pos_param);
    sfRectangleShape_setSize(button->button_param, button->size_param);
    sfTexture *texture = sfTexture_createFromFile("rectangle_rouge.png", NULL);
    sfRectangleShape_setTexture(button->button_param, texture, 0);
}