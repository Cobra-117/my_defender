/*
** EPITECH PROJECT, 2020
** sdfghjkl
** File description:
** sdfghjk
*/

#include "../include/my.h"

int modify_money_casu(Index_t *index)
{
    if (index->money >= index->ui_price_turret.price_casu) {
        index->money -= index->ui_price_turret.price_casu;
        sfText_setString(index->ui_text.txt_money,
        my_nbr_to_str(index->money));
        return (0);
    } else
        return (-1);
}

int modify_money_heavy(Index_t *index)
{
    if (index->money >= index->ui_price_turret.price_heavy) {
        index->money -= index->ui_price_turret.price_heavy;
        sfText_setString(index->ui_text.txt_money,
        my_nbr_to_str(index->money));
        return (0);
    } else
        return (-1);
}

int modify_money_arti(Index_t *index)
{
    if (index->money >= index->ui_price_turret.price_arti) {
        index->money -= index->ui_price_turret.price_arti;
        sfText_setString(index->ui_text.txt_money,
        my_nbr_to_str(index->money));
        return (0);
    } else
        return (-1);
}

int modify_money_flamme(Index_t *index)
{
    if (index->money >= index->ui_price_turret.price_flamme) {
        index->money -= index->ui_price_turret.price_flamme;
        sfText_setString(index->ui_text.txt_money,
        my_nbr_to_str(index->money));
        return (0);
    } else
        return (-1);
}

int modify_money_tesla(Index_t *index)
{
    if (index->money >= index->ui_price_turret.price_tesla) {
        index->money -= index->ui_price_turret.price_tesla;
        sfText_setString(index->ui_text.txt_money,
        my_nbr_to_str(index->money));
        return (0);
    } else
        return (-1);
}