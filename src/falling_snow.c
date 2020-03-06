/*
** EPITECH PROJECT, 2020
** init snow
** File description:
** init the falling snow
*/

#include "../include/my.h"

void display_snow_at(Index_t *index, sfVector2f first_pos, sfVector2f scd_pos)
{
    sfSprite_setPosition(index->vis_effects.snow.sprite, first_pos);
    sfRenderWindow_drawSprite(index->window,
    index->vis_effects.snow.sprite, NULL);
    sfSprite_setPosition(index->vis_effects.snow.sprite, scd_pos);
    sfRenderWindow_drawSprite(index->window,
    index->vis_effects.snow.sprite, NULL);
}

void blizzard_effect(Index_t *index)
{
    sfVector2f newpos1 =  index->vis_effects.snow.pos_1;
    sfVector2f newpos2 =  index->vis_effects.snow.pos_2;

    newpos1.x -= 300;
    newpos2.x -= 300;
    display_snow_at(index, newpos1, newpos2);
    newpos1.x -= 300;
    newpos2.x -= 300;
    display_snow_at(index, newpos1, newpos2);
    newpos1.x += 900;
    newpos2.x += 900;
    display_snow_at(index, newpos1, newpos2);
    newpos1.x += 300;
    newpos2.x += 300;
    display_snow_at(index, newpos1, newpos2);
    newpos1.x = 0;
    newpos1.y = 0;
    sfSprite_setPosition(index->vis_effects.snow.white_spr, newpos1);
    sfRenderWindow_drawSprite(index->window,
    index->vis_effects.snow.white_spr, NULL);
}

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
    if (compare_time(index, BAL_BLIZZARD, INTERV_BLIZZARD) == 1)
        index->game_effects.blizzard = sfFalse;
    if (index->game_effects.blizzard == 1) {
        blizzard_effect(index);
    }
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
    vis_effect->snow.white_img = sfImage_createFromFile("assets/UI/white.png");
    sfImage_createMaskFromColor(vis_effect->snow.white_img, sfWhite, 70);
    vis_effect->snow.white_tex =
    sfTexture_createFromImage(vis_effect->snow.white_img, NULL);
    vis_effect->snow.white_spr = sfSprite_create();
    sfSprite_setTexture(vis_effect->snow.white_spr,
    vis_effect->snow.white_tex, sfFalse);
}