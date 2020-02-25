/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** sdfghjk
*/

#include "../include/my.h"

void init_resume_button(Index_t *index)
{
    index->ui.coord_mouse_x = -1;
    index->ui.coord_mouse_y = -1;
    index->ui_pause_button.pos_resume.x = 640;
    index->ui_pause_button.pos_resume.y = 360;
    index->ui_pause_button.size_resume.x = 634;
    index->ui_pause_button.size_resume.y = 90;
    index->ui_pause_button.button_resume = sfRectangleShape_create();
    sfRectangleShape_setPosition(index->ui_pause_button.button_resume,
    index->ui_pause_button.pos_resume);
    sfRectangleShape_setSize(index->ui_pause_button.button_resume,
    index->ui_pause_button.size_resume);
    sfTexture *texture = sfTexture_createFromFile
    ("assets/UI/Red_Square.png", NULL);
    sfRectangleShape_setTexture(index->ui_pause_button.
    button_resume, texture, 0);
}

void init_go_menu_button(Index_t *index)
{
    index->ui.coord_mouse_x = -1;
    index->ui.coord_mouse_y = -1;
    index->ui_pause_button.pos_go_menu.x = 640;
    index->ui_pause_button.pos_go_menu.y = 565;
    index->ui_pause_button.size_go_menu.x = 634;
    index->ui_pause_button.size_go_menu.y = 90;
    index->ui_pause_button.button_go_menu = sfRectangleShape_create();
    sfRectangleShape_setPosition(index->ui_pause_button.button_go_menu,
    index->ui_pause_button.pos_go_menu);
    sfRectangleShape_setSize(index->ui_pause_button.button_go_menu,
    index->ui_pause_button.size_go_menu);
    sfTexture *texture = sfTexture_createFromFile
    ("assets/UI/Red_Square.png", NULL);
    sfRectangleShape_setTexture(index->ui_pause_button.
    button_go_menu, texture, 0);
}

void init_exit_button(Index_t *index)
{
    index->ui.coord_mouse_x = -1;
    index->ui.coord_mouse_y = -1;
    index->ui_pause_button.pos_exit.x = 640;
    index->ui_pause_button.pos_exit.y = 770;
    index->ui_pause_button.size_exit.x = 634;
    index->ui_pause_button.size_exit.y = 90;
    index->ui_pause_button.button_exit = sfRectangleShape_create();
    sfRectangleShape_setPosition(index->ui_pause_button.button_exit,
    index->ui_pause_button.pos_exit);
    sfRectangleShape_setSize(index->ui_pause_button.button_exit,
    index->ui_pause_button.size_exit);
    sfTexture *texture = sfTexture_createFromFile
    ("assets/UI/Red_Square.png", NULL);
    sfRectangleShape_setTexture(index->ui_pause_button.
    button_exit, texture, 0);
}

void prepare_pause_button(Index_t *index)
{
    init_resume_button(index);
    init_go_menu_button(index);
    init_exit_button(index);
    prepare_text_pause(index);
}