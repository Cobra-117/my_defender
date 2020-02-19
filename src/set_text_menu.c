/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** sdfghj
*/

#include "../include/my.h"

void prepare_text_play(menu_t *menu)
{
    menu->text.txt_play = sfText_create();
    sfText_setString(menu->text.txt_play, "Play");
    menu->text.font = sfFont_createFromFile("assets/UI/arial_font.TTF");
    sfText_setFont(menu->text.txt_play, menu->text.font);
    sfText_setColor(menu->text.txt_play, sfWhite);
    sfText_setCharacterSize(menu->text.txt_play, 80);
    menu->text.pos_play.x = 880;
    menu->text.pos_play.y = 390;
    sfText_setPosition(menu->text.txt_play, menu->text.pos_play);
}

void prepare_text_exit(menu_t *menu)
{
    menu->text.txt_exit = sfText_create();
    sfText_setString(menu->text.txt_exit, "Exit");
    sfText_setFont(menu->text.txt_exit, menu->text.font);
    sfText_setColor(menu->text.txt_exit, sfWhite);
    sfText_setCharacterSize(menu->text.txt_exit, 80);
    menu->text.pos_exit.x = 880;
    menu->text.pos_exit.y = 690;
    sfText_setPosition(menu->text.txt_exit, menu->text.pos_exit);
}

void prepare_text_htp(menu_t *menu)
{
    menu->text.txt_htp = sfText_create();
    sfText_setString(menu->text.txt_htp, "How to play");
    sfText_setFont(menu->text.txt_htp, menu->text.font);
    sfText_setColor(menu->text.txt_htp, sfWhite);
    sfText_setCharacterSize(menu->text.txt_htp, 80);
    menu->text.pos_htp.x = 1415;
    menu->text.pos_htp.y = 90;
    sfText_setPosition(menu->text.txt_htp, menu->text.pos_htp);
}

void prepare_text_param(menu_t *menu)
{
    menu->text.txt_param = sfText_create();
    sfText_setString(menu->text.txt_param, "Setting");
    sfText_setFont(menu->text.txt_param, menu->text.font);
    sfText_setColor(menu->text.txt_param, sfWhite);
    sfText_setCharacterSize(menu->text.txt_param, 80);
    menu->text.pos_param.x = 120;
    menu->text.pos_param.y = 90;
    sfText_setPosition(menu->text.txt_param, menu->text.pos_param);
}