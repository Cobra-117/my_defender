/*
** EPITECH PROJECT, 2020
** struct sound
** File description:
** struct for the sound
*/

#include "includes.h"

#ifndef STRUCT_SOUND_H_
#define STRUCT_SOUND_H_

typedef struct sound_effects_t
{
    sfSound *no;
    sfSoundBuffer *no_buffer;
    sfSound *upgrade;
    sfSoundBuffer *upgrade_buffer;
    sfSound *anthem;
    sfSoundBuffer *anthem_buffer;
    float volume_effects;
}sound_effects_t;

typedef struct sound_t
{
    sound_effects_t effects;
    sfMusic *music;
    sfMusic *game;
    float game_volume;
    float volume_music;
}sound_t;

#endif /* !STRUCT_SOUND_H_ */
