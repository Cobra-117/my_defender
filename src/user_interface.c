/*
** EPITECH PROJECT, 2020
** sdfghjk
** File description:
** sdfgh
*/

#include "../include/my.h"

void display_user_interface(Index_t *index)
{
    sfRenderWindow_drawSprite(index->window, index->ui.spri_socle, NULL);
}

void init_user_interface(Index_t *index)
{
    index->ui.tex_socle = sfTexture_createFromFile
    ("assets/UI/Grey_Square.png", NULL);
    index->ui.spri_socle = sfSprite_create();
    sfSprite_setTexture(index->ui.spri_socle, index->ui.tex_socle, sfTrue);
    index->ui.pos_socle.x = 635;
    index->ui.pos_socle.y = 0;
    sfSprite_setPosition(index->ui.spri_socle,
    index->ui.pos_socle);
    index->ui.scale_socle.x = 0.99;
    index->ui.scale_socle.y = 0.94;
    sfSprite_setScale(index->ui.spri_socle, index->ui.scale_socle);
}