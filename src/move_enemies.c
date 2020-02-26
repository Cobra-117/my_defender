/*
** EPITECH PROJECT, 2020
** move enemies
** File description:
** move enemies
*/

#include "../include/my.h"

sfVector2f get_tile_from_pos(sfVector2f pos)
{
    sfVector2f tile;
    tile.x = 0;
    tile.y = 0;

    for (int i = 0; pos.x > 64; pos.x = pos.x - 64) {
        tile.x += 1;
    }
    for (int i = 0; pos.y > 64; pos.y = pos.y - 64) {
        tile.y += 1;
    }
    return (tile);
}

void move_this_enemy(Index_t *index, enemies_list_t *current)
{
    sfVector2f current_case;

    if (current->type == 0) {
        return;
    }
    current_case = get_tile_from_pos(current->coordinates);
    if (current->coordinates.y >= 800 + 64 ||
    current->coordinates.x >= 1920 + 64) {
        rm_enemy(index, current);
        return;
    }
    if (current->rotation == 0)
        move_up(index, current, current_case);
    if (current->rotation == 90)
        move_forward(index, current, current_case);
    if (current->rotation == 180)
        move_down(index, current, current_case);
}

void move_enemies(Index_t *index)
{
    enemies_list_t *current;

    current = *(&index->enemies_list);
    while (current->next != NULL)
    {
        move_this_enemy(index, current);
        current = current->next;
    }
    move_this_enemy(index, current);
}