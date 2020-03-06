/*
** EPITECH PROJECT, 2020
** qsdfghjklm
** File description:
** qsdfghjklm
*/

#include "../include/my.h"

void set_volume_sound(Index_t *index)
{
    sfSound_setVolume(index->sound.effects.no,
    index->sound.effects.volume_effects);
}

void set_buffer_sound(Index_t *index)
{
    sfSound_setBuffer(index->sound.effects.no, index->sound.effects.buffer);
}

void create_buffer_sound(Index_t *index)
{
    index->sound.effects.buffer =
    sfSoundBuffer_createFromFile("assets/sounds/no.ogg");
}

void create_sound(Index_t *index)
{
    index->sound.effects.no = sfSound_create();
}

void init_sound(Index_t *index)
{
    index->sound.effects.volume_effects = 100;
    create_sound(index);
    create_buffer_sound(index);
    set_buffer_sound(index);
    set_volume_sound(index);
}