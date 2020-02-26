/*
** EPITECH PROJECT, 2020
** init wave
** File description:
** init the wave structure
*/

#include "../include/my.h"

void init_wave(Index_t *index)
{
    index->wave.is_end_wave = 0;
    index->wave.end = 0;
    index->wave.left_enemies = 0;
    index->wave.max_wave = WAVES_TOTAL_NBR;
    index->wave.wave_nbr = 1;
    init_enemies_list(index);
}