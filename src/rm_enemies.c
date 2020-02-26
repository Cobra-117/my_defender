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

    previous = (&*index->enemies_list);
    /*if (previous->next == NULL)
        current->type = 0;*/
    if (previous->next->coordinates.x == current->coordinates.x &&
    previous->next->coordinates.y == current->coordinates.y)
        return;
    while (previous->next->next != NULL) {
        if (previous->next->coordinates.x == current->coordinates.x &&
        previous->next->coordinates.y == current->coordinates.y) {
            break;
        }
    }
    previous->next = current->next;
    printf("enemy remove\n");
}