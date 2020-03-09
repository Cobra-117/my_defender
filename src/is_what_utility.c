/*
** EPITECH PROJECT, 2020
** sdfghjkl
** File description:
** sdfghjklm
*/

#include "../include/my.h"

int is_mine(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_button_utilities.click_pos_mine.x +
    index->ui_button_utilities.click_size_mine.x && index->ui.coord_mouse_x >=
    index->ui_button_utilities.click_pos_mine.x && index->ui.coord_mouse_y <=
    index->ui_button_utilities.click_pos_mine.y + index->ui_button_utilities.
    click_size_mine.y && index->ui.coord_mouse_y >= index->ui_button_utilities.
    click_pos_mine.y && index->what_is_open == 2) {
        index->ui_which_power = 1;
        if (buy_power(index) != -1) {
            index->game_effects.blizzard = sfTrue;
            compare_time(index, BAL_BLIZZARD, INTERV_BLIZZARD);
        }
    }
}

int is_order(Index_t *index)
{
    sfTime time = sfClock_getElapsedTime(index->time.clock);
    float time_f  = sfTime_asMilliseconds(time);

    if (index->ui.coord_mouse_x <= index->ui_button_utilities.
    click_pos_order.x + index->ui_button_utilities.click_size_order.x &&
    index->ui.coord_mouse_x >= index->ui_button_utilities.click_pos_order.x
    && index->ui.coord_mouse_y <= index->ui_button_utilities.click_pos_order
    .y + index->ui_button_utilities.click_size_order.y && index->ui.
    coord_mouse_y >= index->ui_button_utilities.click_pos_order.y &&
    index->what_is_open == 2) {
        index->ui_which_power = 2;
        if (buy_power(index) != -1) {
            index->game_effects.order = sfTrue;
            index->time.balises[BAL_ORDER] = time_f;
            sfMusic_pause(index->sound.game);
            sfSound_play(index->sound.effects.anthem);
        }
    }
}

int is_tchernobyl(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui_button_utilities
    .click_pos_tchernobyl.x + index->ui_button_utilities.click_size_tchernobyl.
    x && index->ui.coord_mouse_x >= index->ui_button_utilities.
    click_pos_tchernobyl.x && index->ui.coord_mouse_y <= index->
    ui_button_utilities.click_pos_tchernobyl.y + index->ui_button_utilities.
    click_size_tchernobyl.y && index->ui.coord_mouse_y >= index->
    ui_button_utilities.click_pos_tchernobyl.y && index->what_is_open == 2) {
        index->ui_which_power = 3;
        if (buy_power(index) != -1)
            index->game_effects.chernobyl = sfTrue;
    }
}