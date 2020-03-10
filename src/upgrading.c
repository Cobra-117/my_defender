/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** sdfg
*/

#include "../include/my.h"

int check_my_upgrade(Index_t *index, sfVector2f pos)
{
    if (index->turrets_array[(int)pos.y][(int)pos.x].type == 1)
        if (index->ui_button_skills.casu2_already_upgrade == 0)
            return (-1);
    if (index->turrets_array[(int)pos.y][(int)pos.x].type == 2)
        if (index->ui_button_skills.heavy2_already_upgrade == 0)
            return (-1);
    if (index->turrets_array[(int)pos.y][(int)pos.x].type == 3)
        if (index->ui_button_skills.arti2_already_upgrade == 0)
            return (-1);
    if (index->turrets_array[(int)pos.y][(int)pos.x].type == 4)
        if (index->ui_button_skills.flame2_already_upgrade == 0)
            return (-1);
    if (index->turrets_array[(int)pos.y][(int)pos.x].type == 5)
        if (index->ui_button_skills.tesla2_already_upgrade == 0)
            return (-1);
}

void upgrading(Index_t *index)
{
    sfVector2f pos;

    pos.x = index->ui.coord_mouse_x;
    pos.y = index->ui.coord_mouse_y;
    pos = get_tile_from_pos(pos);
    if (index->turrets_array[(int)pos.y][(int)pos.x].type != 0 &&
    index->turrets_array[(int)pos.y][(int)pos.x].type < 6 &&
    buy_upgrade_turret(index, pos) != -1 && check_my_upgrade(index, pos)
    != -1) {
        index->turrets_array[(int)pos.y][(int)pos.x].type += 5;
        index->turrets_array[(int)pos.y][(int)pos.x].damage *=
        DAMAGE_MULTIPLICATOR;
        index->upgrading = 0;
        sfSound_play(index->sound.effects.upgrade);
    }
}