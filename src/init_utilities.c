/*
** EPITECH PROJECT, 2020
** sdfghjk
** File description:
** sdfghjk
*/

#include "../include/my.h"

void init_tex_ui_utilities(Index_t *index)
{
    index->ui_utilities.mine_ui_tex =
    sfTexture_createFromFile("assets/UI/Mine.png", NULL);
    index->ui_utilities.order_ui_tex =
    sfTexture_createFromFile("assets/UI/Order_227.png", NULL);
    index->ui_utilities.tchernobyl_ui_tex =
    sfTexture_createFromFile("assets/UI/Tchernobyl.png", NULL);
}

void init_spri__ui_utilities(Index_t *index)
{
    index->ui_utilities.mine_ui_spr = sfSprite_create();
    index->ui_utilities.order_ui_spr = sfSprite_create();
    index->ui_utilities.tchernobyl_ui_spr = sfSprite_create();
}

void spri_to_tex_utilities(Index_t *index)
{
    sfSprite_setTexture(index->ui_utilities.mine_ui_spr,
    index->ui_utilities.mine_ui_tex, sfTrue);
    sfSprite_setTexture(index->ui_utilities.order_ui_spr,
    index->ui_utilities.order_ui_tex, sfTrue);
    sfSprite_setTexture(index->ui_utilities.tchernobyl_ui_spr,
    index->ui_utilities.tchernobyl_ui_tex, sfTrue);
}

void give_position_utilities(Index_t *index)
{
    index->ui_utilities.pos_ui_mine.x = 650;
    index->ui_utilities.pos_ui_mine.y = 100;
    sfSprite_setPosition(index->ui_utilities.mine_ui_spr,
    index->ui_utilities.pos_ui_mine);
    index->ui_utilities.pos_ui_order.x = 780;
    index->ui_utilities.pos_ui_order.y = 100;
    sfSprite_setPosition(index->ui_utilities.order_ui_spr,
    index->ui_utilities.pos_ui_order);
    index->ui_utilities.pos_ui_tchernobyl.x = 910;
    index->ui_utilities.pos_ui_tchernobyl.y = 100;
    sfSprite_setPosition(index->ui_utilities.tchernobyl_ui_spr,
    index->ui_utilities.pos_ui_tchernobyl);
}

void prepare_ui_utilities(Index_t *index)
{
    init_tex_ui_utilities(index);
    init_spri__ui_utilities(index);
    spri_to_tex_utilities(index);
    give_position_utilities(index);
    give_utilities_scale(index);
}