/*
** EPITECH PROJECT, 2020
** sdfgj
** File description:
** dfghj
*/

#include "../include/my.h"

int modify_money_mine(Index_t *index)
{
    if (index->money >= index->ui_price_turret.price_mine) {
        index->money -= index->ui_price_turret.price_mine;
        sfText_setString(index->ui_text.txt_money,
        my_nbr_to_str(index->money));
        return (0);
    } else
        return (-1);
    index->ui_which_power = 0;
}

int modify_money_order(Index_t *index)
{
    if (index->money >= index->ui_price_turret.price_order) {
        index->money -= index->ui_price_turret.price_order;
        sfText_setString(index->ui_text.txt_money,
        my_nbr_to_str(index->money));
        return (0);
    } else
        return (-1);
    index->ui_which_power = 0;
}

int modify_money_chernobyl(Index_t *index)
{
    if (index->money >= index->ui_price_turret.price_chernobyl) {
        index->money -= index->ui_price_turret.price_chernobyl;
        sfText_setString(index->ui_text.txt_money,
        my_nbr_to_str(index->money));
        return (0);
    } else
        return (-1);
    index->ui_which_power = 0;
}