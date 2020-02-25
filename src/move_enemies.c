/*
** EPITECH PROJECT, 2020
** move enemies
** File description:
** move enemies
*/

#include "../include/my.h"

void move_forward(enemies_list_t *current)
{
    current->coordinates.x += current->speed;
}

void move_this_enemy(enemies_list_t *current)
{
    if (current->type == 0)
        return;
    move_forward(current);
}

void move_enemies(Index_t *index)
{
    enemies_list_t *current;

    current = *(&index->enemies_list);
    while (current->next != NULL)
    {
        move_this_enemy(current);
        current = current->next;
    }
    move_this_enemy(current);
}