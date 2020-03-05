/*
** EPITECH PROJECT, 2020
** shoot tesla
** File description:
** shoot for the tesla
*/

#include "../include/my.h"

void tesla_range_damage(Index_t *index, int y, int x)
{
    enemies_list_t *current;
    float dist;

    current = *(&index->enemies_list);
    while (current != NULL)
    {
        dist = calc_dist(current, y, x);
        if ((dist < 0 && (dist * -1) <= DEFAULT_RANGE) ||
        (dist >= 0 && dist <= DEFAULT_RANGE)) {
            printf("destroyed this enemy\n");
            current->life -= 10000;
            if (current->life <= 0)
                rm_enemy(index, current);

        } else {
            printf("distance was too long: %f\n", dist);
        }
        current = current->next;
    }
    printf("end shoot\n");
}

void shoot_tesla(Index_t *index, int y, int x)
{
    //index->turrets_array[y][x].aimed_enemy->type = 1;
    tesla_range_damage(index, y, x);
    if (index->turrets_array[y][x].aimed_enemy->type <= 0)
        rm_enemy(index, index->turrets_array[y][x].aimed_enemy);
    set_regular_shoot_anim(index, y, x);
    //tesla_range_damage(index, y, x);
}