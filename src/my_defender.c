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
    int user_choice = 0;

    init_structs(&index);
    while (1) {
        user_choice = main_menu(index.window);
        if (user_choice == 1)
            if (game_loop(&index) == -1)
                break;
        if (user_choice == 2)
            break;
    }
    free_structs(&index);
}