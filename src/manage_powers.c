/*
** EPITECH PROJECT, 2020
** manage power
** File description:
** manage the powers
*/

#include "../include/my.h"

void chernobyl(Index_t *index)
{
    empty_enemies_list(index);
}

void manage_power(Index_t *index)
{
    if (index->game_effects.chernobyl == sfTrue) {
        chernobyl(index);
        destroy_turrets(index);
        index->game_effects.chernobyl = sfFalse;
    }
    if (index->game_effects.order == sfTrue) {
        if (compare_time(index, BAL_ORDER, INTERV_ORDER) == 1) {
            index->game_effects.order = sfFalse;
            sfSound_stop(index->sound.effects.anthem);
            sfMusic_play(index->sound.game);
        }
    }
}