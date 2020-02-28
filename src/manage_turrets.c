/*
** EPITECH PROJECT, 2020
** manage turrets
** File description:
** manage the turrets
*/

#include "../include/my.h"

void manage_this_turret(Index_t *index, int i, int j)
{
    if (index->turrets_array[i][j].type == 0)
        return;
    set_turret_rotation(index, i, j);
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