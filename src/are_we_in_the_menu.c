/*
** EPITECH PROJECT, 2020
** sdfghjkl
** File description:
** sdfghjkl
*/

#include "../include/my.h"

int are_we_in_the_menu(Index_t *index)
{
    if (index->ui.coord_mouse_x >= index->ui.pos_socle.x &&
    index->ui.coord_mouse_y >= index->ui.pos_socle.y &&
    index->ui.coord_mouse_x <= 1280 && index->ui.coord_mouse_y
    <= 320)
        return (1);
    else
        return (-1);
}