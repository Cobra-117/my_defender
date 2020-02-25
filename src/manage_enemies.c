/*
** EPITECH PROJECT, 2020
** manage enemies
** File description:
** manage the enemies
*/

#include "../include/my.h"

int read_map(index)
{
}

void manage_enemies(Index_t *index)
{
    int type = 0;
    if (compare_time(index, BAL_READMAP, INTERV_READMAP) == 1) {
        type = read_map(index);
        if (type == - 1) {
            printf("end_wave\n");
        }
        printf("time\n");
        add_enemy(index);
    }
    //move

    //add

    //rm
}