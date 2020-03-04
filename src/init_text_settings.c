/*
** EPITECH PROJECT, 2020
** sdfghjk
** File description:
** sdfghjk
*/

#include "../include/my.h"

void init_text_sound(menu_t *menu)
{
    menu->text_settings.txt_sound = sfText_create();
    sfText_setString(menu->text_settings.txt_sound, "Sound Volume");
    sfText_setFont(menu->text_settings.txt_sound, menu->text.font);
    sfText_setColor(menu->text_settings.txt_sound, sfWhite);
    sfText_setCharacterSize(menu->text_settings.txt_sound, 50);
    menu->text_settings.pos_sound.x = 840;
    menu->text_settings.pos_sound.y = 700;
    sfText_setPosition(menu->text_settings.txt_sound, menu->
    text_settings.pos_sound);
}

void init_text_music(menu_t *menu)
{
    menu->text_settings.txt_music = sfText_create();
    sfText_setString(menu->text_settings.txt_music, "Music Volume");
    menu->text.font = sfFont_createFromFile("assets/UI/arial_font.TTF");
    sfText_setFont(menu->text_settings.txt_music, menu->text.font);
    sfText_setColor(menu->text_settings.txt_music, sfWhite);
    sfText_setCharacterSize(menu->text_settings.txt_music, 50);
    menu->text_settings.pos_music.x = 840;
    menu->text_settings.pos_music.y = 500;
    sfText_setPosition(menu->text_settings.txt_music, menu->
    text_settings.pos_music);
}

void init_text_settings(menu_t *menu)
{
    init_text_music(menu);
    init_text_sound(menu);
}