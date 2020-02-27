/*
** EPITECH PROJECT, 2020
** display turrets
** File description:
** display the turrets
*/

#include "../include/my.h"

sfSprite *get_the_good_sprite(Index_t *index, int x, int y)
{
    sfSprite *sprite;
    if (index->turrets_array[x][y].type == 1)
        sprite  = index->turrets.casu_mkI_spr;
    if (index->turrets_array[x][y].type == 2)
        sprite  = index->turrets.heavy_mkI_spr;
    return (sprite);
}

void display_this_line_of_turrets(Index_t *index, int i)
{
    sfVector2f pos;
    sfSprite *sprite;

    for (int j = 0; j < 33; j++) {
        if (index->turrets_array[i][j].type != 0) {
            pos.x = j * 64 + 32;
            pos.y = i * 64 + 32;
            sprite = get_the_good_sprite(index, i, j);
            sfSprite_setPosition(sprite, pos);
            sfSprite_setRotation(
            sprite, index->turrets_array[i][j].rotation);
            sfRenderWindow_drawSprite(
            index->window, sprite, NULL);
        }
    }
}

void display_turrets(Index_t *index)
{
    for (int i = 0; i < 19; i++) {
        display_this_line_of_turrets(index, i);
    }
}