/*
** EPITECH PROJECT, 2020
** shoot flames
** File description:
** shoot for the flame/freeze turrets
*/

#include "../include/my.h"

void shoot_flame(Index_t *index, int i, int j)
{
    if (calc_dist(index->turrets_array[i][j].aimed_enemy[0], i, j) >=
    -index->turrets_array[i][j].range) {
        if (index->turrets_array[i][j].aimed_enemy[0]->freeze == sfTrue)
            return;
        index->turrets_array[i][j].aimed_enemy[0]->freeze = sfTrue;
        index->turrets_array[i][j].aimed_enemy[0]->speed =
        index->turrets_array[i][j].aimed_enemy[0]->speed / 2;
        index->turrets_array[i][j].cycles = 0;
        set_regular_shoot_anim(index, i, j);
    }
}