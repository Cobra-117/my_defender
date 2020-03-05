/*
** EPITECH PROJECT, 2020
** shoot tesla
** File description:
** shoot for the tesla
*/

#include "../include/my.h"

int time_to_anime_tesla(Index_t *index, int y, int x)
{
    sfTime current_time = sfClock_getElapsedTime(index->time.clock);
    float time_float = sfTime_asMilliseconds(current_time);

    if (time_float >= index->turrets_array[y][x].time_anim +
    INTERV_TESLA_ANIM) {
        index->turrets_array[y][x].time_anim = time_float;
        return (1);
    }
    return (0);
}

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
            current->life -= index->turrets_array[y][x].damage;
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
    index->turrets_array[y][x].cycles = 0;
    set_regular_shoot_anim(index, y, x);
    //tesla_range_damage(index, y, x);
}