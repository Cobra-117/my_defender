/*
** EPITECH PROJECT, 2020
** dfghjk
** File description:
** dfghj
*/

#include "../include/my.h"

int buy_upgrade_turret2(Index_t *index, sfVector2f pos)
{
    switch (index->turrets_array[(int)pos.y][(int)pos.x].type) {
    case 4:
        if (modify_upgrade_flamme(index) == -1)
            return (-1);
        break;
    case 5:
        if (modify_upgrade_tesla(index) == -1)
            return (-1);
        break;
    }
}

int buy_upgrade_turret(Index_t *index, sfVector2f pos)
{
    switch (index->turrets_array[(int)pos.y][(int)pos.x].type) {
    case 1:
        if (modify_upgrade_casu(index) == -1)
            return (-1);
        break;
    case 2:
        if (modify_upgrade_heavy(index) == -1)
            return (-1);
        break;
    case 3:
        if (modify_upgrade_arti(index) == -1)
            return (-1);
        break;
    }
    buy_upgrade_turret2(index, pos);
    return (0);
}