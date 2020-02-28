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
}sound_effects_t;

typedef struct sound_t
{
    sound_effects_t effects;
    sfMusic *music;
}sound_t;

#endif /* !STRUCT_SOUND_H_ */
