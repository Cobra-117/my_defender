/*
** EPITECH PROJECT, 2020
** quick free
** File description:
** reset and free some things at end of a game
*/

#include "../include/my.h"

void quick_free(Index_t *index)
{
    destroy_turrets(index);
    empty_enemies_list(index); //corriger ça
    index->bunker_life = BUNKER_LIFE;
    //music
}