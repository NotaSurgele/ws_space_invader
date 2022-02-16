/*
** EPITECH PROJECT, 2022
** workshop_struct_tek1
** File description:
** init_time
*/

#include "deltatime.h"

/*
* Don't touch this one, barely see it
*/
deltatime_t init_time(void)
{
    deltatime_t time = {0};

    time._clock = sfClock_create();
    time.deltaTime = 0;
    return time;
}