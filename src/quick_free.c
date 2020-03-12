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
    empty_enemies_list(index);
    index->bunker_life = BUNKER_LIFE;
    index->wave.wave_nbr = 0;
    sfMusic_stop(index->sound.game);
    quick_free_ui(index);
}