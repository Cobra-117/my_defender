/*
** EPITECH PROJECT, 2020
** dfghjk
** File description:
** dfghj
*/

#include "../include/my.h"

int second_buy_turret(Index_t *index)
{
    switch (index->ui_which_turret) {
    case 4:
        if (modify_money_flamme(index) == -1)
            return (-1);
        break;
    case 5:
        if (modify_money_tesla(index) == -1)
            return (-1);
        break;
    }
    return (0);
}

int buy_turret(Index_t *index)
{
    switch (index->ui_which_turret) {
    case 1:
        if (modify_money_casu(index) == -1)
            return (-1);
        break;
    case 2:
        if (modify_money_heavy(index) == -1)
            return (-1);
        break;
    case 3:
        if (modify_money_arti(index) == -1)
            return (-1);
        break;
    }
    if (second_buy_turret(index) == -1)
        return (-1);
    return (0);
}