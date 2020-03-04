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
    float dist_z = 0;
    float dist;

    if (current->type == 0)
        return (999);
    dist_x = current->coordinates.x- x * 64;
    dist_z = current->coordinates.y - y * 64;
    dist = (dist_x + dist_z);
    return (dist);
    //return (1);
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
        cur_dist = cur_dist * (-1);
        if (cur_dist < lowest_dist && (cur_dist >=
        -index->turrets_array[y][x].range &&
        cur_dist <= index->turrets_array[y][x].range)) {
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

    //printf("this function\n");
    if (index->turrets_array[y][x].type != 5 &&
    index->turrets_array[y][x].type != 10) {
        if ((index->turrets_array[y][x].type == 4 ||
        index->turrets_array[y][x].type == 9))
            return;
        //(index->turrets_array[y][x].aimed_enemy) =//
        closest = find_enemy_to_aim(index, y, x);
        index->turrets_array[y][x].aimed_enemy = closest;
        if (closest == NULL) {
            //printf("pas d'enemys\n");
            return;
        }
        //printf("coordinates: %f %f \n", closest->coordinates.x, closest->coordinates.y);
        set_rotation_to_aimed(index, y, x);
    }
}