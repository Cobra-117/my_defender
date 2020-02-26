/*
** EPITECH PROJECT, 2020
** move direction
** File description:
** move directions
*/

#include "../include/my.h"

float get_path_dir(Index_t *index, enemies_list_t *current, sfVector2f tile)
{
    if (current->rotation == 90 || current->rotation == 270) {
        if (index->map.map_array[(int)tile.y - 1][(int)tile.x] == 'o')
            return (0);
        if (index->map.map_array[(int)tile.y + 1][(int)tile.x] == 'o')
            return (180);
    }
    if (current->rotation == 0 || current->rotation == 180) {
        if (index->map.map_array[(int)tile.y][(int)tile.x + 1] == 'o')
            return (90);
        if (index->map.map_array[(int)tile.y][(int)tile.x - 1] == 'o')
            return (270);
    }
}

void move_forward(Index_t *index, enemies_list_t *current, sfVector2f tile)
{
    if (index->map.map_array[(int)tile.y][(int)tile.x + 1] == 'x') {
        if (current->coordinates.x >= tile.x * 64 + 32) {
            current->coordinates.x = tile.x * 64 + 32;
            current->rotation = get_path_dir(index, current, tile);
            return;
        }
    }
    if (will_collision_if_move_forward(index, current) == 0)
        current->coordinates.x += current->speed;
}

void move_backward(Index_t *index, enemies_list_t *current, sfVector2f tile)
{
    if (index->map.map_array[(int)tile.y][(int)tile.x + 1] == 'x') {
        if (current->coordinates.x <= tile.x * 64 + 32) {
            current->coordinates.x = tile.x * 64 + 32;
            current->rotation = get_path_dir(index, current, tile);
            return;
        }
    }
    if (will_collision_if_move_forward(index, current) == 0)
        current->coordinates.x += current->speed;
}

void move_up(Index_t *index, enemies_list_t *current, sfVector2f tile)
{
    if (index->map.map_array[(int)tile.y - 1][(int)tile.x] == 'x') {
        if (current->coordinates.y <= tile.y * 64 + 32) {
            current->coordinates.y = tile.y * 64 + 32;
            current->rotation = get_path_dir(index, current, tile);
            return;
        }
    }
    if (will_collision_if_move_up(index, current) == 0)
        current->coordinates.y -= current->speed;
}

void move_down(Index_t *index, enemies_list_t *current, sfVector2f tile)
{
    if (index->map.map_array[(int)tile.y + 1][(int)tile.x] == 'x') {
        if (current->coordinates.y >= tile.y * 64 + 32) {
            current->coordinates.y = tile.y * 64 + 32;
            current->rotation = get_path_dir(index, current, tile);
            return;
        }
    }
    if (will_collision_if_move_down(index, current) == 0)
        current->coordinates.y += current->speed;
}