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

#define LIGHT_HEALTH (100);
#define MEDIUM_HEALTH (200);
#define HEAVY_HEALTH (300)

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
#define BAL_DEBUG (9)

#define INTERV_READMAP (500)
#define INTERV_MOVE_ENEMIES (50)
#define INTERV_WAVE_BREAK (5000)
#define INTERV_CHECK_SHOOT (300)
#define INTERV_TURRET_ANIM (50)
#define INTEV_FALL_SNOW (50)
#define INTERV_DEBUG (100)

/*misc*/
#define FIRST_TILE_Y (2)
#endif /* !DEFINES_H_ */
