/*
** EPITECH PROJECT, 2020
** manage shoot
** File description:
** manage_shoot
*/

#include "../include/my.h"

void reset_shoot_anim(Index_t *index, int i, int j)
{
    index->turrets_array[i][j].anim_state = 0;
}

void set_regular_shoot_anim(Index_t *index, int i, int j)
{
    index->turrets_array[i][j].anim_state = 1;
}

void manage_shoot(Index_t *index, int i, int j, int type)
{
    if (index->turrets_array[i][j].aimed_enemy == NULL ||
    index->turrets_array[i][j].aimed_enemy->type == 0) {
        return;
    }
    if (index->turrets_array[i][j].type == 5 ||
    index->turrets_array[i][j].type == 10) {
        shoot_tesla(index, i, j);
        return;
    }
    //printf("type: %i \n", index->turrets_array[i][j].aimed_enemy->type);
    if (calc_dist(index->turrets_array[i][j].aimed_enemy, i, j) >=
    -index->turrets_array[i][j].range) {
        index->turrets_array[i][j].aimed_enemy->life -= 30;
        set_regular_shoot_anim(index, i, j);
        printf("pan pan!\n");
        //printf("pan pan!\n x: %i y: %i\n", j, i);
    }
    if (index->turrets_array[i][j].aimed_enemy->life <= 0)
        rm_enemy(index, index->turrets_array[i][j].aimed_enemy);
}