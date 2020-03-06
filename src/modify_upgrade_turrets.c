/*
** EPITECH PROJECT, 2020
** sdfghjkl
** File description:
** dfghjk
*/

#include "../include/my.h"

int modify_upgrade_casu(Index_t *index)
{
    if (index->money >= index->ui_price_turret.price_casu_upgrade) {
        index->money -= index->ui_price_turret.price_casu_upgrade;
        sfText_setString(index->ui_text.txt_money,
        my_nbr_to_str(index->money));
        return (0);
    } else
        return (-1);
}

int modify_upgrade_heavy(Index_t *index)
{
    if (index->money >= index->ui_price_turret.price_heavy_upgrade) {
        index->money -= index->ui_price_turret.price_heavy_upgrade;
        sfText_setString(index->ui_text.txt_money,
        my_nbr_to_str(index->money));
        return (0);
    } else
        return (-1);
}

int modify_upgrade_arti(Index_t *index)
{
    if (index->money >= index->ui_price_turret.price_arti_upgrade) {
        index->money -= index->ui_price_turret.price_arti_upgrade;
        sfText_setString(index->ui_text.txt_money,
        my_nbr_to_str(index->money));
        return (0);
    } else
        return (-1);
}

int modify_upgrade_flamme(Index_t *index)
{
    if (index->money >= index->ui_price_turret.price_flamme_upgrade) {
        index->money -= index->ui_price_turret.price_flamme_upgrade;
        sfText_setString(index->ui_text.txt_money,
        my_nbr_to_str(index->money));
        return (0);
    } else
        return (-1);
}

int modify_upgrade_tesla(Index_t *index)
{
    if (index->money >= index->ui_price_turret.price_tesla_upgrade) {
        index->money -= index->ui_price_turret.price_tesla_upgrade;
        sfText_setString(index->ui_text.txt_money,
        my_nbr_to_str(index->money));
        return (0);
    } else
        return (-1);
}