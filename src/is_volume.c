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
    menu->button.click_pos_plus.y + menu->button.
    click_size_plus.y && menu->button.b >= menu->button.
    click_pos_plus.y)
        if (index->sound.game_volume < 100) {
            index->sound.game_volume++;
            sfMusic_setVolume(index->sound.game, index->sound.game_volume);
        }
}

int is_minus(menu_t *menu, Index_t *index, sfRenderWindow *window)
{
    if (menu->button.a <= menu->button.click_pos_minus.x +
    menu->button.click_size_minus.x && menu->button.a >=
    menu->button.click_pos_minus.x && menu->button.b <=
    menu->button.click_pos_minus.y + menu->button.
    click_size_minus.y && menu->button.b >= menu->button.
    click_pos_minus.y)
        if (index->sound.game_volume > 0) {
            index->sound.game_volume -= 1;
            sfMusic_setVolume(index->sound.game, index->sound.game_volume);
        }
}

int is_back(menu_t *menu, sfRenderWindow *window)
{
    if (menu->button.a <= menu->button.click_pos_back.x +
    menu->button.click_size_back.x && menu->button.a >=
    menu->button.click_pos_back.x && menu->button.b <=
    menu->button.click_pos_back.y + menu->button.
    click_size_back.y && menu->button.b >= menu->button.
    click_pos_back.y)
        menu->player_choice = 0;
}