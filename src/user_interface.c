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
    ("assets/UI/URSS_flag.png", NULL);
    index->ui.spri_socle = sfSprite_create();
    sfSprite_setTexture(index->ui.spri_socle, index->ui.tex_socle, sfTrue);
    index->ui.pos_socle.x = 635;
    index->ui.pos_socle.y = 0;
    sfSprite_setPosition(index->ui.spri_socle,
    index->ui.pos_socle);
    index->ui.scale_socle.x = 0.335;
    index->ui.scale_socle.y = 0.295;
    sfSprite_setScale(index->ui.spri_socle, index->ui.scale_socle);
}

void init_ui_buttons(Index_t *index)
{
    init_socle(index);
    init_money_life(index);
    init_ui_tower(index);
    init_utility(index);
    init_skill(index);
    init_button_casu(index);
}

void all_text(Index_t *index)
{
    prepare_text_tower(index);
    prepare_text_utility(index);
    prepare_text_skill(index);
    prepare_text_money(index);
    prepare_text_casu(index);
    prepare_text_heavy(index);
    prepare_text_arti(index);
    prepare_text_flamme(index);
    prepare_text_tesla(index);
}

void init_user_interface(Index_t *index)
{
    index->what_is_open = 1;
    index->ui_text.which_text = 0;
    init_ui_buttons(index);
    all_text(index);
    init_price_turrets(index);
    prepare_ui_tower(index);
    prepare_ui_utilities(index);
    prepare_ui_skills(index);
    prepare_light_effect(index);
    prepare_pause_menu(index);
    index->ui.coord_mouse_x = 0;
    index->ui.coord_mouse_y = 0;
}