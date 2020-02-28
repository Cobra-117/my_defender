/*
** EPITECH PROJECT, 2020
** quick
** File description:
** quick init
*/

#include "../include/my.h"

char *fill_string(char *asked)
{
    char *str = malloc(sizeof(char) * (my_strlen(asked) + 1));
    int i = 0;

    for (; asked[i] != '\0'; i++) {
        str[i] = asked[i];
    }
    str[i] = '\0';
    return (str);
}

void quick_time_init(Index_t *index)
{
    for (int i = 0; i < BALISES_NBR; i++) {
        index->time.balises[i] = 0;
    }
}

void music_init(sound_t sound)
{
    sfTime time;
    time.microseconds = 5500000;

    sound.music = sfMusic_createFromFile("assets/music/kalinka.ogg");
    sfMusic_setPlayingOffset(sound.music, time);
    sfMusic_setVolume(sound.music, 40);
    sfMusic_setLoop(sound.music, sfTrue);
    sfMusic_play(sound.music);
}

void quick_init(Index_t *index)
{
    index->wave.filepath = fill_string("assets/waves/wave_1");
    index->wave.fd = open(index->wave.filepath, O_RDONLY);
    index->wave.wave_nbr = 1;
    quick_time_init(index);
    music_init(index->sound);
}