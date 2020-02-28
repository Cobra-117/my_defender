/*
** EPITECH PROJECT, 2020
** init snow
** File description:
** init the falling snow
*/

#include "../include/my.h"

void display_snow(Index_t *index)
{
    sfSprite_setPosition(index->vis_effects.snow.sprite,
    index->vis_effects.snow.pos_1);
    sfRenderWindow_drawSprite(index->window,
    index->vis_effects.snow.sprite, NULL);
    sfSprite_setPosition(index->vis_effects.snow.sprite,
    index->vis_effects.snow.pos_2);
    sfRenderWindow_drawSprite(index->window,
    index->vis_effects.snow.sprite, NULL);
}

void manage_snow(Index_t *index)
{
    if (compare_time(index, BAL_SNOW, INTEV_FALL_SNOW) != 1)
        return;
    index->vis_effects.snow.pos_1.y += 5;
    if (index->vis_effects.snow.pos_1.y >= 1080) {
        index->vis_effects.snow.pos_1.y = -1080;
    }
    if (index->vis_effects.snow.pos_2.y >= 1080) {
        index->vis_effects.snow.pos_2.y = -1080;
    }
index->vis_effects.snow.pos_2.y += 5;
}

void init_snow(visual_effects_t *vis_effect)
{
    vis_effect->snow.texture = sfTexture_createFromFile
    ("assets/UI/Falling_snow.png", NULL);
    vis_effect->snow.sprite = sfSprite_create();
    sfSprite_setTexture(vis_effect->snow.sprite,
    vis_effect->snow.texture, sfTrue);
    vis_effect->snow.pos_1.x = 0;
    vis_effect->snow.pos_1.y = 0;
    vis_effect->snow.pos_2.x = 0;
    vis_effect->snow.pos_2.y = -1080;
}