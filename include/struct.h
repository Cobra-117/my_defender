/*
** EPITECH PROJECT, 2020
** struct
** File description:
** struct
*/

#include "includes.h"
#include "struct_ui.h"
#include "struct_sound.h"
#include "visual_effect_struct.h"

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct game_effects_t
{
    sfBool blizzard;
    sfBool chernobyl;
    sfBool order;
}game_effects_t;

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
    float rotation;
    float speed;
    sfBool freeze;
    struct enemies_list_t *next;
    struct enemies_list_t *last;
}enemies_list_t;

typedef struct turret_obj_t
{
    int type;
    float damage;
    float range;
    float rotation;
    int anim_state;
    int cycles;
    float time_shoot;
    float time_anim;
    enemies_list_t *aimed_enemy;
}turret_obj_t;

typedef struct wave_t
{
    int fd;
    int end;
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
    sfTexture *heavy_tex;
    sfSprite *heavy_spr;
    sfTexture *med_tex;
    sfSprite *med_spr;
    sfTexture *light_tex;
    sfSprite *light_spr;
    int enemy_nbr;
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

typedef struct ui_pause_t
{
    sfTexture *tex_pause;
    sfSprite *spri_pause;
    sfVector2f pos_pause;
    sfVector2f scale_pause;
}ui_pause_t;

typedef struct ui_text_t
{
    sfText *txt_tower;
    sfFont *font;
    sfFont *font2;
    sfVector2f pos_tower;
    sfText *txt_utility;
    sfVector2f pos_utility;
    sfText *txt_skill;
    sfVector2f pos_skill;
    sfText *txt_money;
    sfVector2f pos_money;
    int which_text;
    sfText *txt_casu;
    sfVector2f pos_casu;
    sfText *txt_heavy;
    sfVector2f pos_heavy;
    sfText *txt_arti;
    sfVector2f pos_arti;
    sfText *txt_flamme;
    sfVector2f pos_flamme;
    sfText *txt_tesla;
    sfVector2f pos_tesla;
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
    sfTexture *light_effect_tex;
    sfSprite *light_effect_spr;
    sfVector2f pos_light_effect;
    sfVector2f scale_light_effect;
}ui_turrets_t;

typedef struct ui_utilities_t
{
    sfTexture *mine_ui_tex;
    sfSprite *mine_ui_spr;
    sfVector2f pos_ui_mine;
    sfVector2f scale_ui_mine;
    sfTexture *barb_ui_tex;
    sfSprite *barb_ui_spr;
    sfVector2f pos_ui_barb;
    sfVector2f scale_ui_barb;
    sfTexture *order_ui_tex;
    sfSprite *order_ui_spr;
    sfVector2f pos_ui_order;
    sfVector2f scale_ui_order;
    sfTexture *tchernobyl_ui_tex;
    sfSprite *tchernobyl_ui_spr;
    sfVector2f pos_ui_tchernobyl;
    sfVector2f scale_ui_tchernobyl;
}ui_utilities_t;

typedef struct ui_skills_t
{
    sfTexture *casu_sk_tex;
    sfSprite *casu_sk_spr;
    sfVector2f pos_sk_casu;
    sfVector2f scale_sk_casu;
    sfTexture *heavy_sk_tex;
    sfSprite *heavy_sk_spr;
    sfVector2f pos_sk_heavy;
    sfVector2f scale_sk_heavy;
    sfTexture *arti_sk_tex;
    sfSprite *arti_sk_spr;
    sfVector2f pos_sk_arti;
    sfVector2f scale_sk_arti;
    sfTexture *flame_sk_tex;
    sfSprite *flame_sk_spr;
    sfVector2f pos_sk_flame;
    sfVector2f scale_sk_flame;
    sfTexture *tesla_sk_tex;
    sfSprite *tesla_sk_spr;
    sfVector2f pos_sk_tesla;
    sfVector2f scale_sk_tesla;
}ui_skills_t;

typedef struct Index_t
{
    sfRenderWindow *window;
    enemies_t enemies;
    turrets_t turrets;
    misc_object_t misc_objs;
    map_t map;
    text_skills_t text_skills;
    ui_t ui;
    ui_text_t ui_text;
    ui_turrets_t ui_turrets;
    ui_utilities_t ui_utilities;
    ui_skills_t ui_skills;
    ui_info_t ui_info;
    ui_pause_t ui_pause;
    ui_button_turret_t ui_button_turret;
    ui_pause_button_t ui_pause_button;
    ui_button_skills_t ui_button_skills;
    ui_text_pause_t ui_text_pause;
    ui_bunker_t ui_bunker;
    ui_price_turret_t ui_price_turret;
    ui_button_utilities_t ui_button_utilities;
    life_bar_t lifebar;
    wave_t wave;
    enemies_list_t *enemies_list;
    ui_text_utilities_t ui_text_utilities;
    mytime_t time;
    visual_effects_t vis_effects;
    sound_t sound;
    int what_is_open;
    int tmp;
    int money;
    int light_effect_play;
    int ui_which_turret;
    int ui_is_upgrade;
    int upgrading;
    int bunker_life;
    sfVector2f pos_turret;
    turret_obj_t **turrets_array;
    game_effects_t game_effects;
}Index_t;



#endif /* !STRUCT_H_ */
