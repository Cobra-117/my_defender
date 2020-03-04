/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** sdfghjk
*/

#include "../include/my.h"

int is_plus(menu_t *menu, sfRenderWindow *window)
{
    if (menu->button.a <= menu->button.click_pos_plus.x +
    menu->button.click_size_plus.x && menu->button.a >=
    menu->button.click_pos_plus.x && menu->button.b <=
    menu->button.click_pos_plus.y + menu->button.
    click_size_plus.y && menu->button.b >= menu->button.
    click_pos_plus.y)
        if (menu->volume_music < 100) {
            menu->volume_music++;
            sfMusic_setVolume(menu->music, menu->volume_music);
        }
}

int is_minus(menu_t *menu, sfRenderWindow *window)
{
    if (menu->button.a <= menu->button.click_pos_minus.x +
    menu->button.click_size_minus.x && menu->button.a >=
    menu->button.click_pos_minus.x && menu->button.b <=
    menu->button.click_pos_minus.y + menu->button.
    click_size_minus.y && menu->button.b >= menu->button.
    click_pos_minus.y)
        if (menu->volume_music > 0) {
            menu->volume_music--;
            sfMusic_setVolume(menu->music, menu->volume_music);
        }
}