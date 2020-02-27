/*
** EPITECH PROJECT, 2020
** init_map
** File description:
** init the map
*/

#include "../include/my.h"

void fill_one_line(Index_t *index, int fd, int i)
{
    index->map.map_array[i] = malloc(sizeof(char) * 33);
    read(fd, index->map.map_array[i], 33);
    index->map.map_array[i][30] = '\0';
}

void fill_map_array(Index_t *index)
{
    int fd = open("assets/map/map01", O_RDONLY);
    if (fd == -1)
        exit (64);
    index->map.map_array = malloc(sizeof(char *) * 19);
    for (int i = 0; i < 19; i++) {
        fill_one_line(index, fd, i);
    }
    close(fd);
}

void init_map_tiles(Index_t *index)
{
    index->map.path_tex =
    sfTexture_createFromFile("assets/tileset/Path.png", NULL);
    index->map.snow_tex =
    sfTexture_createFromFile("assets/tileset/Snow.png", NULL);
    index->map.path_spr = sfSprite_create();
    index->map.snow_spr = sfSprite_create();
    sfSprite_setTexture(index->map.path_spr, index->map.path_tex, sfTrue);
    sfSprite_setTexture(index->map.snow_spr, index->map.snow_tex, sfTrue);
}

void init_map(Index_t *index)
{
    init_map_tiles(index);
    fill_map_array(index);
}