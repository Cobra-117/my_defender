/*
** EPITECH PROJECT, 2020
** fgh
** File description:
** hgfds
*/

#include "my_ui.h"

void push_play(button_t *button, sfRenderWindow *window)
{
    button->click_pos_play = sfRectangleShape_getPosition(button->button_play);
    button->click_size_play = sfRectangleShape_getSize(button->button_play);
    button_is_clicked(button, window);
}

void push_exit(button_t *button, sfRenderWindow *window)
{
    button->click_pos_exit = sfRectangleShape_getPosition(button->button_exit);
    button->click_size_exit = sfRectangleShape_getSize(button->button_exit);
    button_is_clicked(button, window);
}