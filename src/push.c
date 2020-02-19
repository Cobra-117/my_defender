/*
** EPITECH PROJECT, 2020
** fgh
** File description:
** hgfds
*/

#include "../include/my.h"

void push_play(menu_t *menu, sfRenderWindow *window)
{
    menu->button.click_pos_play = sfRectangleShape_getPosition
    (menu->button.button_play);
    menu->button.click_size_play = sfRectangleShape_getSize
    (menu->button.button_play);
    button_is_clicked(menu, window);
}

void push_exit(menu_t *menu, sfRenderWindow *window)
{
    menu->button.click_pos_exit = sfRectangleShape_getPosition
    (menu->button.button_exit);
    menu->button.click_size_exit = sfRectangleShape_getSize
    (menu->button.button_exit);
    button_is_clicked(menu, window);
}

void push_htp(menu_t *menu, sfRenderWindow *window)
{
    menu->button.click_pos_htp = sfRectangleShape_getPosition
    (menu->button.button_htp);
    menu->button.click_size_htp = sfRectangleShape_getSize
    (menu->button.button_htp);
    button_is_clicked(menu, window);
}

void push_param(menu_t *menu, sfRenderWindow *window)
{
    menu->button.click_pos_param = sfRectangleShape_getPosition
    (menu->button.button_param);
    menu->button.click_size_param = sfRectangleShape_getSize
    (menu->button.button_param);
    button_is_clicked(menu, window);
}