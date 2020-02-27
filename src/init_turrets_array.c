/*
** EPITECH PROJECT, 2020
** init turret array
** File description:
** init the array of turrets
*/

#include "../include/my.h"

void fill_one_line_of_turrets(Index_t *index, int i)
{
    index->turrets_array[i] = malloc(sizeof(turret_obj_t) * 33);
    for (int j = 0; j < 33; j++) {
        index->turrets_array[i][j].type = 0;
    }
}

void init_turret_array(Index_t *index)
{
    int fd = open("assets/map/map01", O_RDONLY);

    if (fd == -1)
        exit (64);
    index->turrets_array = malloc(sizeof(turret_obj_t *) * 19);
    for (int i = 0; i < 19; i++) {
        fill_one_line_of_turrets(index, i);
    }
}