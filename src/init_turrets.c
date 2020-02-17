/*
** EPITECH PROJECT, 2020
** init turrets
** File description:
** init the turrets
*/

#include "../include/my.h"

void init_turrets_tex(Index_t *index)
{
    index->turrets.arti_mkI_tex =
    sfTexture_createFromFile("assets/turrets/Arti_lvl1.png", NULL);
    index->turrets.arti_mkII_tex =
    sfTexture_createFromFile("assets/turrets/Arti_lvl2.png", NULL);
    index->turrets.heavy_mkI_tex =
    sfTexture_createFromFile("assets/turrets/Heavy_lvl1.png", NULL);
    index->turrets.heavy_mkII_tex =
    sfTexture_createFromFile("assets/turrets/Heavy_lvl2.png", NULL);
    index->turrets.tesla_mkI_tex =
    sfTexture_createFromFile("assets/turrets/Tesla_lvl1.png", NULL);
    index->turrets.tesla_mkII_tex =
    sfTexture_createFromFile("assets/turrets/Tesla_lvl2.png", NULL);
    index->turrets.casu_mkI_tex =
    sfTexture_createFromFile("assets/turrets/Casu_lvl1.png", NULL);
    index->turrets.casu_mkII_tex =
    sfTexture_createFromFile("assets/turrets/Casu_lvl2.png", NULL);
    index->turrets.flame_mkI_tex =
    sfTexture_createFromFile("assets/turrets/Flame_lvl1.png", NULL);
    index->turrets.flame_mkII_tex =
    sfTexture_createFromFile("assets/turrets/Flame_lvl2.png", NULL);
}
