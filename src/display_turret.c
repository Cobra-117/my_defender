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
    sfIntRect Flamerect;

    rect.height = 256;
    rect.width = 256;
    rect.top = 1;
    if (index->turrets_array[y][x].anim_state == 0)
        rect.left = 1;
    else
        rect.left = 258;
    return (rect);
}

sfSprite *get_the_good_lvl2_sprite(Index_t *index, int x, int y)
{
    switch (index->turrets_array[x][y].type) {
    case 6:
        return (index->turrets.casu_mkII_spr);
    case 7:
        return (index->turrets.heavy_mkII_spr);
    case 8:
        return (index->turrets.arti_mkII_spr);
    case 9:
        return (index->turrets.flame_mkII_spr);
    case 10:
        return (index->turrets.tesla_mkII_spr);
    }
}

sfSprite *get_the_good_sprite(Index_t *index, int x, int y)
{
    if (index->turrets_array[x][y].type > 5)
        return (get_the_good_lvl2_sprite(index, x, y));
    switch (index->turrets_array[x][y].type) {
    case 1:
        return (index->turrets.casu_mkI_spr);
    case 2:
        return (index->turrets.heavy_mkI_spr);
    case 3:
        return (index->turrets.arti_mkI_spr);
    case 4:
        return (index->turrets.flame_mkI_spr);
    case 5:
        return (index->turrets.tesla_mkI_spr);
    }
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