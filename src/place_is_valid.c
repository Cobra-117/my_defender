/*
** EPITECH PROJECT, 2020
** sdfghjk
** File description:
** sdfghj
*/

#include "../include/my.h"

void place_is_valid(Index_t *index)
{
    if (index->ui_which_turret.casu == 1) {
        index->pos_turret.x = index->ui.coord_mouse_x;
        index->pos_turret.y = index->ui.coord_mouse_y;
        printf("x = %f\n", index->pos_turret.x);
        printf("y = %f\n", index->pos_turret.y);
        index->pos_turret = get_tile_from_pos(index->pos_turret);
        printf("x = %f\n", index->pos_turret.x);
        printf("y = %f\n", index->pos_turret.y);
        index->pos_turret.x *= 64;
        index->pos_turret.y *= 64;
        index->pos_turret.x -= 32;
        //index->pos_turret.y += 64;
        sfSprite_setPosition(index->ui_turrets.arti_ui_mkI_spr,
        index->pos_turret);
        sfRenderWindow_drawSprite(index->window, index->ui_turrets.arti_ui_mkI_spr, NULL);
    }
}