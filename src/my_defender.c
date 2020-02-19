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

    init_structs(&index);
    //game function here
    while (sfRenderWindow_isOpen(index.window)) {
        display_map(&index);
        sfRenderWindow_display(index.window);
    }
    free_structs(&index);
}