/*
** EPITECH PROJECT, 2020
** dfghj
** File description:
** dfghj
*/

#include "../include/my.h"

void modify_money_upgrade1(Index_t *index)
{
    if (index->money >= index->ui_price_turret.price_casu2) {
        index->money -= index->ui_price_turret.price_casu2;
        sfText_setString(index->ui_text.txt_money,
        my_nbr_to_str(index->money));
    }
    index->ui_is_upgrade = 0;
}

void modify_money_upgrade2(Index_t *index)
{
    if (index->money >= index->ui_price_turret.price_heavy2) {
        index->money -= index->ui_price_turret.price_heavy2;
        sfText_setString(index->ui_text.txt_money,
        my_nbr_to_str(index->money));
    }
    index->ui_is_upgrade = 0;
}

void modify_money_upgrade3(Index_t *index)
{
    if (index->money >= index->ui_price_turret.price_arti2) {
        index->money -= index->ui_price_turret.price_arti2;
        sfText_setString(index->ui_text.txt_money,
        my_nbr_to_str(index->money));
    }
    index->ui_is_upgrade = 0;
}

void modify_money_upgrade4(Index_t *index)
{
    if (index->money >= index->ui_price_turret.price_flamme2) {
        index->money -= index->ui_price_turret.price_flamme2;
        sfText_setString(index->ui_text.txt_money,
        my_nbr_to_str(index->money));
    }
    index->ui_is_upgrade = 0;
}

void modify_money_upgrade5(Index_t *index)
{
    if (index->money >= index->ui_price_turret.price_tesla2) {
        index->money -= index->ui_price_turret.price_tesla2;
        sfText_setString(index->ui_text.txt_money,
        my_nbr_to_str(index->money));
    }
    index->ui_is_upgrade = 0;
}