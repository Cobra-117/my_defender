/*
** EPITECH PROJECT, 2020
** is game finished
** File description:
** isn't the file name explicit enough?
*/

#include "../include/my.h"

int is_there_one_living_enemy(Index_t *index)
{
    enemies_list_t *current;

    current = *(&index->enemies_list);
    while (current != NULL)
    {
        if (current->type != 0)
            return (1);
        current = current->next;
    }
    return (0);
}

int is_game_finished(Index_t *index)
{
    if (index->bunker_life <= 0) {
        return (2);
    }
    if (index->wave.wave_nbr > WAVES_TOTAL_NBR && index->wave.end == 1 &&
    (index->enemies_list->type == 0 && is_there_one_living_enemy(index) == 0)) {
        return (1);
    }
    return (0);
}