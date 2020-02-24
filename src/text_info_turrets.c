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
    sfText_setString(index->ui_text.txt_casu, "sdfghj");
    sfText_setFont(index->ui_text.txt_casu, index->ui_text.font);
    sfText_setColor(index->ui_text.txt_casu, sfBlack);
    sfText_setCharacterSize(index->ui_text.txt_casu, 22);
    index->ui_text.pos_casu.x = 43;
    index->ui_text.pos_casu.y = 19;
    sfText_setPosition(index->ui_text.txt_casu, index->ui_text.pos_casu);
}