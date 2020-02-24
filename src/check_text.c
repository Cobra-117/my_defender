/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** dfghjk
*/

#include "../include/my.h"

void check_text(Index_t *index)
{
    if (index->ui_text.which_text == 1)
        sfRenderWindow_drawText(index->window, index->
        ui_text.txt_casu, NULL);
    if (index->ui_text.which_text == 2)
        sfRenderWindow_drawText(index->window, index->
        ui_text.txt_heavy, NULL);
}