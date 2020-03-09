/*
** EPITECH PROJECT, 2020
** sdfghjk
** File description:
** sdfghj
*/

#include "../include/my.h"

int buy_power(Index_t *index)
{
    if (index->ui_which_power == 1)
        if (modify_money_mine(index) == -1)
            return (-1);
    if (index->ui_which_power == 2)
        if (modify_money_order(index) == -1)
            return (-1);
    if (index->ui_which_power == 3)
        if (modify_money_chernobyl(index) == -1)
            return (-1);
}