/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** sdfghj
*/

#include "my_ui.h"

void prepare_text_play(text_t *text)
{
    text->txt_play = sfText_create();
    sfText_setString(text->txt_play, "Play");
    text->font = sfFont_createFromFile("arial_font.TTF");
    sfText_setFont(text->txt_play, text->font);
    sfText_setColor(text->txt_play, sfWhite);
    sfText_setCharacterSize(text->txt_play, 80);
    text->pos_play.x = 880;
    text->pos_play.y = 390;
    sfText_setPosition(text->txt_play, text->pos_play);
}

void prepare_text_exit(text_t *text)
{
    text->txt_exit = sfText_create();
    sfText_setString(text->txt_exit, "Exit");
    sfText_setFont(text->txt_exit, text->font);
    sfText_setColor(text->txt_exit, sfWhite);
    sfText_setCharacterSize(text->txt_exit, 80);
    text->pos_exit.x = 880;
    text->pos_exit.y = 690;
    sfText_setPosition(text->txt_exit, text->pos_exit);
}

void prepare_text_htp(text_t *text)
{
    text->txt_htp = sfText_create();
    sfText_setString(text->txt_htp, "How to play");
    sfText_setFont(text->txt_htp, text->font);
    sfText_setColor(text->txt_htp, sfWhite);
    sfText_setCharacterSize(text->txt_htp, 80);
    text->pos_htp.x = 1415;
    text->pos_htp.y = 90;
    sfText_setPosition(text->txt_htp, text->pos_htp);
}

void prepare_text_param(text_t *text)
{
    text->txt_param = sfText_create();
    sfText_setString(text->txt_param, "Setting");
    sfText_setFont(text->txt_param, text->font);
    sfText_setColor(text->txt_param, sfWhite);
    sfText_setCharacterSize(text->txt_param, 80);
    text->pos_param.x = 120;
    text->pos_param.y = 90;
    sfText_setPosition(text->txt_param, text->pos_param);
}