/*
** EPITECH PROJECT, 2020
** display first layers
** File description:
** display first layer
*/

#include "../include/my.h"

void display_first_layers(Index_t *index)
{
    display_map(index);
    display_turrets(index);
    display_enemies(index);
    display_bunker(index);
}