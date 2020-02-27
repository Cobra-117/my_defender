/*
** EPITECH PROJECT, 2020
** dfghjk
** File description:
** dfghj
*/

#include "../include/my.h"

void prepare_bunker(Index_t *index)
{
    index->ui_bunker.bunker_tex =
    sfTexture_createFromFile("assets/UI/Bunker.png", NULL);
    index->ui_bunker.bunker_spr = sfSprite_create();
    sfSprite_setTexture(index->ui_bunker.bunker_spr,
    index->ui_bunker.bunker_tex, sfTrue);
    index->ui_bunker.pos_bunker.x = 1310;
    index->ui_bunker.pos_bunker.y = 650;
    sfSprite_setPosition(index->ui_bunker.bunker_spr,
    index->ui_bunker.pos_bunker);
    index->ui_bunker.scale_bunker.x = 8;
    index->ui_bunker.scale_bunker.y = 10;
    sfSprite_setScale(index->ui_bunker.bunker_spr,
    index->ui_bunker.scale_bunker);
}