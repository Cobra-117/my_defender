/*
** EPITECH PROJECT, 2020
** sdhj
** File description:
** sd
*/

#include "../include/my.h"

void buy_upgrade(Index_t *index)
{
    switch (index->ui_which_turret) {
    case 6:
        modify_money_upgrade1(index);
        break;
    case 7:
        modify_money_upgrade2(index);
        break;
    case 8:
        modify_money_upgrade3(index);
        break;
    case 9:
        modify_money_upgrade4(index);
        break;
    case 10:
        modify_money_upgrade5(index);
        break;
    }
    //switch case
}