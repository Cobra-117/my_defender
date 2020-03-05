/*
** EPITECH PROJECT, 2020
** sdgj
** File description:
** sdfghjk
*/

#include "../include/my.h"

void push_plus(menu_t *menu, Index_t *index, sfRenderWindow *window)
{
    menu->button.click_pos_plus = sfRectangleShape_getPosition
    (menu->button.button_plus);
    menu->button.click_size_plus = sfRectangleShape_getSize
    (menu->button.button_plus);
    button_settings_clicked(menu, index, window);
}

void push_plus2(menu_t *menu, sfRenderWindow *window)
{
    menu->button.click_pos_plus2 = sfRectangleShape_getPosition
    (menu->button.button_plus2);
    menu->button.click_size_plus2 = sfRectangleShape_getSize
    (menu->button.button_plus2);
    //button_settings_clicked(menu, window);
}

void push_minus(menu_t *menu, Index_t *index, sfRenderWindow *window)
{
    menu->button.click_pos_minus = sfRectangleShape_getPosition
    (menu->button.button_minus);
    menu->button.click_size_minus = sfRectangleShape_getSize
    (menu->button.button_minus);
    button_settings_clicked(menu, index, window);
}

void push_minus2(menu_t *menu, sfRenderWindow *window)
{
    menu->button.click_pos_minus2 = sfRectangleShape_getPosition
    (menu->button.button_minus2);
    menu->button.click_size_minus2 = sfRectangleShape_getSize
    (menu->button.button_minus2);
    //button_settings_clicked(menu, window);
}

void push_back(menu_t *menu, Index_t *index, sfRenderWindow *window)
{
    menu->button.click_pos_back = sfRectangleShape_getPosition
    (menu->button.button_back);
    menu->button.click_size_back = sfRectangleShape_getSize
    (menu->button.button_back);
    button_settings_clicked(menu, index, window);
}