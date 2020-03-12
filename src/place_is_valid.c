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
        index->turrets_array[(int)asked_tile.y][(int)asked_tile.x].damage =
        ARTI_DAMAGE;
    if (type == 4 || type == 9)
        index->turrets_array[(int)asked_tile.y][(int)asked_tile.x].damage =
        FLAME_DAMAGE;
    if (type == 5 || type == 10)
        index->turrets_array[(int)asked_tile.y][(int)asked_tile.x].damage =
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

void set_turrret_values(Index_t *index, sfVector2f asked_tile)
{
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
    aimed_enemy = malloc(sizeof(enemies_list_t *) * 2);
    index->turrets_array[(int)asked_tile.y][(int)asked_tile.x].
    aimed_enemy[0] = NULL;
    index->turrets_array[(int)asked_tile.y][(int)asked_tile.x].
    time_shoot = 0;
    index->turrets_array[(int)asked_tile.y][(int)asked_tile.x].
    time_anim = 0;
}

void place_turret(Index_t *index, sfVector2f asked_tile)
{
    if (index->turrets_array[(int)asked_tile.y][(int)asked_tile.x].type == 0 &&
    index->map.map_array[(int)asked_tile.y][(int)asked_tile.x] == 't' &&
    buy_turret(index) != -1) {
        set_turrret_values(index, asked_tile);
        sfSound_play(index->sound.effects.place);
    } else if (are_we_in_the_menu(index) == -1)
        sfSound_play(index->sound.effects.no);
}

void place_is_valid(Index_t *index)
{
    sfVector2f mouse_pos;
    sfVector2f asked_tile;

    mouse_pos.x = index->ui.coord_mouse_x;
    mouse_pos.y = index->ui.coord_mouse_y;
    asked_tile = get_tile_from_pos(mouse_pos);
    if (index->ui_which_turret == 0)
        return;
    place_turret(index, asked_tile);
}