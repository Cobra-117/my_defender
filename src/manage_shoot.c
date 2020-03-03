/*
** EPITECH PROJECT, 2020
** manage shoot
** File description:
** manage_shoot
*/

#include "../include/my.h"

void set_regular_shoot_anim(Index_t *index, int i, int j)
{
    index->turrets_array[i][j].anim_state = 1;
}

void manage_shoot(Index_t *index, int i, int j, int type)
{
    if (index->turrets_array[i][j].aimed_enemy == NULL)
        return;
    if (calc_dist(index->turrets_array[i][j].aimed_enemy, i, j) >=
    -index->turrets_array[i][j].range) {
        index->turrets_array[i][j].aimed_enemy->life -= 10000;
        set_regular_shoot_anim(index, i, j);
        printf("pan pan!\n");
    }
    if (index->turrets_array[i][j].aimed_enemy->life <= 0)
        rm_enemy(index, index->turrets_array[i][j].aimed_enemy);
}