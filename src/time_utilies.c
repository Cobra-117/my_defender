/*
** EPITECH PROJECT, 2020
** time utilies
** File description:
** functions for time
*/

#include "../include/my.h"

int compare_time(Index_t *index, int balise_nbr, float interval)
{
    sfTime current_time = sfClock_getElapsedTime(index->time.clock);
    float time_float = sfTime_asMilliseconds(current_time);
    index->time.balises[0] = 42;

    if (time_float >= index->time.balises[balise_nbr] + interval) {
        index->time.balises[balise_nbr] = time_float;
        return (1);
    }
    return (0);
}