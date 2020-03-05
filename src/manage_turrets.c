/*
** EPITECH PROJECT, 2020
** manage turrets
** File description:
** manage the turrets
*/

#include "../include/my.h"

int can_I_shoot(Index_t *index, int y, int x)
{
    if (index->turrets_array[y][x].type != 5 &&
    index->turrets_array[y][x].type != 10 &&
    index->turrets_array[y][x].type != 4 &&
    index->turrets_array[y][x].type != 9) {
        if (index->turrets_array[y][x].aimed_enemy == NULL)
            return (0);
    }
    if (time_to_shoot(index, y, x) != 1)
        return (0);
    return (1);
}

int time_to_anime(Index_t *index, int y, int x)
{
    sfTime current_time = sfClock_getElapsedTime(index->time.clock);
    float time_float = sfTime_asMilliseconds(current_time);

    if (time_float >= index->turrets_array[y][x].time_anim +
    INTERV_TURRET_ANIM) {
        index->turrets_array[y][x].time_anim = time_float;
        return (1);
    }
    return (0);
}

int time_to_shoot(Index_t *index, int y, int x)
{
    sfTime current_time = sfClock_getElapsedTime(index->time.clock);
    float time_float = sfTime_asMilliseconds(current_time);

    if (time_float >= index->turrets_array[y][x].time_shoot +
    INTERV_CHECK_SHOOT) {
        index->turrets_array[y][x].time_shoot = time_float;
        index->turrets_array[y][x].time_anim = time_float;
        printf("time anim has been set as %f \n", index->turrets_array[y][x].time_anim);
        printf("x: %i y: %i\n", x, y);
        return (1);
    }
    return (0);
}

void manage_this_turret(Index_t *index, int y, int x)
{
    if (index->turrets_array[y][x].type == 0)
        return;
    set_turret_rotation(index, y, x);
    if (can_I_shoot(index, y, x) == 1) {
        //printf("will check shoot at x : %i y: %i\n", j, i);
        index->turrets_array[y][x].cycles += 1;
        manage_shoot(index, y, x, index->turrets_array[y][x].type);
    }
    if (index->turrets_array[y][x].anim_state == 1 &&
    time_to_anime(index, y, x) == 1) {
        //printf(" after this y: %i x: %i\n", y, x);
        reset_shoot_anim(index, y, x);
    }
    //manage_turret shoot and animation
    //Toute les x ms, on passe à l'état suivant de l'animation
    //Si l'état d'animation == en tir (voir pour le lance flamme) alors on shoot
    //cycle de vérification de si on peut tirer toute les x secondes
    //Si !en train de tirer, on update la variable
    //Quand la variable à atteint une certaine valeur, on tir et on la reset
}

void manage_turrets(Index_t *index)
{
    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 33; j++) {
            manage_this_turret(index, i, j);
        }
    }
    //printf("end function\n");
}