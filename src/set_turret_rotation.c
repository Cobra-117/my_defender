/*
** EPITECH PROJECT, 2020
** set turret rotation
** File description:
** make turret point the enemy
*/

#include "../include/my.h"

float calc_dist(enemies_list_t *current, int y , int x)
{
    float dist_x = 0;
    float dist_y = 0;
    float dist;
    int x_posi = 1;
    int y_posi = 1;

    if (current->type == 0)
        return (999);
    dist_x = current->coordinates.x - x * 64;
    dist_y = current->coordinates.y - y * 64;
    if (dist_x < 0) {
        x_posi = 0;
        dist_x *= (-1);
    }
    if (dist_y < 0) {
        y_posi = 0;
        dist_y *= (-1);
    }
    dist = (dist_x + dist_y);
    return (dist);
}

enemies_list_t *find_enemy_to_aim(Index_t *index, int y, int x)
{
    enemies_list_t *current;
    enemies_list_t *closest = NULL;
    float lowest_dist = 999;
    float cur_dist = 0;

    current = *(&index->enemies_list);
    while (current != NULL)
    {
        cur_dist = calc_dist(current, y, x);
        if (cur_dist < lowest_dist &&
        cur_dist <= index->turrets_array[y][x].range) {
            lowest_dist = cur_dist;
            closest = current;
        }
        current = current->next;
    }
    return (closest);
}

void set_turret_rotation(Index_t *index, int y, int x)
{
    float dist_x;
    enemies_list_t *closest;

    if (index->turrets_array[y][x].aimed_enemy[0] == NULL) {
        closest = find_enemy_to_aim(index, y, x);
        index->turrets_array[y][x].aimed_enemy[0] = closest;
        if (index->turrets_array[y][x].aimed_enemy[0] == NULL) {
            return;
        }
    }
    if (index->turrets_array[y][x].aimed_enemy[0] != NULL) {
        set_rotation_to_aimed(index, y, x);
    }
}
