/*
** EPITECH PROJECT, 2020
** set turret offset
** File description:
** (visual only)
*/

#include "../include/my.h"

sfVector2f set_turret_offset(Index_t *index, int x, int y, sfVector2f pos)
{
    if (index->map.map_array[y - 1][x] == 'o'){
        pos.y += 16;
    }
    if (index->map.map_array[y + 1][x] == 'o'){
        pos.y -= 16;
    }
    if (index->map.map_array[y][x - 1] == 'o'){
        pos.x += 16;
    }
    if (index->map.map_array[y][x + 1] == 'o'){
        pos.x -= 16;
    }
    return (pos);
}