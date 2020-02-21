/*
** EPITECH PROJECT, 2020
** struct
** File description:
** struct
*/

#include "includes.h"

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct mytime_t
{
    sfClock *clock;
    float *balises;
    int balises_nbr;
}mytime_t;

typedef struct enemies_list_t
{
    sfVector2f coordinates;
    int life;
    int type;
    float speed;
    struct enemies_list_t *next;
    struct enemies_list_t *last;
}enemies_list_t;
//typedef struct enemies_list_t enemies_list_t;

typedef struct wave_t
{
    int fd;
    int wave_nbr;
    int max_wave;
    int is_end_wave;
    int left_enemies;
    char *filepath;
}wave_t;

typedef struct map_t
{
    char **map_array;
    sfTexture *snow_tex;
    sfSprite *snow_spr;
    sfTexture *path_tex;
    sfSprite *path_spr;
}map_t;

typedef struct misc_object_t
{
    sfTexture *mine_tex;
    sfSprite *mine_spr;
}misc_object_t;

typedef struct turrets_t
{
    sfTexture *heavy_mkI_tex;
    sfSprite *heavy_mkI_spr;
    sfTexture *heavy_mkII_tex;
    sfSprite *heavy_mkII_spr;
    sfTexture *tesla_mkI_tex;
    sfSprite *tesla_mkI_spr;
    sfTexture *tesla_mkII_tex;
    sfSprite *tesla_mkII_spr;
    sfTexture *casu_mkI_tex;
    sfSprite *casu_mkI_spr;
    sfTexture *casu_mkII_tex;
    sfSprite *casu_mkII_spr;
    sfTexture *arti_mkI_tex;
    sfSprite *arti_mkI_spr;
    sfTexture *arti_mkII_tex;
    sfSprite *arti_mkII_spr;
    sfTexture *flame_mkI_tex;
    sfSprite *flame_mkI_spr;
    sfTexture *flame_mkII_tex;
    sfSprite *flame_mkII_spr;
}turrets_t;

typedef struct enemies_t
{
    sfTexture *heavyW_tex;
    sfSprite *heavyW_spr;
    sfTexture *heavyHull_tex;
    sfSprite *heavyHull_spr;
    sfTexture *medW_tex;
    sfSprite *medW_spr;
    sfTexture *medHull_tex;
    sfSprite *medHull_spr;
    sfTexture *lightW_tex;
    sfSprite *lightW_spr;
    sfTexture *lightHull_tex;
    sfSprite *lightHull_spr;
}enemies_t;

typedef struct ui_t
{
    sfTexture *tex_socle;
    sfSprite *spri_socle;
    sfVector2f pos_socle;
    sfVector2f scale_socle;
    sfRectangleShape *button_ui_tower;
    sfVector2f pos_ui_tower;
    sfVector2f size_ui_tower;
    sfVector2f click_pos_ui_tower;
    sfVector2f click_size_ui_tower;
    sfRectangleShape *button_utility;
    sfVector2f pos_utility;
    sfVector2f size_utility;
    sfVector2f click_pos_utility;
    sfVector2f click_size_utility;
    sfRectangleShape *button_skill;
    sfVector2f pos_skill;
    sfVector2f size_skill;
    sfVector2f click_pos_skill;
    sfVector2f click_size_skill;
    float coord_mouse_x;
    float coord_mouse_y;
}ui_t;

typedef struct ui_text_t
{
    sfText *txt_tower;
    sfFont *font;
    sfVector2f pos_tower;
    sfText *txt_utility;
    sfVector2f pos_utility;
    sfText *txt_skill;
    sfVector2f pos_skill;
    sfText *txt_money;
    sfVector2f pos_money;
}ui_text_t;

typedef struct ui_turrets_t
{
    sfTexture *heavy_ui_mkI_tex;
    sfSprite *heavy_ui_mkI_spr;
    sfVector2f pos_ui_heavy_mkI;
    sfVector2f scale_ui_heavy_mkI;
    sfTexture *tesla_ui_mkI_tex;
    sfSprite *tesla_ui_mkI_spr;
    sfVector2f pos_ui_tesla_mkI;
    sfVector2f scale_ui_tesla_mkI;
    sfTexture *casu_ui_mkI_tex;
    sfSprite *casu_ui_mkI_spr;
    sfVector2f pos_ui_casu_mkI;
    sfVector2f scale_ui_casu_mkI;
    sfTexture *arti_ui_mkI_tex;
    sfSprite *arti_ui_mkI_spr;
    sfVector2f pos_ui_arti_mkI;
    sfVector2f scale_ui_arti_mkI;
    sfTexture *flame_ui_mkI_tex;
    sfSprite *flame_ui_mkI_spr;
    sfVector2f pos_ui_flame_mkI;
    sfVector2f scale_ui_flame_mkI;
}ui_turrets_t;

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

typedef struct Index_t
{
    sfRenderWindow *window;
    enemies_t enemies;
    turrets_t turrets;
    misc_object_t misc_objs;
    map_t map;
    ui_t ui;
    ui_text_t ui_text;
    ui_turrets_t ui_turrets;
    ui_info_t ui_info;
    wave_t wave;
    enemies_list_t *enemies_list;
    mytime_t time;
    int what_is_open;
}Index_t;



#endif /* !STRUCT_H_ */
