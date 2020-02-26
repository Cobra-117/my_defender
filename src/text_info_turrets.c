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
    "Range: 3\ndammage: 2\nLauch normal ammo, have no special effect.");
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
    sfText_setString(index->ui_text.txt_heavy, "Bertha turret\nPrice: 500\n"
    "Range: 4\ndammage: 5\nLauch heavy ammo, can breakthrough armor.");
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
    sfText_setString(index->ui_text.txt_arti, "Vladimir turret\nPrice: 350\n"
    "Range: 8\ndammage: 3\nLauch normal ammo but have a hight range.");
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
    sfText_setString(index->ui_text.txt_flamme, "Poussifeu turret\nPrice: 400\n"
    "Range: 4\ndammage: 4\nCan burn ennemies but less effective againts armor");
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
    "Range: 4\ndammage: 4\nElectrify ennemies, very effective againts armor.");
    sfText_setFont(index->ui_text.txt_tesla, index->ui_text.font2);
    sfText_setColor(index->ui_text.txt_tesla, sfWhite);
    sfText_setCharacterSize(index->ui_text.txt_tesla, 18);
    index->ui_text.pos_tesla.x = 650;
    index->ui_text.pos_tesla.y = 185;
    sfText_setPosition(index->ui_text.txt_tesla, index->ui_text.pos_tesla);
}