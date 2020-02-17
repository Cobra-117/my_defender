/*
** EPITECH PROJECT, 2020
** struct
** File description:
** struct
*/

#include "includes.h"

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct misc_object_t
{
    sfTexture *mine_tex;
    sfSprite *mine_spr;
};

typedef struct turrets_t
{
    sfTexture *mki_tex;
    sfSprite *mki_spr;
    sfTexture *mkii_tex;
    sfSprite *mkii_spr;
    sfTexture *artillery_text;
    sfSprite *artillery_spr;
    sfTexture *flame_tex;
    sfSprite *flame_spr;
    sfTexture *slow_tex;
    sfSprite *slow_spr;
};

typedef struct enemies_t
{
    sfTexture *heavy_tex;
    sfSprite *heavy_spr;
    sfTexture *med_tex;
    sfSprite *med_spr;
    sfTexture *light_tex;
    sfSprite *light_spr;
};


typedef struct Index_t
{
    sfRenderWindow *window;
    enemies_t enemies;
    turrets_t turrets;
    misc_object_t misc_objs;
};



#endif /* !STRUCT_H_ */
