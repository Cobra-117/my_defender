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


typedef struct Index_t
{
    sfRenderWindow *window;
    enemies_t enemies;
    turrets_t turrets;
    misc_object_t misc_objs;
}Index_t;



#endif /* !STRUCT_H_ */
