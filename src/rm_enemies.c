/*
** EPITECH PROJECT, 2020
** rm enemies
** File description:
** remove the enemies from linked list
*/

#include "../include/my.h"

void rm_enemy(Index_t *index, enemies_list_t *current)
{
    enemies_list_t *previous;
    enemies_list_t *temp;

    previous = &(*index->enemies_list);
    if (previous->coordinates.x ==
    current->coordinates.x &&
    previous->coordinates.y == current->coordinates.y) {
        current->coordinates.y = 5000;
        current->coordinates.x = 5000;
        current->type = 0;
        return;
    }
    while (previous->next != NULL) {
        if (previous->next->coordinates.x == current->coordinates.x &&
        previous->next->coordinates.y == current->coordinates.y)
            break;
        previous = previous->next;
    }
    current->coordinates.y = 5000;
    current->coordinates.x = 5000;
    current->type = 0;
}