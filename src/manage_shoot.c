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
    if (calc_dist(index->turrets_array[i][j].aimed_enemy, i, j) >=
    -index->turrets_array[i][j].range) {
        index->turrets_array[i][j].aimed_enemy->life -=
        index->turrets_array[i][j].damage;
        if (index->game_effects.order == sfTrue) {
            index->turrets_array[i][j].aimed_enemy->life -=
            index->turrets_array[i][j].damage * 4;
            printf("ORDER DAMAGE CYKA BLYAT\n");
        }
        index->turrets_array[i][j].cycles = 0;
        set_regular_shoot_anim(index, i, j);
    }
    if (index->turrets_array[i][j].aimed_enemy->life <= 0)
        rm_enemy(index, index->turrets_array[i][j].aimed_enemy);
}