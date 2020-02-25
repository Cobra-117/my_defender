/*
** EPITECH PROJECT, 2020
** display enemies
** File description:
** display the enmies
*/

#include "../include/my.h"

void display_this_enemy(enemies_list_t *current, Index_t *index)
{
    //printf("coordinates: x: %f y: \n", current->coordinates.x, current->coordinates.y);
    if (current->type == 1) {
        sfSprite_setRotation(index->enemies.heavy_spr, current->rotation);
        sfSprite_setPosition(index->enemies.light_spr, current->coordinates);
        sfRenderWindow_drawSprite(index->window,
        index->enemies.light_spr, NULL);
    }
    if (current->type == 2) {
        sfSprite_setRotation(index->enemies.med_spr, current->rotation);
        sfSprite_setPosition(index->enemies.med_spr, current->coordinates);
        sfRenderWindow_drawSprite(index->window,
        index->enemies.med_spr, NULL);
    }
    if (current->type == 3) {
        sfSprite_setRotation(index->enemies.light_spr, current->rotation);
        sfSprite_setPosition(index->enemies.heavy_spr, current->coordinates);
        sfRenderWindow_drawSprite(index->window,
        index->enemies.heavy_spr, NULL);
    }
}

void display_enemies(Index_t *index)
{
    enemies_list_t *current;
    sfVector2f pos;

    current = *(&index->enemies_list);
    while (current->next != NULL)
    {
        display_this_enemy(current, index);
        current = current->next;
    }
    display_this_enemy(current, index);
    //printf("\nend display\n\n");
}