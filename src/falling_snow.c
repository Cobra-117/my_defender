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
    index->vis_effects.snow.pos);
    sfRenderWindow_drawSprite(index->window,
    index->vis_effects.snow.sprite, NULL);

}

void init_snow(visual_effects_t *vis_effect)
{
    vis_effect->snow.texture = sfTexture_createFromFile
    ("assets/UI/Falling_snow.png", NULL);
    vis_effect->snow.sprite = sfSprite_create();
    sfSprite_setTexture(vis_effect->snow.sprite,
    vis_effect->snow.texture, sfTrue);
    vis_effect->snow.pos.x = 0;
    vis_effect->snow.pos.y = 0;
}