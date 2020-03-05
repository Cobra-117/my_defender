/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** sdfg
*/

#include "../include/my.h"

void upgrading(Index_t *index)
{
    sfVector2f pos;

    pos.x = index->ui.coord_mouse_x;
    pos.y = index->ui.coord_mouse_y;
    pos = get_tile_from_pos(pos);
    if (index->turrets_array[(int)pos.y][(int)pos.x].type != 0 &&
    index->turrets_array[(int)pos.y][(int)pos.x].type < 6) {
        index->turrets_array[(int)pos.y][(int)pos.x].type += 5;
        printf("qsdfghj\n");
    }
}