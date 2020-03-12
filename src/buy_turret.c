/*
** EPITECH PROJECT, 2020
** dfghjk
** File description:
** dfghj
*/

#include "../include/my.h"

int buy_turret(Index_t *index)
{
    if (index->ui_which_turret == 1)
        if (modify_money_casu(index) == -1)
            return (-1);
    if (index->ui_which_turret == 2)
        if (modify_money_heavy(index) == -1)
            return (-1);
    if (index->ui_which_turret == 3)
        if (modify_money_arti(index) == -1)
            return (-1);
    if (index->ui_which_turret == 4)
        if (modify_money_flamme(index) == -1)
            return (-1);
    if (index->ui_which_turret == 5)
        if (modify_money_tesla(index) == -1)
            return (-1);
    return (0); //mettre un switch case
}