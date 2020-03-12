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
    sfText_setCharacterSize(index->ui_text.txt_score_board1, 80);
    index->ui_text.pos_score_board1.x = 1350;
    index->ui_text.pos_score_board1.y = 300;
    sfText_setPosition(index->ui_text.txt_score_board1, index->
    ui_text.pos_score_board1);
}

void init_text_score_board2(Index_t *index)
{
    index->ui_text.txt_score_board2 = sfText_create();
    sfText_setString(index->ui_text.txt_score_board2, "SCORE 2");
    sfText_setFont(index->ui_text.txt_score_board2, index->ui_text.font2);
    sfText_setColor(index->ui_text.txt_score_board2, sfWhite);
    sfText_setCharacterSize(index->ui_text.txt_score_board2, 80);
    index->ui_text.pos_score_board2.x = 1350;
    index->ui_text.pos_score_board2.y = 400;
    sfText_setPosition(index->ui_text.txt_score_board2, index->
    ui_text.pos_score_board2);
}

void init_text_score_board3(Index_t *index)
{
    index->ui_text.txt_score_board3 = sfText_create();
    sfText_setString(index->ui_text.txt_score_board3, "SCORE 3");
    sfText_setFont(index->ui_text.txt_score_board3, index->ui_text.font2);
    sfText_setColor(index->ui_text.txt_score_board3, sfWhite);
    sfText_setCharacterSize(index->ui_text.txt_score_board3, 80);
    index->ui_text.pos_score_board3.x = 1350;
    index->ui_text.pos_score_board3.y = 500;
    sfText_setPosition(index->ui_text.txt_score_board3, index->
    ui_text.pos_score_board3);
}

void init_text_score_board(Index_t *index)
{
    init_text_score_board1(index);
    init_text_score_board2(index);
    init_text_score_board3(index);
    init_text_score_board4(index);
    init_text_score_board5(index);
    init_text_win(index);
    init_text_back_win(index);
    init_text_now_score(index);
    init_text_score_win(index);
}