/*
** EPITECH PROJECT, 2022
** workshop_struct_tek1
** File description:
** time
*/

#ifndef TIME_H_
    #define TIME_H_

    #include <SFML/Graphics.h>
    #include <SFML/System.h>

    /* Don't touch this one
    *
    * You will see the power of the deltaTime
    */
    typedef struct time_s {
        sfClock *_clock;
        float deltaTime;
    }deltatime_t;

    void time_manager(deltatime_t *);
    deltatime_t init_time(void);

#endif /* !TIME_H_ */
