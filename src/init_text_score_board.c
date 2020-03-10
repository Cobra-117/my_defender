/*
** EPITECH PROJECT, 2020
** dfghjkl
** File description:
** dfghjkl
*/

#include "../include/my.h"

void init_text_score_board1(Index_t *index)
{
    index->ui_text.txt_score_board1 = sfText_create();
    sfText_setString(index->ui_text.txt_score_board1, "SCORE");
    sfText_setFont(index->ui_text.txt_score_board1, index->ui_text.font2);
    sfText_setColor(index->ui_text.txt_score_board1, sfWhite);
    sfText_setCharacterSize(index->ui_text.txt_score_board1, 100);
    index->ui_text.pos_score_board1.x = 1175;
    index->ui_text.pos_score_board1.y = 255;
    sfText_setPosition(index->ui_text.txt_score_board1, index->
    ui_text.pos_score_board1);
}

void init_text_score_board(Index_t *index)
{
    init_text_score_board1(index);
}