/*
** EPITECH PROJECT, 2020
** dfghjk
** File description:
** dfghj
*/

#include "../include/my.h"

void buy_turret(Index_t *index)
{
    if (index->ui_which_turret.casu == 1)
        modify_money_casu(index);
    if (index->ui_which_turret.heavy == 1)
        modify_money_heavy(index);
    if (index->ui_which_turret.arti == 1)
        modify_money_arti(index);
    if (index->ui_which_turret.flamme == 1)
        modify_money_flamme(index);
    if (index->ui_which_turret.tesla == 1)
        modify_money_tesla(index);
}