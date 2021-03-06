/*
** EPITECH PROJECT, 2020
** sdfghjk
** File description:
** qsdfghjk
*/

#include "../include/my.h"

void print_ui_tower(Index_t *index)
{
    is_light_effect(index);
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
    index->ui_utilities.order_ui_spr, NULL);
    sfRenderWindow_drawSprite(index->window,
    index->ui_utilities.tchernobyl_ui_spr, NULL);
    sfRenderWindow_drawRectangleShape(index->window,
    index->ui_button_utilities.button_upgrade2, NULL);
    sfRenderWindow_drawText(index->window,
    index->ui_text_utilities.txt_upgrade, NULL);
}

void print_ui_skills(Index_t *index)
{
    is_light_effect(index);
    sfRenderWindow_drawSprite(index->window,
    index->ui_skills.casu_sk_spr, NULL);
    sfRenderWindow_drawSprite(index->window,
    index->ui_skills.heavy_sk_spr, NULL);
    sfRenderWindow_drawSprite(index->window,
    index->ui_skills.arti_sk_spr, NULL);
    sfRenderWindow_drawSprite(index->window,
    index->ui_skills.flame_sk_spr, NULL);
    sfRenderWindow_drawSprite(index->window,
    index->ui_skills.tesla_sk_spr, NULL);
    sfRenderWindow_drawRectangleShape(index->window,
    index->ui_button_skills.button_upgrade, NULL);
    sfRenderWindow_drawText(index->window,
    index->text_skills.txt_upgrade, NULL);
    sfRenderWindow_drawText(index->window,
    index->text_skills.txt_price_upgrade, NULL);
}