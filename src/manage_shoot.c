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

void regular_shoot(Index_t *index, int i, int j, int type)
{
    if (type != 0) {
        index->turrets_array[i][j].aimed_enemy[0]->life -=
        index->turrets_array[i][j].damage;
        if (index->game_effects.order == sfTrue)
            index->turrets_array[i][j].aimed_enemy[0]->life -=
            index->turrets_array[i][j].damage * 4;
        index->turrets_array[i][j].cycles = 0;
        set_regular_shoot_anim(index, i, j);
    }
    if (index->turrets_array[i][j].aimed_enemy[0]->life <= 0) {
        index->money += 75 * index->turrets_array[i][j].aimed_enemy[0]->type;
        rm_enemy(index, index->turrets_array[i][j].aimed_enemy[0]);
        sfSound_play(index->sound.effects.boom);
        index->turrets_array[i][j].aimed_enemy[0] = NULL;
    }
}

void manage_shoot(Index_t *index, int i, int j, int type)
{
    if (index->turrets_array[i][j].aimed_enemy[0] == NULL ||
    index->turrets_array[i][j].aimed_enemy[0]->type == 0)
        return;
    if (index->turrets_array[i][j].type == 5 ||
    index->turrets_array[i][j].type == 10) {
        shoot_tesla(index, i, j);
        return;
    }
    if (index->turrets_array[i][j].type == 4 ||
    index->turrets_array[i][j].type == 9) {
        shoot_flame(index, i, j);
        return;
    }
    regular_shoot(index, i, j, type);
}