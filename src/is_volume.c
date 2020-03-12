/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** sdfghjk
*/

#include "../include/my.h"

int is_plus(menu_t *menu, Index_t *index, sfRenderWindow *window)
{
    if (menu->button.a <= menu->button.click_pos_plus.x +
    menu->button.click_size_plus.x && menu->button.a >=
    menu->button.click_pos_plus.x && menu->button.b <=
    menu->button.click_pos_plus.y +
    menu->button.click_size_plus.y && menu->button.b >=
    menu->button.click_pos_plus.y)
        if (index->sound.volume_music < 100) {
            index->sound.volume_music++;
            index->sound.game_volume++;
            sfMusic_setVolume(index->sound.music, index->sound.volume_music);
            sfMusic_setVolume(index->sound.game, index->sound.game_volume);
            sfText_setString(menu->text_settings.txt_value_music,
            my_nbr_to_str(index->sound.volume_music));
        }
}

int is_plus2(menu_t *menu, Index_t *index, sfRenderWindow *window)
{
    if (menu->button.a <= menu->button.click_pos_plus2.x +
    menu->button.click_size_plus2.x && menu->button.a >=
    menu->button.click_pos_plus2.x && menu->button.b <=
    menu->button.click_pos_plus2.y +
    menu->button.click_size_plus2.y && menu->button.b >=
    menu->button.click_pos_plus2.y)
        if (index->sound.effects.volume_effects < 100) {
            index->sound.effects.volume_effects++;
            sfSound_setVolume(index->sound.effects.no,
            index->sound.effects.volume_effects);
            sfText_setString(menu->text_settings.txt_value_sound,
            my_nbr_to_str(index->sound.effects.volume_effects));
        }
}

int is_minus(menu_t *menu, Index_t *index, sfRenderWindow *window)
{
    if (menu->button.a <= menu->button.click_pos_minus.x +
    menu->button.click_size_minus.x && menu->button.a >=
    menu->button.click_pos_minus.x && menu->button.b <=
    menu->button.click_pos_minus.y +
    menu->button.click_size_minus.y && menu->button.b >=
    menu->button.click_pos_minus.y)
        if (index->sound.volume_music > 0) {
            index->sound.volume_music--;
            index->sound.game_volume--;
            sfMusic_setVolume(index->sound.music, index->sound.volume_music);
            sfMusic_setVolume(index->sound.game, index->sound.game_volume);
            sfText_setString(menu->text_settings.txt_value_music,
            my_nbr_to_str(index->sound.volume_music));
        }
}

int is_minus2(menu_t *menu, Index_t *index, sfRenderWindow *window)
{
    if (menu->button.a <= menu->button.click_pos_minus2.x +
    menu->button.click_size_minus2.x && menu->button.a >=
    menu->button.click_pos_minus2.x && menu->button.b <=
    menu->button.click_pos_minus2.y +
    menu->button.click_size_minus2.y && menu->button.b >=
    menu->button.click_pos_minus2.y)
        if (index->sound.effects.volume_effects  > 0) {
            index->sound.effects.volume_effects--;
            sfSound_setVolume(index->sound.effects.no,
            index->sound.effects.volume_effects);
            sfText_setString(menu->text_settings.txt_value_sound,
            my_nbr_to_str(index->sound.effects.volume_effects));
        }
}

int is_back(menu_t *menu, sfRenderWindow *window)
{
    if (menu->button.a <= menu->button.click_pos_back.x +
    menu->button.click_size_back.x && menu->button.a >=
    menu->button.click_pos_back.x && menu->button.b <=
    menu->button.click_pos_back.y +
    menu->button.click_size_back.y && menu->button.b >=
    menu->button.click_pos_back.y)
        menu->player_choice = 0;
}