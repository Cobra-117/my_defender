/*
** EPITECH PROJECT, 2020
** sdfghjk
** File description:
** qsdfghjk
*/

#include "../include/my.h"

void print_ui_tower(Index_t *index)
{
    sfRenderWindow_drawSprite(index->window,
    index->ui_turrets.arti_ui_mkI_spr, NULL);
    sfRenderWindow_drawSprite(index->window,
    index->ui_turrets.heavy_ui_mkI_spr, NULL);
    sfRenderWindow_drawSprite(index->window,
    index->ui_turrets.casu_ui_mkI_spr, NULL);
    sfRenderWindow_drawSprite(index->window,
    index->ui_turrets.tesla_ui_mkI_spr, NULL);
    sfRenderWindow_drawSprite(index->window,
    index->ui_turrets.flame_ui_mkI_spr, NULL);
}

void print_ui_utilities(Index_t *index)
{
    sfRenderWindow_drawSprite(index->window,
    index->ui_utilities.mine_ui_spr, NULL);
    sfRenderWindow_drawSprite(index->window,
    index->ui_utilities.barb_ui_spr, NULL);
}