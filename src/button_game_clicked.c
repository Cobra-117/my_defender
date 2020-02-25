/*
** EPITECH PROJECT, 2020
** dfghj
** File description:
** sdfghjkl
*/

#include "../include/my.h"

int button_game_clicked(Index_t *index)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(index->window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(index->window);
        if (event.type == sfEvtMouseMoved) {
            index->ui.coord_mouse_x = event.mouseMove.x;
            index->ui.coord_mouse_y = event.mouseMove.y;
            info_casu(index);
        }
        if (event.type == sfEvtMouseButtonPressed) {
            is_ui_tower(index);
            is_utility(index);
            is_skill(index);
            is_casu(index);
            is_heavy(index);
            is_arti(index);
            is_flamme(index);
            is_tesla(index);
        }
    }
}