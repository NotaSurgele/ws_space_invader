/*
** EPITECH PROJECT, 2022
** workshop_struct_tek1
** File description:
** start_time
*/

#include "deltatime.h"

/*
* This one is actually pretty sick, trust me you will understand
*/
void time_manager(deltatime_t *time)
{
    sfTime sf_time = {0};
    sf_time = sfClock_restart(time->_clock);
    time->deltaTime = sfTime_asSeconds(sf_time);
}