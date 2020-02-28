/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** dfghj
*/

#include "../include/my.h"

void change_price_upgrade(Index_t *index)
{
    if (index->ui_which_turret == 6) {
        sfText_setString(index->text_skills.txt_price_upgrade,
        my_nbr_to_str(index->ui_price_turret.price_casu2));
    }
    if (index->ui_which_turret == 7) {
        sfText_setString(index->text_skills.txt_price_upgrade,
        my_nbr_to_str(index->ui_price_turret.price_heavy2));
    }
    if (index->ui_which_turret == 8) {
        sfText_setString(index->text_skills.txt_price_upgrade,
        my_nbr_to_str(index->ui_price_turret.price_arti2));
    }
    if (index->ui_which_turret == 9) {
        sfText_setString(index->text_skills.txt_price_upgrade,
        my_nbr_to_str(index->ui_price_turret.price_flamme2));
    }
    if (index->ui_which_turret == 10) {
        sfText_setString(index->text_skills.txt_price_upgrade,
        my_nbr_to_str(index->ui_price_turret.price_tesla2));
    }
}