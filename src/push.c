/*
** EPITECH PROJECT, 2020
** fgh
** File description:
** hgfds
*/

#include "../include/my.h"

int push_play(button_t *button, sfRenderWindow *window)
{
    button->click_pos_play = sfRectangleShape_getPosition(button->button_play);
    button->click_size_play = sfRectangleShape_getSize(button->button_play);
    button_is_clicked(button, window);
}

int push_exit(button_t *button, sfRenderWindow *window)
{
    button->click_pos_exit = sfRectangleShape_getPosition(button->button_exit);
    button->click_size_exit = sfRectangleShape_getSize(button->button_exit);
    button_is_clicked(button, window);
}

void push_htp(button_t *button, sfRenderWindow *window)
{
    button->click_pos_htp = sfRectangleShape_getPosition(button->button_htp);
    button->click_size_htp = sfRectangleShape_getSize(button->button_htp);
    button_is_clicked(button, window);
}

void push_param(button_t *button, sfRenderWindow *window)
{
    button->click_pos_param = sfRectangleShape_getPosition
    (button->button_param);
    button->click_size_param = sfRectangleShape_getSize(button->button_param);
    button_is_clicked(button, window);
}