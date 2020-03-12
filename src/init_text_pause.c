/*
** EPITECH PROJECT, 2020
** sdfghjkl
** File description:
** lkjhfs
*/

#include "../include/my.h"

void init_text_resume(Index_t *index)
{
    index->ui_text_pause.txt_resume = sfText_create();
    sfText_setString(index->ui_text_pause.txt_resume, "Resume");
    sfText_setFont(index->ui_text_pause.txt_resume, index->ui_text.font);
    sfText_setColor(index->ui_text_pause.txt_resume, sfWhite);
    sfText_setCharacterSize(index->ui_text_pause.txt_resume, 40);
    index->ui_text_pause.pos_resume.x = 887;
    index->ui_text_pause.pos_resume.y = 380;
    sfText_setPosition(index->ui_text_pause.txt_resume,
    index->ui_text_pause.pos_resume);
}

void init_text_go_menu(Index_t *index)
{
    index->ui_text_pause.txt_go_menu = sfText_create();
    sfText_setString(index->ui_text_pause.txt_go_menu, "Go menu");
    sfText_setFont(index->ui_text_pause.txt_go_menu, index->ui_text.font);
    sfText_setColor(index->ui_text_pause.txt_go_menu, sfWhite);
    sfText_setCharacterSize(index->ui_text_pause.txt_go_menu, 35);
    index->ui_text_pause.pos_go_menu.x = 887;
    index->ui_text_pause.pos_go_menu.y = 590;
    sfText_setPosition(index->ui_text_pause.txt_go_menu,
    index->ui_text_pause.pos_go_menu);
}

void init_text_exit(Index_t *index)
{
    index->ui_text_pause.txt_exit = sfText_create();
    sfText_setString(index->ui_text_pause.txt_exit, "Exit");
    sfText_setFont(index->ui_text_pause.txt_exit, index->ui_text.font);
    sfText_setColor(index->ui_text_pause.txt_exit, sfWhite);
    sfText_setCharacterSize(index->ui_text_pause.txt_exit, 45);
    index->ui_text_pause.pos_exit.x = 915;
    index->ui_text_pause.pos_exit.y = 790;
    sfText_setPosition(index->ui_text_pause.txt_exit,
    index->ui_text_pause.pos_exit);
}

void prepare_text_pause(Index_t *index)
{
    init_text_resume(index);
    init_text_go_menu(index);
    init_text_exit(index);
}