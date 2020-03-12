/*
** EPITECH PROJECT, 2020
** qsdfghjklm
** File description:
** qsdfghjklm
*/

#include "../include/my.h"

void init_text_tchernobyl(Index_t *index)
{
    index->ui_text_utilities.txt_tchernobyl = sfText_create();
    sfText_setString(index->ui_text_utilities.txt_tchernobyl, "Destroy "
    "everything in the map\nPrice: 3000");
    sfText_setFont(index->ui_text_utilities.txt_tchernobyl,
    index->ui_text.font2);
    sfText_setColor(index->ui_text_utilities.txt_tchernobyl, sfWhite);
    sfText_setCharacterSize(index->ui_text_utilities.txt_tchernobyl, 22);
    index->ui_text_utilities.pos_tchernobyl.x = 650;
    index->ui_text_utilities.pos_tchernobyl.y = 255;
    sfText_setPosition(index->ui_text_utilities.txt_tchernobyl, index->
    ui_text_utilities.pos_tchernobyl);
}

void init_text_order(Index_t *index)
{
    index->ui_text_utilities.txt_order = sfText_create();
    sfText_setString(index->ui_text_utilities.txt_order, "Increase damage's"
    " turrets\nPrice: 1000");
    sfText_setFont(index->ui_text_utilities.txt_order, index->ui_text.font2);
    sfText_setColor(index->ui_text_utilities.txt_order, sfWhite);
    sfText_setCharacterSize(index->ui_text_utilities.txt_order, 22);
    index->ui_text_utilities.pos_order.x = 650;
    index->ui_text_utilities.pos_order.y = 255;
    sfText_setPosition(index->ui_text_utilities.txt_order, index->
    ui_text_utilities.pos_order);
}

void init_text_mine(Index_t *index)
{
    index->ui_text_utilities.txt_mine = sfText_create();
    sfText_setString(index->ui_text_utilities.txt_mine, "Produce a blizzard"
    " that freeze all ennemies\nPrice: 500");
    sfText_setFont(index->ui_text_utilities.txt_mine, index->ui_text.font2);
    sfText_setColor(index->ui_text_utilities.txt_mine, sfWhite);
    sfText_setCharacterSize(index->ui_text_utilities.txt_mine, 22);
    index->ui_text_utilities.pos_mine.x = 650;
    index->ui_text_utilities.pos_mine.y = 255;
    sfText_setPosition(index->ui_text_utilities.txt_mine, index->
    ui_text_utilities.pos_mine);
}

void init_text_the_upgrade(Index_t *index)
{
    index->ui_text_utilities.txt_upgrade = sfText_create();
    sfText_setString(index->ui_text_utilities.txt_upgrade, "Upgrade");
    sfText_setFont(index->ui_text_utilities.txt_upgrade, index->ui_text.font2);
    sfText_setColor(index->ui_text_utilities.txt_upgrade, sfWhite);
    sfText_setCharacterSize(index->ui_text_utilities.txt_upgrade, 22);
    index->ui_text_utilities.pos_upgrade.x = 1175;
    index->ui_text_utilities.pos_upgrade.y = 255;
    sfText_setPosition(index->ui_text_utilities.txt_upgrade, index->
    ui_text_utilities.pos_upgrade);
}

void init_text_utility(Index_t *index)
{
    init_text_mine(index);
    init_text_order(index);
    init_text_tchernobyl(index);
    init_text_the_upgrade(index);
}