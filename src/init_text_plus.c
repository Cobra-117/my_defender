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
    sfText_setCharacterSize(menu->text_settings.txt_plus, 80);
    menu->text_settings.pos_plus.x = 1345;
    menu->text_settings.pos_plus.y = 485;
    sfText_setPosition(menu->text_settings.txt_plus,
    menu->text_settings.pos_plus);
}

void init_text_minus(menu_t *menu)
{
    menu->text_settings.txt_minus = sfText_create();
    sfText_setString(menu->text_settings.txt_minus, "-");
    sfText_setFont(menu->text_settings.txt_minus, menu->text.font);
    sfText_setColor(menu->text_settings.txt_minus, sfWhite);
    sfText_setCharacterSize(menu->text_settings.txt_minus, 80);
    menu->text_settings.pos_minus.x = 580;
    menu->text_settings.pos_minus.y = 485;
    sfText_setPosition(menu->text_settings.txt_minus,
    menu->text_settings.pos_minus);
}

void init_text_plus2(menu_t *menu)
{
    menu->text_settings.txt_plus2 = sfText_create();
    sfText_setString(menu->text_settings.txt_plus2, "+");
    sfText_setFont(menu->text_settings.txt_plus2, menu->text.font);
    sfText_setColor(menu->text_settings.txt_plus2, sfWhite);
    sfText_setCharacterSize(menu->text_settings.txt_plus2, 80);
    menu->text_settings.pos_plus2.x = 1345;
    menu->text_settings.pos_plus2.y = 685;
    sfText_setPosition(menu->text_settings.txt_plus2,
    menu->text_settings.pos_plus2);
}

void init_text_minus2(menu_t *menu)
{
    menu->text_settings.txt_minus2 = sfText_create();
    sfText_setString(menu->text_settings.txt_minus2, "-");
    sfText_setFont(menu->text_settings.txt_minus2, menu->text.font);
    sfText_setColor(menu->text_settings.txt_minus2, sfWhite);
    sfText_setCharacterSize(menu->text_settings.txt_minus2, 80);
    menu->text_settings.pos_minus2.x = 580;
    menu->text_settings.pos_minus2.y = 685;
    sfText_setPosition(menu->text_settings.txt_minus2,
    menu->text_settings.pos_minus2);
}

void init_text_go_home(menu_t *menu)
{
    menu->text_settings.txt_go_home = sfText_create();
    sfText_setString(menu->text_settings.txt_go_home, "Go home");
    sfText_setFont(menu->text_settings.txt_go_home, menu->text.font);
    sfText_setColor(menu->text_settings.txt_go_home, sfWhite);
    sfText_setCharacterSize(menu->text_settings.txt_go_home, 40);
    menu->text_settings.pos_go_home.x = 917;
    menu->text_settings.pos_go_home.y = 923;
    sfText_setPosition(menu->text_settings.txt_go_home,
    menu->text_settings.pos_go_home);
}