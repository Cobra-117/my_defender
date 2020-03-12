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

void tesla_shoot_one(Index_t *index, int y, int x, enemies_list_t *current)
{
    if (current->life <= 0) {
        index->money += 100 *
        index->turrets_array[y][x].aimed_enemy[0]->type;
        rm_enemy(index, current);
        sfSound_play(index->sound.effects.boom);
    }
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
            current->life -= index->turrets_array[y][x].damage;
            tesla_shoot_one(index, y, x, current);
        }
        current = current->next;
    }
}

void shoot_tesla(Index_t *index, int y, int x)
{
    tesla_range_damage(index, y, x);
    if (index->turrets_array[y][x].aimed_enemy[0]->type <= 0) {
        sfSound_play(index->sound.effects.boom);
        rm_enemy(index, index->turrets_array[y][x].aimed_enemy[0]);
    }
    index->turrets_array[y][x].cycles = 0;
    set_regular_shoot_anim(index, y, x);
}