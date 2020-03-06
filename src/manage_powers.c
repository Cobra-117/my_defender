/*
** EPITECH PROJECT, 2020
** manage power
** File description:
** manage the powers
*/

#include "../include/my.h"

void chernobyl(Index_t *index)
{
    printf("ALLAHU AKBAR\n");
    empty_enemies_list(index);
}

void manage_power(Index_t *index)
{
    if (index->game_effects.chernobyl == sfTrue) {
        chernobyl(index);
        destroy_turrets(index);
        index->game_effects.chernobyl = sfFalse;
    }
}