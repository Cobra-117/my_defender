/*
** EPITECH PROJECT, 2020
** sdfghjk
** File description:
** sdfghjkl
*/

#include "../include/my.h"

void lose_loop(Index_t *index, int *scoreboard)
{
    sfRenderWindow_drawSprite(index->window,
    index->ui.spri_socle, NULL);
    //sfRenderWindow_drawText(index->window,
    //index->ui_text.txt_win, NULL);
    sfRenderWindow_drawText(index->window,
    index->ui_text.txt_score_board1, NULL);
    sfRenderWindow_drawText(index->window,
    index->ui_text.txt_score_board2, NULL);
    sfRenderWindow_drawText(index->window,
    index->ui_text.txt_score_board3, NULL);
    sfRenderWindow_drawText(index->window,
    index->ui_text.txt_score_board4, NULL);
    sfRenderWindow_drawText(index->window,
    index->ui_text.txt_score_board5, NULL);
    sfRenderWindow_drawRectangleShape(index->window,
    index->ui_pause_button.button_win, NULL);
    sfRenderWindow_drawText(index->window,
    index->ui_text.txt_back_win, NULL);
    sfRenderWindow_drawText(index->window,
    index->ui_text.txt_now_score, NULL);
}

void display_loser(Index_t *index, int *scoreboard)
{
    index->what_is_open = 200;
    index->ui.pos_socle.x = 0;
    index->ui.pos_socle.y = 0;
    sfSprite_setPosition(index->ui.spri_socle,
    index->ui.pos_socle);
    index->ui.scale_socle.x = 1;
    index->ui.scale_socle.y = 1;
    sfSprite_setScale(index->ui.spri_socle, index->ui.scale_socle);
    make_the_scoreboard(index, scoreboard);
    sfText_setString(index->ui_text.txt_now_score, "-42, CHEH!");
    while (index->what_is_open == 200) {
        lose_loop(index, scoreboard);
        sfRenderWindow_drawText(index->window,
        index->ui_text.txt_score_win, NULL);
        push_win(index);
        sfRenderWindow_display(index->window);
    }
}