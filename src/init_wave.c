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
    index->wave.left_enemies = 0;
    index->wave.max_wave = numer_of_waves;
    index->wave.wave_nbr = 1;
    index->wave.filepath = "assets/waves/wave_1";
    index->wave.fd = open(index->wave.filepath, O_RDONLY);
    init_enemies_list(index);
}