/*
** EPITECH PROJECT, 2020
** struct include
** File description:
** structure for the ui
*/

#include "includes.h"

#ifndef STRUCT_UI_H_
#define STRUCT_UI_H_

typedef struct ui_button_skills_t
{
    sfRectangleShape *button_casu2;
    sfVector2f pos_casu2;
    sfVector2f size_casu2;
    sfVector2f click_pos_casu2;
    sfVector2f click_size_casu2;
    sfRectangleShape *button_heavy2;
    sfVector2f pos_heavy2;
    sfVector2f size_heavy2;
    sfVector2f click_pos_heavy2;
    sfVector2f click_size_heavy2;
    sfRectangleShape *button_arti2;
    sfVector2f pos_arti2;
    sfVector2f size_arti2;
    sfVector2f click_pos_arti2;
    sfVector2f click_size_arti2;
    sfRectangleShape *button_flame2;
    sfVector2f pos_flame2;
    sfVector2f size_flame2;
    sfVector2f click_pos_flame2;
    sfVector2f click_size_flame2;
    sfRectangleShape *button_tesla2;
    sfVector2f pos_tesla2;
    sfVector2f size_tesla2;
    sfVector2f click_pos_tesla2;
    sfVector2f click_size_tesla2;
    sfRectangleShape *button_upgrade;
    sfVector2f pos_upgrade;
    sfVector2f size_upgrade;
    sfVector2f click_pos_upgrade;
    sfVector2f click_size_upgrade;
}ui_button_skills_t;

typedef struct text_skills_t
{
    sfText *txt_casu2;
    sfVector2f pos_casu2;
    sfText *txt_heavy2;
    sfVector2f pos_heavy2;
    sfText *txt_arti2;
    sfVector2f pos_arti2;
    sfText *txt_flame2;
    sfVector2f pos_flame2;
    sfText *txt_tesla2;
    sfVector2f pos_tesla2;
}text_skills_t;

typedef struct ui_bunker_t
{
    sfTexture *bunker_tex;
    sfSprite *bunker_spr;
    sfVector2f pos_bunker;
    sfVector2f scale_bunker;
}ui_bunker_t;

typedef struct ui_info_t
{
    sfTexture *money_tex;
    sfSprite *money_spr;
    sfVector2f pos_money;
    sfVector2f scale_money;
    sfTexture *life_tex;
    sfSprite *life_spr;
    sfVector2f pos_life;
    sfVector2f scale_life;
}ui_info_t;

typedef struct ui_button_turret_t
{
    sfRectangleShape *button_casu;
    sfVector2f pos_casu;
    sfVector2f size_casu;
    sfVector2f click_pos_casu;
    sfVector2f click_size_casu;
    sfRectangleShape *button_heavy;
    sfVector2f pos_heavy;
    sfVector2f size_heavy;
    sfVector2f click_pos_heavy;
    sfVector2f click_size_heavy;
    sfRectangleShape *button_arti;
    sfVector2f pos_arti;
    sfVector2f size_arti;
    sfVector2f click_pos_arti;
    sfVector2f click_size_arti;
    sfRectangleShape *button_flamme;
    sfVector2f pos_flamme;
    sfVector2f size_flamme;
    sfVector2f click_pos_flamme;
    sfVector2f click_size_flamme;
    sfRectangleShape *button_tesla;
    sfVector2f pos_tesla;
    sfVector2f size_tesla;
    sfVector2f click_pos_tesla;
    sfVector2f click_size_tesla;
}ui_button_turret_t;

typedef struct ui_pause_button_t
{
    sfRectangleShape *button_resume;
    sfVector2f pos_resume;
    sfVector2f size_resume;
    sfVector2f click_pos_resume;
    sfVector2f click_size_resume;
    sfRectangleShape *button_go_menu;
    sfVector2f pos_go_menu;
    sfVector2f size_go_menu;
    sfVector2f click_pos_go_menu;
    sfVector2f click_size_go_menu;
    sfRectangleShape *button_exit;
    sfVector2f pos_exit;
    sfVector2f size_exit;
    sfVector2f click_pos_exit;
    sfVector2f click_size_exit;
}ui_pause_button_t;

typedef struct ui_text_pause_t
{
    sfText *txt_resume;
    sfVector2f pos_resume;
    sfText *txt_go_menu;
    sfVector2f pos_go_menu;
    sfText *txt_exit;
    sfVector2f pos_exit;
}ui_text_pause_t;

typedef struct ui_price_turret_t
{
    int price_casu;
    int price_heavy;
    int price_arti;
    int price_flamme;
    int price_tesla;
}ui_price_turret_t;

#endif /* !STRUCT_UI_H_ */