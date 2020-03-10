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
    index->ui_is_upgrade = 0;
    index->ui_button_skills.casu2_already_upgrade = 0;
    index->ui_button_skills.heavy2_already_upgrade = 0;
    index->ui_button_skills.arti2_already_upgrade = 0;
    index->ui_button_skills.flame2_already_upgrade = 0;
    index->ui_button_skills.tesla2_already_upgrade = 0;
}

void init_price_turrets(Index_t *index)
{
    index->ui_price_turret.price_casu = 100;
    index->ui_price_turret.price_heavy = 200;
    index->ui_price_turret.price_arti = 300;
    index->ui_price_turret.price_flamme = 300;
    index->ui_price_turret.price_tesla = 500;
    index->ui_price_turret.price_casu2 = 100;
    index->ui_price_turret.price_heavy2 = 200;
    index->ui_price_turret.price_arti2 = 300;
    index->ui_price_turret.price_flamme2 = 300;
    index->ui_price_turret.price_tesla2 = 500;
    index->ui_price_turret.price_casu_upgrade = 150;
    index->ui_price_turret.price_heavy_upgrade = 300;
    index->ui_price_turret.price_arti_upgrade = 450;
    index->ui_price_turret.price_flamme_upgrade = 450;
    index->ui_price_turret.price_tesla_upgrade = 750;
    index->ui_price_turret.price_mine = 300;
    index->ui_price_turret.price_order = 800;
    index->ui_price_turret.price_chernobyl = 500;
    init_turrets_value(index);
}