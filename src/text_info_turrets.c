/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** sdfghjk
*/

#include "../include/my.h"

void prepare_text_casu(Index_t *index)
{
    index->ui_text.txt_casu = sfText_create();
    sfText_setString(index->ui_text.txt_casu, "Popular turret\nPrice: 100\n"
    "Range: short\ndammage: 100\nSpecial effect: none\n"
    "Low efficiency but low cost: USSR = proletariat power!");
    index->ui_text.font2 = sfFont_createFromFile("assets/UI/Normal.TTF");
    sfText_setFont(index->ui_text.txt_casu, index->ui_text.font2);
    sfText_setColor(index->ui_text.txt_casu, sfWhite);
    sfText_setCharacterSize(index->ui_text.txt_casu, 18);
    index->ui_text.pos_casu.x = 650;
    index->ui_text.pos_casu.y = 185;
    sfText_setPosition(index->ui_text.txt_casu, index->ui_text.pos_casu);
}

void prepare_text_heavy(Index_t *index)
{
    index->ui_text.txt_heavy = sfText_create();
    sfText_setString(index->ui_text.txt_heavy, "\"Big Borris\"\nPrice: 200\n"
    "Range: short\ndammage: 300\nSpecial effect: none\n"
    "As big as my faith in the communism");
    sfText_setFont(index->ui_text.txt_heavy, index->ui_text.font2);
    sfText_setColor(index->ui_text.txt_heavy, sfWhite);
    sfText_setCharacterSize(index->ui_text.txt_heavy, 18);
    index->ui_text.pos_heavy.x = 650;
    index->ui_text.pos_heavy.y = 185;
    sfText_setPosition(index->ui_text.txt_heavy, index->ui_text.pos_heavy);
}

void prepare_text_arti(Index_t *index)
{
    index->ui_text.txt_arti = sfText_create();
    sfText_setString(index->ui_text.txt_arti, "Artillery\nPrice: 300\n"
    "Range: long\ndammage: 400\nSpecial effect: none\n"
    "Can shoot potato up to 300m in case of emergency!");
    sfText_setFont(index->ui_text.txt_arti, index->ui_text.font2);
    sfText_setColor(index->ui_text.txt_arti, sfWhite);
    sfText_setCharacterSize(index->ui_text.txt_arti, 18);
    index->ui_text.pos_arti.x = 650;
    index->ui_text.pos_arti.y = 185;
    sfText_setPosition(index->ui_text.txt_arti, index->ui_text.pos_arti);
}

void prepare_text_flamme(Index_t *index)
{
    index->ui_text.txt_flamme = sfText_create();
    sfText_setString(index->ui_text.txt_flamme, "Frozen\nPrice: 300\n"
    "Range: short\ndammage: 0\nSpecial effect: slow enemies\n"
    "Let it go, let it goooo");
    sfText_setFont(index->ui_text.txt_flamme, index->ui_text.font2);
    sfText_setColor(index->ui_text.txt_flamme, sfWhite);
    sfText_setCharacterSize(index->ui_text.txt_flamme, 18);
    index->ui_text.pos_flamme.x = 650;
    index->ui_text.pos_flamme.y = 185;
    sfText_setPosition(index->ui_text.txt_flamme, index->ui_text.pos_flamme);
}

void prepare_text_tesla(Index_t *index)
{
    index->ui_text.txt_tesla = sfText_create();
    sfText_setString(index->ui_text.txt_tesla, "Tazer turret\nPrice: 500\n"
    "Range: short\ndammage: 200\nSpecial effect: damage all enemies in range\n"
    "Isn't it ironic to stop Blitzkrieg with lighting?");
    sfText_setFont(index->ui_text.txt_tesla, index->ui_text.font2);
    sfText_setColor(index->ui_text.txt_tesla, sfWhite);
    sfText_setCharacterSize(index->ui_text.txt_tesla, 18);
    index->ui_text.pos_tesla.x = 650;
    index->ui_text.pos_tesla.y = 185;
    sfText_setPosition(index->ui_text.txt_tesla, index->ui_text.pos_tesla);
}