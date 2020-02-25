/*
** EPITECH PROJECT, 2020
** dfghj
** File description:
** dfghjk
*/

#include "../include/my.h"

void prepare_pause_menu(Index_t *index)
{
    index->ui_pause.tex_pause = sfTexture_createFromFile
    ("assets/UI/URSS_flag.png", NULL);
    index->ui_pause.spri_pause = sfSprite_create();
    sfSprite_setTexture(index->ui_pause.spri_pause,
    index->ui_pause.tex_pause, sfTrue);
    index->ui_pause.pos_pause.x = 635;
    index->ui_pause.pos_pause.y = 452;
    sfSprite_setPosition(index->ui_pause.spri_pause,
    index->ui_pause.pos_pause);
    index->ui_pause.scale_pause.x = 0.335;
    index->ui_pause.scale_pause.y = 0.295;
    sfSprite_setScale(index->ui_pause.spri_pause, index->ui_pause.scale_pause);
    prepare_pause_button(index);
}

void print_pause_menu(Index_t *index)
{
    sfRenderWindow_drawRectangleShape(index->window,
    index->ui_pause_button.button_resume, NULL);
    sfRenderWindow_drawRectangleShape(index->window,
    index->ui_pause_button.button_go_menu, NULL);
    sfRenderWindow_drawRectangleShape(index->window,
    index->ui_pause_button.button_exit, NULL);
    sfRenderWindow_drawText(index->window, index->ui_text_pause.
    txt_resume, NULL);
    sfRenderWindow_drawText(index->window, index->ui_text_pause.
    txt_go_menu, NULL);
    sfRenderWindow_drawText(index->window, index->ui_text_pause.
    txt_exit, NULL);
}
