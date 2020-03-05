/*
** EPITECH PROJECT, 2020
** sdfghjk
** File description:
** sdfghj
*/

#include "../include/my.h"

void set_turret_damage(Index_t *index, sfVector2f asked_tile)
{
    int type = index->turrets_array[(int)asked_tile.y][(int)asked_tile.x].type;

    if (type == 1 || type == 6)
        index->turrets_array[(int)asked_tile.y][(int)asked_tile.x].damage =
        CASU_DAMAGE;
    if (type == 2 || type == 7)
        index->turrets_array[(int)asked_tile.y][(int)asked_tile.x].damage =
        HEAVY_DAMAGE;
    if (type == 3 || type == 8)
        index->turrets_array[(int)asked_tile.y][(int)asked_tile.x].range =
        ARTI_DAMAGE;
    if (type == 4 || type == 9)
        index->turrets_array[(int)asked_tile.y][(int)asked_tile.x].range =
        FLAME_DAMAGE;
    if (type == 5 || type == 10)
        index->turrets_array[(int)asked_tile.y][(int)asked_tile.x].range =
        TESLA_DAMAGE;
}

void set_turret_range(Index_t *index, sfVector2f asked_tile)
{
    int type = index->turrets_array[(int)asked_tile.y][(int)asked_tile.x].type;

    if (type == 1 || type == 6)
        index->turrets_array[(int)asked_tile.y][(int)asked_tile.x].range =
        DEFAULT_RANGE;
    if (type == 2 || type == 7)
        index->turrets_array[(int)asked_tile.y][(int)asked_tile.x].range =
        DEFAULT_RANGE;
    if (type == 3 || type == 8)
        index->turrets_array[(int)asked_tile.y][(int)asked_tile.x].range =
        LONG_RANGE;
    if (type == 4 || type == 9)
        index->turrets_array[(int)asked_tile.y][(int)asked_tile.x].range =
        DEFAULT_RANGE;
    if (type == 5 || type == 10)
        index->turrets_array[(int)asked_tile.y][(int)asked_tile.x].range =
        DEFAULT_RANGE;
}

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
        set_turret_range(index, asked_tile);
        set_turret_damage(index, asked_tile);
        index->turrets_array[(int)asked_tile.y][(int)asked_tile.x].cycles = 0;
        index->turrets_array[(int)asked_tile.y][(int)asked_tile.x].
        anim_state = 0;
        index->turrets_array[(int)asked_tile.y][(int)asked_tile.x].
        aimed_enemy = NULL;
        index->turrets_array[(int)asked_tile.y][(int)asked_tile.x].
        time_shoot = 0;
        index->turrets_array[(int)asked_tile.y][(int)asked_tile.x].
        time_anim = 0;
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
    sfSound_play(index->sound.effects.no);
}