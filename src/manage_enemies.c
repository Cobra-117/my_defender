/*
** EPITECH PROJECT, 2020
** manage enemies
** File description:
** manage the enemies
*/

#include "../include/my.h"

int read_map(Index_t *index)
{
    char buff[2];

    if (index->wave.end == 1) {
        return (-1);
    }
    read(index->wave.fd, &buff, 1);
    if (buff[0] == '|') {
        index->wave.end = 1;
        return (-1);
    }
    if (buff[0] == '-')
        return (0);
    return (buff[0] - 48);
}

void manage_enemies(Index_t *index)
{
    int type = 0;

    if (compare_time(index, BAL_MOVE_ENEMIES, INTERV_MOVE_ENEMIES) == 1) {
        move_enemies(index);
    }
    if (compare_time(index, BAL_READMAP, INTERV_READMAP) == 1) {
        type = read_map(index);
        //if (type == - 1) {
        //}
        if (type == 1 || type == 2 || type == 3)
            add_enemy(index, type);
    }
}