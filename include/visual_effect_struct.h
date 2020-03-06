/*
** EPITECH PROJECT, 2020
** visual effect struct
** File description:
** struct for visual effects
*/

#include "includes.h"

#ifndef VISUAL_EFFECT_STRUCT_H_
#define VISUAL_EFFECT_STRUCT_H_

typedef struct falling_snow_t
{
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f pos_1;
    sfVector2f pos_2;
    sfImage *white_img;
    sfTexture *white_tex;
    sfSprite *white_spr;
}falling_snow_t;

typedef struct visual_effects_t
{
    falling_snow_t snow;
}visual_effects_t;


#endif /* !VISUAL_EFFECT_STRUCT_H_ */
