/*
** EPITECH PROJECT, 2020
** set rotation to aimed
** File description:
** set turret rotation
*/

#include "../include/my.h"

float find_rot_quarter(Index_t *index, int y, int x)
{
    float dist_x = x * 64 -
    index->turrets_array[y][x].aimed_enemy->coordinates.x;
    float dist_y = y * 64 -
    index->turrets_array[y][x].aimed_enemy->coordinates.y;

    if (dist_x > 0 && dist_y > 0)
        return (0);
    if (dist_x > 0 && dist_y < 0)
        return (3);
    if (dist_x < 0 && dist_y < 0)
        return (2);
    if (dist_x < 0 && dist_y > 0)
        return (1);
    return (-1);
}

void set_rotation_to_aimed(Index_t *index, int y, int x)
{
    float quarter = find_rot_quarter(index, y, x);
    float angle = 0;
    float dist = 0;
    float posi_x = x * 64 -
    index->turrets_array[y][x].aimed_enemy->coordinates.x;
    float posi_y = y * 64 -
    index->turrets_array[y][x].aimed_enemy->coordinates.y;

    if (posi_x < 0)
        posi_x = posi_x * (-1);
    if (posi_y < 0)
        posi_y = posi_y * (-1);
    dist = (posi_x + posi_y);
    printf("quarter: %f\n", quarter);
    if (quarter == 0 || quarter == 2)
        angle = 90 * (posi_y / dist) - 90 + (90 * quarter);
    else if (quarter == 1 || quarter == 3)
        angle = 90 * (posi_x / dist) - 90 + (90 * quarter);
    index->turrets_array[y][x].rotation = angle;
}
