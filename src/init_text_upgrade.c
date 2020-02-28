/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** dfghjk
*/

#include "../include/my.h"

void init_text_price_upgrade(Index_t *index)
{
    int price = 0;
    index->text_skills.txt_price_upgrade = sfText_create();
    sfText_setString(index->text_skills.txt_price_upgrade,
    my_nbr_to_str(price));
    sfText_setFont(index->text_skills.txt_price_upgrade, index->ui_text.font2);
    sfText_setColor(index->text_skills.txt_price_upgrade, sfWhite);
    sfText_setCharacterSize(index->text_skills.txt_price_upgrade, 22);
    index->text_skills.pos_price_upgrade.x = 1200;
    index->text_skills.pos_price_upgrade.y = 270;
    sfText_setPosition(index->text_skills.txt_price_upgrade, index->
    text_skills.pos_price_upgrade);
}

void init_text_upgrade(Index_t *index)
{
    index->text_skills.txt_upgrade = sfText_create();
    sfText_setString(index->text_skills.txt_upgrade, "Upgrade for");
    sfText_setFont(index->text_skills.txt_upgrade, index->ui_text.font2);
    sfText_setColor(index->text_skills.txt_upgrade, sfWhite);
    sfText_setCharacterSize(index->text_skills.txt_upgrade, 22);
    index->text_skills.pos_upgrade.x = 1150;
    index->text_skills.pos_upgrade.y = 240;
    sfText_setPosition(index->text_skills.txt_upgrade, index->
    text_skills.pos_upgrade);
    init_text_price_upgrade(index);
}