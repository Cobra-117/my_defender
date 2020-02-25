/*
** EPITECH PROJECT, 2020
** dfghj
** File description:
** jhgfds
*/

#include "../include/my.h"

int is_play(menu_t *menu, sfRenderWindow *window)
{
    if (menu->button.a <= menu->button.click_pos_play.x +
    menu->button.click_size_play.x && menu->button.a >=
    menu->button.click_pos_play.x && menu->button.b <=
    menu->button.click_pos_play.y + menu->button.
    click_size_play.y && menu->button.b >= menu->button.
    click_pos_play.y)
        menu->player_choice = 1;
}

int is_exit(menu_t *menu, sfRenderWindow *window)
{
    if (menu->button.a <= menu->button.click_pos_exit.x +
    menu->button.click_size_exit.x && menu->button.a >=
    menu->button.click_pos_exit.x && menu->button.b <=
    menu->button.click_pos_exit.y + menu->button.
    click_size_exit.y && menu->button.b >= menu->
    button.click_pos_exit.y)
        menu->player_choice = 2;
}

int is_htp(menu_t *menu, sfRenderWindow *window)
{
    if (menu->button.a <= menu->button.click_pos_htp.x +
    menu->button.click_size_htp.x && menu->button.a >=
    menu->button.click_pos_htp.x && menu->button.b <=
    menu->button.click_pos_htp.y + menu->button.
    click_size_htp.y && menu->button.b >= menu->
    button.click_pos_htp.y)
        menu->player_choice = 3;
}

int is_param(menu_t *menu, sfRenderWindow *window)
{
    if (menu->button.a <= menu->button.click_pos_param.x +
    menu->button.click_size_param.x && menu->button.a >=
    menu->button.click_pos_param.x && menu->button.b <=
    menu->button.click_pos_param.y + menu->button.
    click_size_param.y && menu->button.b >= menu->
    button.click_pos_param.y)
        menu->player_choice = 4;
}