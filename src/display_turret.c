/*
** EPITECH PROJECT, 2020
** display turrets
** File description:
** display the turrets
*/

#include "../include/my.h"

sfIntRect set_turret_rect(Index_t *index, int x, int y)
{
    sfIntRect rect;
    rect.height = 256;
    rect.width = 256;

    if (index->turrets_array[y][x].type != 4 ||
    index->turrets_array[y][x].type != 9) {
        rect.top = 1;
        if (index->turrets_array[y][x].anim_state == 0)
            rect.left = 1;
        else
            rect.left = 258;
    }
    return (rect);
}

sfSprite *get_the_good_lvl2_sprite(Index_t *index, int x, int y)
{
    sfSprite *sprite;

    if (index->turrets_array[x][y].type == 6)
        sprite  = index->turrets.casu_mkI_spr;
    if (index->turrets_array[x][y].type == 7)
        sprite  = index->turrets.heavy_mkI_spr;
    if (index->turrets_array[x][y].type == 8)
        sprite  = index->turrets.arti_mkI_spr;
    if (index->turrets_array[x][y].type == 9)
        sprite  = index->turrets.flame_mkI_spr;
    if (index->turrets_array[x][y].type == 10)
        sprite  = index->turrets.tesla_mkI_spr;
    return (sprite);
}

sfSprite *get_the_good_sprite(Index_t *index, int x, int y)
{
    sfSprite *sprite;

    if (index->turrets_array[x][y].type > 5)
        return (get_the_good_lvl2_sprite(index, x, y));
    if (index->turrets_array[x][y].type == 1)
        sprite  = index->turrets.casu_mkI_spr;
    if (index->turrets_array[x][y].type == 2)
        sprite  = index->turrets.heavy_mkI_spr;
    if (index->turrets_array[x][y].type == 3)
        sprite  = index->turrets.arti_mkI_spr;
    if (index->turrets_array[x][y].type == 4)
        sprite  = index->turrets.flame_mkI_spr;
    if (index->turrets_array[x][y].type == 5)
        sprite  = index->turrets.tesla_mkI_spr;
    return (sprite);
}

void display_this_line_of_turrets(Index_t *index, int i)
{
    sfVector2f pos;
    sfSprite *sprite;
    float rot;

    for (int j = 0; j < 33; j++) {
        if (index->turrets_array[i][j].type != 0) {
            pos.x = j * 64 + 32;
            pos.y = i * 64 + 32;
            sprite = get_the_good_sprite(index, i, j);
            pos = set_turret_offset(index, j, i, pos);
            sfSprite_setPosition(sprite, pos);
            sfSprite_setRotation(
            sprite, index->turrets_array[i][j].rotation);
            if (index->turrets_array[i][j].type != 4 ||
            index->turrets_array[i][j].type != 9)
                sfSprite_setTextureRect(sprite, set_turret_rect(index, j, i));
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