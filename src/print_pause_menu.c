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
    index->ui_pause.pos_pause.x = 960;
    index->ui_pause.pos_pause.y = 540;
    sfSprite_setPosition(index->ui_pause.spri_pause,
    index->ui_pause.pos_pause);
    index->ui_pause.scale_pause.x = 0.335;
    index->ui_pause.scale_pause.y = 0.295;
    sfSprite_setScale(index->ui_pause.spri_pause, index->ui_pause.scale_pause);
}

void print_pause_menu(Index_t *index)
{
    sfRenderWindow_drawSprite(index->window, index->ui_pause.spri_pause, NULL);
}
