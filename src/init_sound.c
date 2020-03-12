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
    sfSound_setVolume(index->sound.effects.upgrade,
    index->sound.effects.volume_effects);
    sfSound_setVolume(index->sound.effects.anthem,
    index->sound.effects.volume_effects);
    sfSound_setVolume(index->sound.effects.boom,
    index->sound.effects.volume_effects);
}

void set_buffer_sound(Index_t *index)
{
    sfSound_setBuffer(index->sound.effects.no, index->sound.effects.no_buffer);
    sfSound_setBuffer
    (index->sound.effects.upgrade, index->sound.effects.upgrade_buffer);
    sfSound_setBuffer
    (index->sound.effects.anthem, index->sound.effects.anthem_buffer);
    sfSound_setBuffer
    (index->sound.effects.place, index->sound.effects.place_buffer);
    sfSound_setBuffer
    (index->sound.effects.boom, index->sound.effects.boom_buffer);
}

void create_buffer_sound(Index_t *index)
{
    index->sound.effects.no_buffer =
    sfSoundBuffer_createFromFile("assets/sounds/no.ogg");
    index->sound.effects.upgrade_buffer =
    sfSoundBuffer_createFromFile("assets/sounds/upgrade.ogg");
    index->sound.effects.anthem_buffer =
    sfSoundBuffer_createFromFile("assets/sounds/anthem.ogg");
    index->sound.effects.place_buffer =
    sfSoundBuffer_createFromFile("assets/sounds/place.ogg");
    index->sound.effects.boom_buffer =
    sfSoundBuffer_createFromFile("assets/sounds/boom.ogg");
}

void create_sound(Index_t *index)
{
    index->sound.effects.no = sfSound_create();
    index->sound.effects.upgrade = sfSound_create();
    index->sound.effects.anthem = sfSound_create();
    index->sound.effects.place = sfSound_create();
    index->sound.effects.boom = sfSound_create();
}

void init_sound(Index_t *index)
{
    //index->sound.effects.volume_effects = 100;
    create_sound(index);
    create_buffer_sound(index);
    set_buffer_sound(index);
    set_volume_sound(index);
    index->sound.game = sfMusic_createFromFile("assets/music/kalinka.ogg");
}