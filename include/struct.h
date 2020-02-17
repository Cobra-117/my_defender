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
}misc_object_t;

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


typedef struct Index_t
{
    sfRenderWindow *window;
    enemies_t enemies;
    turrets_t turrets;
    misc_object_t misc_objs;
}Index_t;



#endif /* !STRUCT_H_ */
