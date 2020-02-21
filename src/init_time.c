/*
** EPITECH PROJECT, 2020
** init time
** File description:
** init the time balise
*/

#include "../include/my.h"

void init_time(Index_t *index)
{
    index->time.balises_nbr = BALISES_NBR;
    index->time.balises = malloc(sizeof(float) * index->time.balises_nbr);
}