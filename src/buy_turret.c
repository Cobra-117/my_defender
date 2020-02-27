/*
** EPITECH PROJECT, 2020
** dfghjk
** File description:
** dfghj
*/

#include "../include/my.h"

void buy_turret(Index_t *index)
{
    if (index->ui_which_turret == 1)
        modify_money_casu(index);
    if (index->ui_which_turret == 2)
        modify_money_heavy(index);
    if (index->ui_which_turret == 3)
        modify_money_arti(index);
    if (index->ui_which_turret == 4)
        modify_money_flamme(index);
    if (index->ui_which_turret == 5)
        modify_money_tesla(index);
}