/*
** EPITECH PROJECT, 2020
** sdfghjk
** File description:
** sdfghj
*/

#include "../include/my.h"

int can_I_buy_this(Index_t *index)
{
    return (1);
}

void place_turret(Index_t *index, sfVector2f asked_tile)
{
    if (index->turrets_array[(int)asked_tile.y][(int)asked_tile.x].type == 0 &&
    index->map.map_array[(int)asked_tile.y][(int)asked_tile.x] == 't' &&
    can_I_buy_this(index) == 1) {
        index->turrets_array[(int)asked_tile.y][(int)asked_tile.x].type =
        index->ui_which_turret;
        index->turrets_array[(int)asked_tile.y][(int)asked_tile.x].rotation =
        get_turret_optimal_rotation(index, asked_tile);
        printf("place_turrets\n");
    } else {
        printf("*angry minecraft npc sound*\n");
    }
}

void place_is_valid(Index_t *index)
{
    sfVector2f mouse_pos;
    sfVector2f asked_tile;

    mouse_pos.x = index->ui.coord_mouse_x;
    mouse_pos.y = index->ui.coord_mouse_y;
    asked_tile = get_tile_from_pos(mouse_pos);

    printf("turret: %i \n", index->ui_which_turret);
    if (index->ui_which_turret == 0)
        return;
    //condition de vérification de la case;

    //if upgrade, upgrade function and return;

    //if power, power and return;

    place_turret(index, asked_tile);
    printf("placeisvalid\n");
    /*if (index->ui_which_turret.casu == 1) {
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
    }*/
}