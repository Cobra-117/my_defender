/*
** EPITECH PROJECT, 2020
** init struct
** File description:
** initialize the structures
*/

#include "../include/my.h"

void init_time(Index_t *index)
{
    index->time.clock = sfClock_create();
}

void init_structs(Index_t *index)
{
    init_window(index);
    init_obj(index);
    init_map(index);
    init_wave(index);
    init_time(index);
}