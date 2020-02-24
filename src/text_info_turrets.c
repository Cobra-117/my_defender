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
    sfText_setString(index->ui_text.txt_casu, "Robert turret\nPrice: 200\n"
    "Range: 3\ndammage: = 2\nLauch normal ammo, have no special effect");
    index->ui_text.font2 = sfFont_createFromFile("assets/UI/Normal.TTF");
    sfText_setFont(index->ui_text.txt_casu, index->ui_text.font2);
    sfText_setColor(index->ui_text.txt_casu, sfBlack);
    sfText_setCharacterSize(index->ui_text.txt_casu, 20);
    index->ui_text.pos_casu.x = 650;
    index->ui_text.pos_casu.y = 200;
    sfText_setPosition(index->ui_text.txt_casu, index->ui_text.pos_casu);
}

void prepare_text_heavy(Index_t *index)
{
    index->ui_text.txt_heavy = sfText_create();
    sfText_setString(index->ui_text.txt_heavy, "Bertha turret\nPrice: 500\n"
    "Range: 4\ndammage: = 5\nLauch heavy ammo, can breakthrough armor");
    sfText_setFont(index->ui_text.txt_heavy, index->ui_text.font2);
    sfText_setColor(index->ui_text.txt_heavy, sfBlack);
    sfText_setCharacterSize(index->ui_text.txt_heavy, 20);
    index->ui_text.pos_heavy.x = 650;
    index->ui_text.pos_heavy.y = 200;
    sfText_setPosition(index->ui_text.txt_heavy, index->ui_text.pos_heavy);
}