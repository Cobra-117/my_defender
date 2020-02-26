/*
** EPITECH PROJECT, 2020
** add enemies
** File description:
** add enemy to list
*/

#include "../include/my.h"

void fill_data(enemies_list_t *current, int type)
{
    sfVector2f coordinates;

    coordinates.x = -300;
    coordinates.y = 64 * FIRST_TILE_Y + 32;
    current->coordinates = coordinates;
    current->rotation = 90;
    current->type = type;
    if (type == 1) {
        current->speed = LIGHT_SPEED;
        current->life = LIGHT_HEALTH;
    } else if (type == 2) {
        current->speed = MEDIUM_SPEED;
        current->life = MEDIUM_HEALTH;
    } else {
        current->speed = HEAVY_SPEED;
        current->life = HEAVY_HEALTH;
    }
}

void add_enemy_to_list(enemies_list_t *head, int type)
{
    enemies_list_t *current;

    current = *(&head);
    if (current->type == 0) {
        fill_data(current, type);
        return;
    }
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = malloc(sizeof(enemies_list_t));
    current = current->next;
    current->next = NULL;
    fill_data(current, type);
}

void add_enemy(Index_t *index, int type)
{
    add_enemy_to_list(index->enemies_list, type);
    index->enemies.enemy_nbr += 1;
}
