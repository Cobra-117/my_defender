/*
** EPITECH PROJECT, 2020
** sdfghjk
** File description:
** sdfghj
*/

#include "../include/my.h"

int buy_power(Index_t *index)
{
    switch(index->ui_which_power) {
    case 1:
        if (modify_money_mine(index) == -1)
            return (-1);
        break;
    case 2:
        if (modify_money_order(index) == -1)
            return (-1);
        break;
    case 3:
        if (modify_money_chernobyl(index) == -1)
            return (-1);
        break;
    }
}