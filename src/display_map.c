/*
** EPITECH PROJECT, 2020
** display map
** File description:
** display the map
*/

#include "../include/my.h"

void display_one_line_path(Index_t *index, int y)
{
    sfVector2f pos;

    for (int x = 0; x < 30; x++) {
        pos.x = x * 64;
        pos.y = y * 64;
        if (index->map.map_array[y][x] == 'o') {
            sfSprite_setPosition(index->map.path_spr, pos);
            sfRenderWindow_drawSprite
            (index->window, index->map.path_spr, NULL);
        }
    }
}

void display_one_line_snow(Index_t *index, int y)
{
    sfVector2f pos;

    for (int x = 0; x < 30; x++) {
        pos.x = x * 64;
        pos.y = y * 64;
        if (index->map.map_array[y][x] == 'x') {
            sfSprite_setPosition(index->map.snow_spr, pos);
            sfRenderWindow_drawSprite
            (index->window, index->map.snow_spr, NULL);
        }
    }
}

void display_map(Index_t *index)
{
    for (int i = 0; i < 17; i++) {
        display_one_line_snow(index, i);
    }
    for (int i = 0; i < 17; i++) {
        display_one_line_path(index, i);
    }
}