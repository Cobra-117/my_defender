/*
** EPITECH PROJECT, 2020
** dfghjk
** File description:
** fghjkl
*/

#include "../include/my.h"

void link_htp_sprites_and_textures(menu_t *menu)
{
    sfSprite_setTexture(menu->image.spri_htp01,
    menu->image.text_htp01, sfTrue);
    sfSprite_setTexture(menu->image.spri_htp1,
    menu->image.text_htp1, sfTrue);
    sfSprite_setTexture(menu->image.spri_htp3,
    menu->image.text_htp3, sfTrue);
    sfSprite_setTexture(menu->image.spri_htp4,
    menu->image.text_htp4, sfTrue);
}

void init_htp_sprites(menu_t *menu)
{
    menu->image.spri_htp01 = sfSprite_create();
    menu->image.spri_htp1 = sfSprite_create();
    menu->image.spri_htp3 = sfSprite_create();
    menu->image.spri_htp4 = sfSprite_create();
}

void init_htp_tex(menu_t *menu)
{
    menu->image.text_htp01 =
    sfTexture_createFromFile("assets/UI/How_to_play01.png", NULL);
    menu->image.text_htp1 =
    sfTexture_createFromFile("assets/UI/How_to_play1.png", NULL);
    menu->image.text_htp3 =
    sfTexture_createFromFile("assets/UI/How_to_play3.png", NULL);
    menu->image.text_htp4 =
    sfTexture_createFromFile("assets/UI/How_to_play4.png", NULL);
}

void init_htp(menu_t *menu)
{
    init_htp_tex(menu);
    init_htp_sprites(menu);
    link_htp_sprites_and_textures(menu);
}