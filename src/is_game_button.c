/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** sdfghjk
*/

#include "../include/my.h"

int is_ui_tower(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui.click_pos_ui_tower.x +
    index->ui.click_size_ui_tower.x && index->ui.coord_mouse_x >=
    index->ui.click_pos_ui_tower.x && index->ui.coord_mouse_y <=
    index->ui.click_pos_ui_tower.y + index->ui.click_size_ui_tower.y
    && index->ui.coord_mouse_y >= index->ui.click_pos_ui_tower.y)
            index->what_is_open = 1;
}

int is_utility(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui.click_pos_utility.x +
    index->ui.click_size_utility.x && index->ui.coord_mouse_x >=
    index->ui.click_pos_utility.x && index->ui.coord_mouse_y <=
    index->ui.click_pos_utility.y + index->ui.click_size_utility.y
    && index->ui.coord_mouse_y >= index->ui.click_pos_utility.y)
            printf("Utility\n");
}

int is_skill(Index_t *index)
{
    if (index->ui.coord_mouse_x <= index->ui.click_pos_skill.x +
    index->ui.click_size_skill.x && index->ui.coord_mouse_x >=
    index->ui.click_pos_skill.x && index->ui.coord_mouse_y <=
    index->ui.click_pos_skill.y + index->ui.click_size_skill.y
    && index->ui.coord_mouse_y >= index->ui.click_pos_skill.y)
            printf("Skill\n");
}