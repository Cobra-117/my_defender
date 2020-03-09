/*
** EPITECH PROJECT, 2020
** is game finished
** File description:
** isn't the file name explicit enough?
*/

#include "../include/my.h"

int is_game_finished(Index_t *index)
{
    if (index->bunker_life <= 0) {
        return (2);
    }
    if (index->wave.wave_nbr > WAVES_TOTAL_NBR && index->wave.end == 1 &&
    (index->enemies_list->type == 0 && index->enemies_list->next == NULL)) {
        printf("end\n");
        return (1);
    }
    /*if (index->wave.end == 0 ||
    (index->enemies_list->type != 0 || index->enemies_list->next != NULL)) {
        return (1);
    }*/
    return (0);
}