/*
** EPITECH PROJECT, 2020
** sdfghjkl
** File description:
** dfghjk
*/

#include "../include/my.h"

void init_text_score_win(Index_t *index)
{
    index->ui_text.txt_score_win = sfText_create();
    sfText_setString(index->ui_text.txt_score_win, "Your Score:");
    sfText_setFont(index->ui_text.txt_score_win, index->ui_text.font2);
    sfText_setColor(index->ui_text.txt_score_win, sfWhite);
    sfText_setCharacterSize(index->ui_text.txt_score_win, 60);
    index->ui_text.pos_score_win.x = 150;
    index->ui_text.pos_score_win.y = 500;
    sfText_setPosition(index->ui_text.txt_score_win, index->
    ui_text.pos_score_win);
}