/*
** EPITECH PROJECT, 2020
** sdhj
** File description:
** sd
*/

#include "../include/my.h"

void buy_upgrade(Index_t *index)
{
    if (index->ui_which_turret == 6)
        modify_money_upgrade1(index);
    if (index->ui_which_turret == 7)
        modify_money_upgrade2(index);
    if (index->ui_which_turret == 8)
        modify_money_upgrade3(index);
    if (index->ui_which_turret == 9)
        modify_money_upgrade4(index);
    if (index->ui_which_turret == 10)
        modify_money_upgrade5(index);
}