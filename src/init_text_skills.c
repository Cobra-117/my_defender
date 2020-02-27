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
    sfText_setString(index->text_skills.txt_tesla2, "Tesla lvl2");
    sfText_setFont(index->text_skills.txt_tesla2, index->ui_text.font);
    sfText_setColor(index->text_skills.txt_tesla2, sfWhite);
    sfText_setCharacterSize(index->text_skills.txt_tesla2, 40);
    index->text_skills.pos_tesla2.x = 887;
    index->text_skills.pos_tesla2.y = 380;
    sfText_setPosition(index->text_skills.txt_tesla2, index->
    text_skills.pos_tesla2);
}

void init_text_flame2(Index_t *index)
{
    index->text_skills.txt_flame2 = sfText_create();
    sfText_setString(index->text_skills.txt_flame2, "Flame lvl2");
    sfText_setFont(index->text_skills.txt_flame2, index->ui_text.font);
    sfText_setColor(index->text_skills.txt_flame2, sfWhite);
    sfText_setCharacterSize(index->text_skills.txt_flame2, 40);
    index->text_skills.pos_flame2.x = 887;
    index->text_skills.pos_flame2.y = 380;
    sfText_setPosition(index->text_skills.txt_flame2, index->
    text_skills.pos_flame2);
    init_text_tesla2(index);
}

void init_text_arti2(Index_t *index)
{
    index->text_skills.txt_arti2 = sfText_create();
    sfText_setString(index->text_skills.txt_arti2, "Arti lvl2");
    sfText_setFont(index->text_skills.txt_arti2, index->ui_text.font);
    sfText_setColor(index->text_skills.txt_arti2, sfWhite);
    sfText_setCharacterSize(index->text_skills.txt_arti2, 40);
    index->text_skills.pos_arti2.x = 887;
    index->text_skills.pos_arti2.y = 380;
    sfText_setPosition(index->text_skills.txt_arti2, index->
    text_skills.pos_arti2);
    init_text_flame2(index);
}

void init_text_heavy2(Index_t *index)
{
    index->text_skills.txt_heavy2 = sfText_create();
    sfText_setString(index->text_skills.txt_heavy2, "Heavy lvl2");
    sfText_setFont(index->text_skills.txt_heavy2, index->ui_text.font);
    sfText_setColor(index->text_skills.txt_heavy2, sfWhite);
    sfText_setCharacterSize(index->text_skills.txt_heavy2, 40);
    index->text_skills.pos_heavy2.x = 887;
    index->text_skills.pos_heavy2.y = 380;
    sfText_setPosition(index->text_skills.txt_heavy2, index->
    text_skills.pos_heavy2);
    init_text_arti2(index);
}

void init_text_casu2(Index_t *index)
{
    index->text_skills.txt_casu2 = sfText_create();
    sfText_setString(index->text_skills.txt_casu2, "Casu lvl2");
    sfText_setFont(index->text_skills.txt_casu2, index->ui_text.font);
    sfText_setColor(index->text_skills.txt_casu2, sfWhite);
    sfText_setCharacterSize(index->text_skills.txt_casu2, 40);
    index->text_skills.pos_casu2.x = 887;
    index->text_skills.pos_casu2.y = 380;
    sfText_setPosition(index->text_skills.txt_casu2, index->
    text_skills.pos_casu2);
    init_text_heavy2(index);
}