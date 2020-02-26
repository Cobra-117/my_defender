/*
** EPITECH PROJECT, 2020
** wave management
** File description:
** manage the wave
*/

#include "../include/my.h"

int wave_break(Index_t *index)
{
    static int has_break_began = 0;
    sfTime time;
    float time_float;

    if (has_break_began == 0) {
        has_break_began = 1;
        time = sfClock_getElapsedTime(index->time.clock);
        index->time.balises[BAL_WAVE_BREAK] = sfTime_asMilliseconds(time);
    } else if (compare_time(index, BAL_WAVE_BREAK, INTERV_WAVE_BREAK) == 1) {
        has_break_began = 0;
        return (1);
    }
    return (0);
}

void manage_waves(Index_t *index)
{
    if (index->wave.end == 0 ||
    (index->enemies_list->type != 0 || index->enemies_list->next != NULL)) {
        return;
    }
    if (index->wave.wave_nbr >= WAVES_TOTAL_NBR) {
        return;
    }
    if (wave_break(index) != 1)
        return;
    index->wave.end = 0;
    index->wave.filepath[18] += 1;
    close(index->wave.fd);
    index->wave.wave_nbr += 1;
    index->wave.fd = open(index->wave.filepath, O_RDONLY);
}