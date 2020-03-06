/*
** EPITECH PROJECT, 2020
** will collision if move
** File description:
** check if there will be a collision if tank move
*/

#include "../include/my.h"

int will_collision_if_move_forward(Index_t *index, enemies_list_t *current)
{
    sfVector2f enemy_pos = current->coordinates;
    enemies_list_t *element;

    element = (*&index->enemies_list);
    while (element->next != NULL)
    {
        if (element->coordinates.x == enemy_pos.x &&
        element->coordinates.y == enemy_pos.y) {
            return (0);
        }
        if (element->coordinates.x - enemy_pos.x <= 1 + 64 &&
        element->coordinates.y - enemy_pos.y <= 1 + 64) {
            //printf("can't move due to enemy at x %f y %f\n",
            //element->coordinates.x, element->coordinates.y);
            return (1);
        }
        element = element->next;
    }
    return (0);
}

int will_collision_if_move_up(Index_t *index, enemies_list_t *current)
{
    sfVector2f enemy_pos = current->coordinates;
    enemies_list_t *element;

    element = (*&index->enemies_list);
    while (element->next != NULL)
    {
        if (element->coordinates.x == enemy_pos.x &&
        element->coordinates.y == enemy_pos.y) {
            return (0);
        }
        if (element->coordinates.x - enemy_pos.x <= 1 + 64 &&
        element->coordinates.y - enemy_pos.y <= 1 + 64) {
            return (1);
        }
        element = element->next;
    }
    return (0);
}

int will_collision_if_move_down(Index_t *index, enemies_list_t *current)
{
    sfVector2f enemy_pos = current->coordinates;
    enemies_list_t *element;

    element = (*&index->enemies_list);
    while (element->next != NULL)
    {
        if (element->coordinates.x == enemy_pos.x &&
        element->coordinates.y == enemy_pos.y) {
            return (0);
        }
        if (element->coordinates.x - enemy_pos.x <= 1 + 64 &&
        element->coordinates.y - enemy_pos.y <= 1 + 64) {
            return (1);
        }
        element = element->next;
    }
    return (0);
}

