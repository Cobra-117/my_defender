/*
** EPITECH PROJECT, 2020
** defines
** File description:
** defined values
*/

#include "time_balises.h"

#ifndef DEFINES_H_
#define DEFINES_H_

/*tank values*/
#define LIGHT_SPEED (15.0)
#define MEDIUM_SPEED (7.5)
#define HEAVY_SPEED (5.0)

#define LIGHT_HEALTH (300);
#define MEDIUM_HEALTH (600)
#define HEAVY_HEALTH (800)

/*turrets values*/
#define DEFAULT_RANGE (128)
#define LONG_RANGE (256)

#define CASU_DAMAGE (100)
#define HEAVY_DAMAGE (200)
#define ARTI_DAMAGE (200)
#define FLAME_DAMAGE (400)
#define TESLA_DAMAGE (100)

#define CASU_FIRE_RATE (2)
#define HEAVY_FIRE_RATE (2)
#define ARTI_FIRE_RATE (4)
#define FLAME_FIRE_RATE (4)
#define TESLA_FIRE_RATE (2)

#define DAMAGE_MULTIPLICATOR (1.5)

/*Waves values*/
#define WAVES_TOTAL_NBR (2)
//#define wave_read_interval (0.50);

/*time*/
#define BALISES_NBR (10)
#define BAL_READMAP (0)
#define BAL_MOVE_ENEMIES (1)
#define BAL_WAVE_BREAK (2)
#define BAL_CHECK_SHOOT (3)
#define BAL_TURRET_ANIM (4)
#define BAL_SNOW (5)
#define BAL_BLIZZARD (6)
#define BAL_ORDER (7)
#define BAL_FREEZE (8)
#define BAL_DEBUG (9)

#define INTERV_READMAP (500)
#define INTERV_MOVE_ENEMIES (50)
#define INTERV_WAVE_BREAK (5000)
#define INTERV_CHECK_SHOOT (1000)
#define INTERV_TURRET_ANIM (400)
#define INTERV_TESLA_ANIM (200)
#define INTEV_FALL_SNOW (50)
#define INTERV_BLIZZARD (5000)
#define INTERV_FREEZE (1000)
#define INTERV_DEBUG (100)
#define INTERV_ORDER (10000)

/*misc*/
#define FIRST_TILE_Y (2)
#define BUNKER_LIFE (10)
#endif /* !DEFINES_H_ */
