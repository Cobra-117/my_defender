/*
** EPITECH PROJECT, 2020
** qsdfghjklm
** File description:
** qsdfghjklm
*/

#include "../include/my.h"

sfSound *init_sound(Index_t *index)
{
    sfSound *sound = sfSound_create();
    sfSoundBuffer *buffer =
    sfSoundBuffer_createFromFile("assets/sounds/no.ogg");

    sfSound_setBuffer(sound, buffer);
    sfSound_setLoop(sound, sfTrue);
    sfSound_setVolume(sound, 100);

    return (sound);
}