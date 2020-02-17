/*
** EPITECH PROJECT, 2020
** init window
** File description:
** init the window
*/

#include "../include/my.h"

void init_window(Index_t *index)
{
    sfVideoMode mode = {1920, 1080, 32};
    index->window = sfRenderWindow_create(mode, "main_W", sfFullscreen, NULL);
    sfRenderWindow_setFramerateLimit(index->window, 60);
}