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
    sfRenderWindow_drawRectangleShape(index->window,
    index->ui.button_ui_tower, NULL);
    sfRenderWindow_drawRectangleShape(index->window,
    index->ui.button_utility, NULL);
    sfRenderWindow_drawRectangleShape(index->window,
    index->ui.button_skill, NULL);
    sfRenderWindow_drawText(index->window, index->ui_text.txt_tower, NULL);
    sfRenderWindow_drawText(index->window, index->ui_text.txt_utility, NULL);
    sfRenderWindow_drawText(index->window, index->ui_text.txt_skill, NULL);
    sfRenderWindow_drawText(index->window, index->ui_text.txt_money, NULL);
    sfRenderWindow_drawSprite(index->window, index->ui_info.money_spr, NULL);
    sfRenderWindow_drawSprite(index->window, index->ui_info.life_spr, NULL);
}

void init_socle(Index_t *index)
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
    index->ui.scale_socle.y = 0.66;
    sfSprite_setScale(index->ui.spri_socle, index->ui.scale_socle);
}

void init_user_interface(Index_t *index)
{
    index->what_is_open = 1;
    init_socle(index);
    init_money_life(index);
    init_ui_tower(index);
    init_utility(index);
    init_skill(index);
    prepare_text_tower(index);
    prepare_text_utility(index);
    prepare_text_skill(index);
    prepare_text_money(index);
    prepare_ui_tower(index);
}