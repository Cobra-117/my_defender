/*
** EPITECH PROJECT, 2020
** sdfghjk
** File description:
** dfghj
*/

#include "../include/my.h"

void make_game_music_created(Index_t *index)
{
    sfTime time;
    time.microseconds = 5500000;

    index->sound.game = sfMusic_createFromFile("assets/music/kalinka.ogg");
    sfMusic_setPlayingOffset(index->sound.game, time);
    sfMusic_setVolume(index->sound.game, index->sound.game_volume);
    sfMusic_setLoop(index->sound.game, sfTrue);
}