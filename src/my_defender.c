/*
** EPITECH PROJECT, 2020
** my defender
** File description:
** my defender
*/

#include "../include/my.h"

void my_defender(void)
{
    Index_t index;
    menu_t menu;
    int user_choice = 0;
    menu.volume_music = 50;

    init_structs(&index);
    while (1) {
        user_choice = main_menu(&menu, index.window);
        if (user_choice == 1) {
            sfMusic_destroy(menu.music);
            if (game_loop(&index) == -1)
                break;
        }
        if (user_choice == 2)
            break;
        if (user_choice == 4)
            window_settings(&menu, index.window);
    }
    free_structs(&index);
}