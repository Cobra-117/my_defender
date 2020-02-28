/*
** EPITECH PROJECT, 2020
** manage turrets
** File description:
** manage the turrets
*/

#include "../include/my.h"

void manage_this_turret(Index_t *index, int i, int j)
{
    if (index->turrets_array[i][j].type == 0)
        return;
    set_turret_rotation(index, i, j);
}

void manage_turrets(Index_t *index)
{
    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 33; j++) {
            manage_this_turret(index, i, j);
        }
    }
    //printf("end function\n");
}