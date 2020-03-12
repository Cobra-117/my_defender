/*
** EPITECH PROJECT, 2020
** dfghjkl
** File description:
** sdfghjk
*/

#include "../include/my.h"

void init_text_score_board4(Index_t *index)
{
    index->ui_text.txt_score_board4 = sfText_create();
    sfText_setString(index->ui_text.txt_score_board4, "SCORE 4");
    sfText_setFont(index->ui_text.txt_score_board4, index->ui_text.font2);
    sfText_setColor(index->ui_text.txt_score_board4, sfWhite);
    sfText_setCharacterSize(index->ui_text.txt_score_board4, 80);
    index->ui_text.pos_score_board4.x = 1350;
    index->ui_text.pos_score_board4.y = 600;
    sfText_setPosition(index->ui_text.txt_score_board4, index->
    ui_text.pos_score_board4);
}

void init_text_score_board5(Index_t *index)
{
    index->ui_text.txt_score_board5 = sfText_create();
    sfText_setString(index->ui_text.txt_score_board5, "SCORE 5");
    sfText_setFont(index->ui_text.txt_score_board5, index->ui_text.font2);
    sfText_setColor(index->ui_text.txt_score_board5, sfWhite);
    sfText_setCharacterSize(index->ui_text.txt_score_board5, 80);
    index->ui_text.pos_score_board5.x = 1350;
    index->ui_text.pos_score_board5.y = 700;
    sfText_setPosition(index->ui_text.txt_score_board5, index->
    ui_text.pos_score_board5);
}

void init_text_win(Index_t *index)
{
    index->ui_text.txt_win = sfText_create();
    sfText_setString(index->ui_text.txt_win, "Congrats, you"
    " saved the Motherland!");
    sfText_setFont(index->ui_text.txt_win, index->ui_text.font2);
    sfText_setColor(index->ui_text.txt_win, sfWhite);
    sfText_setCharacterSize(index->ui_text.txt_win, 80);
    index->ui_text.pos_win.x = 350;
    index->ui_text.pos_win.y = 100;
    sfText_setPosition(index->ui_text.txt_win, index->
    ui_text.pos_win);
}

void init_text_back_win(Index_t *index)
{
    index->ui_text.txt_back_win = sfText_create();
    sfText_setString(index->ui_text.txt_back_win, "Return Menu");
    sfText_setFont(index->ui_text.txt_back_win, index->ui_text.font2);
    sfText_setColor(index->ui_text.txt_back_win, sfWhite);
    sfText_setCharacterSize(index->ui_text.txt_back_win, 40);
    index->ui_text.pos_back_win.x = 850;
    index->ui_text.pos_back_win.y = 870;
    sfText_setPosition(index->ui_text.txt_back_win, index->
    ui_text.pos_back_win);
}

void init_text_now_score(Index_t *index)
{
    index->ui_text.txt_now_score = sfText_create();
    sfText_setString(index->ui_text.txt_now_score, "Return Menu");
    sfText_setFont(index->ui_text.txt_now_score, index->ui_text.font2);
    sfText_setColor(index->ui_text.txt_now_score, sfWhite);
    sfText_setCharacterSize(index->ui_text.txt_now_score, 60);
    index->ui_text.pos_now_score.x = 180;
    index->ui_text.pos_now_score.y = 600;
    sfText_setPosition(index->ui_text.txt_now_score, index->
    ui_text.pos_now_score);
}