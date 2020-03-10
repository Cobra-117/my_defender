/*
** EPITECH PROJECT, 2020
** dfghj
** File description:
** dfghj
*/

#include "../include/my.h"

void display_score_board(Index_t *index, int *scoreboard)
{
    sfText_setString(index->ui_text.txt_score_board1,
    my_nbr_to_str(scoreboard[0]));
    sfRenderWindow_drawText(index->window,
    index->ui_text.txt_score_board1, NULL);
}