/*
** EPITECH PROJECT, 2020
** quick
** File description:
** quick init
*/

#include "../include/my.h"

void quick_time_init(Index_t *index)
{
    for (int i = 0; i < BALISES_NBR; i++) {
        index->time.balises[i] = 0;
    }
}

void quick_init(Index_t *index)
{
    index->wave.filepath = "assets/waves/wave_1";
    index->wave.fd = open(index->wave.filepath, O_RDONLY);
    quick_time_init(index);
}