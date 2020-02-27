/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** sdfghjk
*/

#include "../include/my.h"

void init_turrets_value(Index_t *index)
{
    index->ui_which_turret = 0;
}

void init_price_turrets(Index_t *index)
{
    index->ui_price_turret.price_casu = 200;
    index->ui_price_turret.price_heavy = 500;
    index->ui_price_turret.price_arti = 350;
    index->ui_price_turret.price_flamme = 400;
    index->ui_price_turret.price_tesla = 400;
    init_turrets_value(index);
}