/*
** EPITECH PROJECT, 2020
** init enemies list
** File description:
** init the list
*/

#include "../include/my.h"

void init_enemies_list(Index_t *index)
{
    index->enemies_list = malloc(sizeof(enemies_list_t));
    index->enemies_list->type = 0;
    index->enemies_list->next = NULL;
}