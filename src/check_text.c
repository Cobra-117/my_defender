/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** dfghjk
*/

#include "../include/my.h"

void check_text2(Index_t *index)
{
    if (index->ui_text.which_text == 7)
        sfRenderWindow_drawText(index->window, index->
        text_skills.txt_heavy2, NULL);
    if (index->ui_text.which_text == 8)
        sfRenderWindow_drawText(index->window, index->
        text_skills.txt_arti2, NULL);
    if (index->ui_text.which_text == 9)
        sfRenderWindow_drawText(index->window, index->
        text_skills.txt_flame2, NULL);
    if (index->ui_text.which_text == 10)
        sfRenderWindow_drawText(index->window, index->
        text_skills.txt_tesla2, NULL);
}

void check_text(Index_t *index)
{
    if (index->ui_text.which_text == 1)
        sfRenderWindow_drawText(index->window, index->
        ui_text.txt_casu, NULL);
    if (index->ui_text.which_text == 2)
        sfRenderWindow_drawText(index->window, index->
        ui_text.txt_heavy, NULL);
    if (index->ui_text.which_text == 3)
        sfRenderWindow_drawText(index->window, index->
        ui_text.txt_arti, NULL);
    if (index->ui_text.which_text == 4)
        sfRenderWindow_drawText(index->window, index->
        ui_text.txt_flamme, NULL);
    if (index->ui_text.which_text == 5)
        sfRenderWindow_drawText(index->window, index->
        ui_text.txt_tesla, NULL);
    if (index->ui_text.which_text == 6)
        sfRenderWindow_drawText(index->window, index->
        text_skills.txt_casu2, NULL);
    check_text2(index);
}