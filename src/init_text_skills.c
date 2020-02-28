/*
** EPITECH PROJECT, 2020
** sdfghjk
** File description:
** sdfghjk
*/

#include "../include/my.h"

void init_text_tesla2(Index_t *index)
{
    index->text_skills.txt_tesla2 = sfText_create();
    sfText_setString(index->text_skills.txt_tesla2, "Tazer lvl2");
    sfText_setFont(index->text_skills.txt_tesla2, index->ui_text.font2);
    sfText_setColor(index->text_skills.txt_tesla2, sfWhite);
    sfText_setCharacterSize(index->text_skills.txt_tesla2, 22);
    index->text_skills.pos_tesla2.x = 640;
    index->text_skills.pos_tesla2.y = 190;
    sfText_setPosition(index->text_skills.txt_tesla2, index->
    text_skills.pos_tesla2);
    init_text_upgrade(index);
}

void init_text_flame2(Index_t *index)
{
    index->text_skills.txt_flame2 = sfText_create();
    sfText_setString(index->text_skills.txt_flame2, "Pussyfeu lvl2");
    sfText_setFont(index->text_skills.txt_flame2, index->ui_text.font2);
    sfText_setColor(index->text_skills.txt_flame2, sfWhite);
    sfText_setCharacterSize(index->text_skills.txt_flame2, 22);
    index->text_skills.pos_flame2.x = 640;
    index->text_skills.pos_flame2.y = 190;
    sfText_setPosition(index->text_skills.txt_flame2, index->
    text_skills.pos_flame2);
    init_text_tesla2(index);
}

void init_text_arti2(Index_t *index)
{
    index->text_skills.txt_arti2 = sfText_create();
    sfText_setString(index->text_skills.txt_arti2, "Artillery lvl2");
    sfText_setFont(index->text_skills.txt_arti2, index->ui_text.font2);
    sfText_setColor(index->text_skills.txt_arti2, sfWhite);
    sfText_setCharacterSize(index->text_skills.txt_arti2, 22);
    index->text_skills.pos_arti2.x = 640;
    index->text_skills.pos_arti2.y = 190;
    sfText_setPosition(index->text_skills.txt_arti2, index->
    text_skills.pos_arti2);
    init_text_flame2(index);
}

void init_text_heavy2(Index_t *index)
{
    index->text_skills.txt_heavy2 = sfText_create();
    sfText_setString(index->text_skills.txt_heavy2, "Big Borris lvl2");
    sfText_setFont(index->text_skills.txt_heavy2, index->ui_text.font2);
    sfText_setColor(index->text_skills.txt_heavy2, sfWhite);
    sfText_setCharacterSize(index->text_skills.txt_heavy2, 22);
    index->text_skills.pos_heavy2.x = 640;
    index->text_skills.pos_heavy2.y = 190;
    sfText_setPosition(index->text_skills.txt_heavy2, index->
    text_skills.pos_heavy2);
    init_text_arti2(index);
}

void init_text_casu2(Index_t *index)
{
    index->text_skills.txt_casu2 = sfText_create();
    sfText_setString(index->text_skills.txt_casu2, "Popular turret lvl2");
    sfText_setFont(index->text_skills.txt_casu2, index->ui_text.font2);
    sfText_setColor(index->text_skills.txt_casu2, sfWhite);
    sfText_setCharacterSize(index->text_skills.txt_casu2, 22);
    index->text_skills.pos_casu2.x = 640;
    index->text_skills.pos_casu2.y = 190;
    sfText_setPosition(index->text_skills.txt_casu2, index->
    text_skills.pos_casu2);
    init_text_heavy2(index);
}