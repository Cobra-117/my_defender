/*
** EPITECH PROJECT, 2020
** dfghj
** File description:
** df
*/

#include "../include/my.h"

void check_the_upgrade(Index_t *index)
{
    if (index->ui_which_turret == 6 && index->ui_button_skills.
    casu2_already_upgrade == 1)
        sfText_setString(index->text_skills.txt_price_upgrade,
        "Already\nupgrade");
    if (index->ui_which_turret == 7 && index->ui_button_skills.
    heavy2_already_upgrade == 1)
        sfText_setString(index->text_skills.txt_price_upgrade,
        "Already\nupgrade");
    if (index->ui_which_turret == 8 && index->ui_button_skills.
    arti2_already_upgrade == 1)
        sfText_setString(index->text_skills.txt_price_upgrade,
        "Already\nupgrade");
    if (index->ui_which_turret == 9 && index->ui_button_skills.
    flame2_already_upgrade == 1)
        sfText_setString(index->text_skills.txt_price_upgrade,
        "Already\nupgrade");
    if (index->ui_which_turret == 10 && index->ui_button_skills.
    tesla2_already_upgrade == 1)
        sfText_setString(index->text_skills.txt_price_upgrade,
        "Already\nupgrade");
}