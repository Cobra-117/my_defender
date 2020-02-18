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
    button->pos_play.x = 860;
    button->pos_play.y = 540;
    button->size_play.x = 200;
    button->size_play.y = 80;
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
    button->pos_exit.x = 860;
    button->pos_exit.y = 640;
    button->size_exit.x = 200;
    button->size_exit.y = 80;
    button->button_exit = sfRectangleShape_create();
    sfRectangleShape_setPosition(button->button_exit, button->pos_exit);
    sfRectangleShape_setSize(button->button_exit, button->size_exit);
    sfTexture *texture = sfTexture_createFromFile("rectangle_rouge.png", NULL);
    sfRectangleShape_setTexture(button->button_exit, texture, 0);
}