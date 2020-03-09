/*
** EPITECH PROJECT, 2020
** sdfghjk
** File description:
** sdfgh
*/

#include "../include/my.h"

void init_text_plus(menu_t *menu)
{
    menu->text_settings.txt_plus = sfText_create();
    sfText_setString(menu->text_settings.txt_plus, "+");
    sfText_setFont(menu->text_settings.txt_plus, menu->text.font);
    sfText_setColor(menu->text_settings.txt_plus, sfWhite);
    sfText_setCharacterSize(menu->text_settings.txt_plus, 50);
    menu->text_settings.pos_plus.x = 740;
    menu->text_settings.pos_plus.y = 700;
    sfText_setPosition(menu->text_settings.txt_plus, menu->
    text_settings.pos_plus);
}

void init_text_minus(menu_t *menu)
{
    menu->text_settings.txt_minus = sfText_create();
    sfText_setString(menu->text_settings.txt_minus, "-");
    sfText_setFont(menu->text_settings.txt_minus, menu->text.font);
    sfText_setColor(menu->text_settings.txt_minus, sfWhite);
    sfText_setCharacterSize(menu->text_settings.txt_minus, 50);
    menu->text_settings.pos_minus.x = 740;
    menu->text_settings.pos_minus.y = 700;
    sfText_setPosition(menu->text_settings.txt_minus, menu->
    text_settings.pos_minus);
}