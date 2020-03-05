/*
** EPITECH PROJECT, 2020
** manage shoot cycles
** File description:
** manage the shoot cycles
*/

#include "../include/my.h"

int manage_shoot_cycles(Index_t *index, int x, int y)
{
    if ((index->turrets_array[y][x].type == 1 ||
    index->turrets_array[y][x].type == 6) &&
    index->turrets_array[y][x].cycles >= CASU_FIRE_RATE)
        return (1);
    if ((index->turrets_array[y][x].type == 2 ||
    index->turrets_array[y][x].type == 7) &&
    index->turrets_array[y][x].cycles >= HEAVY_FIRE_RATE)
        return (1);
    if ((index->turrets_array[y][x].type == 3 ||
    index->turrets_array[y][x].type == 8) &&
    index->turrets_array[y][x].cycles >= ARTI_FIRE_RATE)
        return (1);
    if ((index->turrets_array[y][x].type == 4 ||
    index->turrets_array[y][x].type == 9) &&
    index->turrets_array[y][x].cycles >= FLAME_FIRE_RATE)
        return (1);
    if ((index->turrets_array[y][x].type == 5 || index->turrets_array[y][x].type
    == 10) && index->turrets_array[y][x].cycles >= TESLA_FIRE_RATE)
        return (1);
    return (0);
}