/*
** EPITECH PROJECT, 2020
** set turret paramater
** File description:
** init the new turret correctly
*/

#include "../include/my.h"

float get_turret_optimal_rotation(Index_t *index, sfVector2f pos)
{
    if (index->map.map_array[(int)pos.y][(int)pos.x - 1] == 'o')
        return (270);
    if (index->map.map_array[(int)pos.y - 1][(int)pos.x] == 'o')
        return (0);
    if (index->map.map_array[(int)pos.y + 1][(int)pos.x] == 'o')
        return (180);
    if (index->map.map_array[(int)pos.y][(int)pos.x + 1] == 'o')
        return (90);
    return (0);
}