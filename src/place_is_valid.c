/*
** EPITECH PROJECT, 2020
** sdfghjk
** File description:
** sdfghj
*/

#include "../include/my.h"

void place_is_valid(Index_t *index)
{
    if (index->ui_which_turret == 1) {
        index->pos_turret.x = index->ui.coord_mouse_x;
        index->pos_turret.y = index->ui.coord_mouse_y;
        index->pos_turret = get_tile_from_pos(index->pos_turret);
        index->pos_turret.x *= 64;
        index->pos_turret.y *= 64;
        index->pos_turret.x += 32;
        index->pos_turret.y += 32;
        sfSprite_setPosition(index->turrets.casu_mkI_spr,
        index->pos_turret);
    }
}