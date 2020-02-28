/*
** EPITECH PROJECT, 2020
** dfghj
** File description:
** sdfghjkl
*/

#include "../include/my.h"

void check_what_is_it2(Index_t *index)
{
    is_upgrade(index);
}

void check_what_is_it(Index_t *index)
{
    place_is_valid(index);
    is_ui_tower(index);
    is_utility(index);
    is_skill(index);
    is_casu(index);
    is_heavy(index);
    is_arti(index);
    is_flamme(index);
    is_tesla(index);
    is_resume(index);
    is_go_menu(index);
    is_exit2(index);
    is_casu2(index);
    is_heavy2(index);
    is_arti2(index);
    is_flame2(index);
    is_tesla2(index);
    check_what_is_it2(index);
}

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
        if (event.type == sfEvtMouseButtonPressed)
            check_what_is_it(index);
        if (event.type == sfEvtKeyPressed)
            if (event.key.code == sfKeyEscape)
                index->what_is_open = 4;
    }
}