/*
** EPITECH PROJECT, 2020
** sdfghjk
** File description:
** sdfghjk
*/

#include "../include/my.h"

void init_text_game(menu_t *menu)
{
    menu->text_settings.txt_sound = sfText_create();
    sfText_setString(menu->text_settings.txt_sound, "Music Game Volume");
    sfText_setFont(menu->text_settings.txt_sound, menu->text.font);
    sfText_setColor(menu->text_settings.txt_sound, sfWhite);
    sfText_setCharacterSize(menu->text_settings.txt_sound, 50);
    menu->text_settings.pos_sound.x = 740;
    menu->text_settings.pos_sound.y = 700;
    sfText_setPosition(menu->text_settings.txt_sound, menu->
    text_settings.pos_sound);
}

void init_text_music(menu_t *menu)
{
    menu->text_settings.txt_music = sfText_create();
    sfText_setString(menu->text_settings.txt_music, "Music Menu Volume");
    menu->text.font = sfFont_createFromFile("assets/UI/arial_font.TTF");
    sfText_setFont(menu->text_settings.txt_music, menu->text.font);
    sfText_setColor(menu->text_settings.txt_music, sfWhite);
    sfText_setCharacterSize(menu->text_settings.txt_music, 50);
    menu->text_settings.pos_music.x = 740;
    menu->text_settings.pos_music.y = 500;
    sfText_setPosition(menu->text_settings.txt_music, menu->
    text_settings.pos_music);
}

void init_text_value_music(menu_t *menu, Index_t *index)
{
    menu->text_settings.txt_value_music = sfText_create();
    sfText_setString(menu->text_settings.txt_value_music,
    my_nbr_to_str(index->sound.volume_music));
    menu->text.font = sfFont_createFromFile("assets/UI/arial_font.TTF");
    sfText_setFont(menu->text_settings.txt_value_music, menu->text.font);
    sfText_setColor(menu->text_settings.txt_value_music, sfWhite);
    sfText_setCharacterSize(menu->text_settings.txt_value_music, 50);
    menu->text_settings.pos_value_music.x = 950;
    menu->text_settings.pos_value_music.y = 420;
    sfText_setPosition(menu->text_settings.txt_value_music, menu->
    text_settings.pos_value_music);
}

void init_text_value_game_music(menu_t *menu, Index_t *index)
{
    menu->text_settings.txt_value_sound = sfText_create();
    sfText_setString(menu->text_settings.txt_value_sound,
    my_nbr_to_str(index->sound.effects.volume_effects));
    menu->text.font = sfFont_createFromFile("assets/UI/arial_font.TTF");
    sfText_setFont(menu->text_settings.txt_value_sound, menu->text.font);
    sfText_setColor(menu->text_settings.txt_value_sound, sfWhite);
    sfText_setCharacterSize(menu->text_settings.txt_value_sound, 50);
    menu->text_settings.pos_value_sound.x = 950;
    menu->text_settings.pos_value_sound.y = 620;
    sfText_setPosition(menu->text_settings.txt_value_sound, menu->
    text_settings.pos_value_sound);
}

void init_text_settings(menu_t *menu, Index_t *index)
{
    init_text_music(menu);
    init_text_game(menu);
    init_text_value_music(menu, index);
    init_text_value_game_music(menu, index);
    init_text_plus(menu);
    init_text_minus(menu);
}