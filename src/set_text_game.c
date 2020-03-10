/*
** EPITECH PROJECT, 2020
** sdfghjk
** File description:
** sdfghjk
*/

#include "../include/my.h"

void prepare_text_tower(Index_t *index)
{
    index->ui_text.txt_tower = sfText_create();
    sfText_setString(index->ui_text.txt_tower, "Buildings");
    index->ui_text.font = sfFont_createFromFile("assets/UI/arial_font.TTF");
    sfText_setFont(index->ui_text.txt_tower, index->ui_text.font);
    sfText_setColor(index->ui_text.txt_tower, sfWhite);
    sfText_setCharacterSize(index->ui_text.txt_tower, 22);
    index->ui_text.pos_tower.x = 643;
    index->ui_text.pos_tower.y = 19;
    sfText_setPosition(index->ui_text.txt_tower, index->ui_text.pos_tower);
}

void prepare_text_utility(Index_t *index)
{
    index->ui_text.txt_utility = sfText_create();
    sfText_setString(index->ui_text.txt_utility, "Powers");
    sfText_setFont(index->ui_text.txt_utility, index->ui_text.font);
    sfText_setColor(index->ui_text.txt_utility, sfWhite);
    sfText_setCharacterSize(index->ui_text.txt_utility, 25);
    index->ui_text.pos_utility.x = 755;
    index->ui_text.pos_utility.y = 19;
    sfText_setPosition(index->ui_text.txt_utility, index->ui_text.pos_utility);
}

void prepare_text_skill(Index_t *index)
{
    index->ui_text.txt_skill = sfText_create();
    sfText_setString(index->ui_text.txt_skill, "Skills");
    sfText_setFont(index->ui_text.txt_skill, index->ui_text.font);
    sfText_setColor(index->ui_text.txt_skill, sfWhite);
    sfText_setCharacterSize(index->ui_text.txt_skill, 25);
    index->ui_text.pos_skill.x = 880;
    index->ui_text.pos_skill.y = 19;
    sfText_setPosition(index->ui_text.txt_skill, index->ui_text.pos_skill);
}

void prepare_text_money(Index_t *index)
{
    index->money = 1000;
    index->ui_text.txt_money = sfText_create();
    sfText_setString(index->ui_text.txt_money, my_nbr_to_str(index->money));
    sfText_setFont(index->ui_text.txt_money, index->ui_text.font);
    sfText_setColor(index->ui_text.txt_money, sfWhite);
    sfText_setCharacterSize(index->ui_text.txt_money, 50);
    index->ui_text.pos_money.x = 1080;
    index->ui_text.pos_money.y = 14;
    sfText_setPosition(index->ui_text.txt_money, index->ui_text.pos_money);
}