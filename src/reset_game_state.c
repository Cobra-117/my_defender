/*
** EPITECH PROJECT, 2020
** reset game state
** File description:
** function to reset the game
*/

#include "../include/my.h"

void destroy_turrets(Index_t *index)
{
    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 33; j++) {
            index->turrets_array[i][j].type = 0;
            index->turrets_array[i][j].anim_state = 0;
            index->turrets_array[i][j].aimed_enemy = NULL;
            index->turrets_array[i][j].cycles = 0;
            index->turrets_array[i][j].damage = 0;
            index->turrets_array[i][j].range = 0;
            index->turrets_array[i][j].rotation = 0;
            index->turrets_array[i][j].time_anim = 0;
            index->turrets_array[i][j].time_shoot = 0;
            index->turrets_array[i][j].type = 0;
        }
    }
}

void empty_enemies_list(Index_t *index)
{
    enemies_list_t *current;

    current = &(*index->enemies_list);
    while (current != NULL) {
        rm_enemy(index, current);
        current = current->next;
    }
}