/*
** EPITECH PROJECT, 2020
** free sound
** File description:
** free the sound
*/

#include "../include/my.h"

void free_sound_effects(Index_t *index)
{
    sfSound_destroy(index->sound.effects.anthem);
    sfSound_destroy(index->sound.effects.no);
    sfSound_destroy(index->sound.effects.upgrade);
}

void free_sound_buffers(Index_t *index)
{
    sfSoundBuffer_destroy(index->sound.effects.anthem_buffer);
    sfSoundBuffer_destroy(index->sound.effects.no_buffer);
    sfSoundBuffer_destroy(index->sound.effects.upgrade_buffer);
}

void free_sound(Index_t *index)
{
    //sfMusic_stop(index->sound.music);
    //sfMusic_destroy(index->sound.music);
    free_sound_effects(index);
    free_sound_buffers(index);
    sfMusic_destroy(index->sound.game);
    /*if (index->sound.game != NULL)
        sfMusic_destroy(index->sound.game);*/
}