/*
** EPITECH PROJECT, 2020
** is game finished
** File description:
** isn't the file name explicit enough?
*/

#include "../include/my.h"

int is_game_finished(Index_t *index)
{
    if (index->bunker_life <= 0) {
        return (2);
    }
    return (0);
}