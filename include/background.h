/*
** EPITECH PROJECT, 2022
** workshop_struct_tek1
** File description:
** background
*/

#ifndef BACKGROUND_H_
    #define BACKGROUND_H_

    #include <SFML/Graphics.h>
    #include "window.h"
    #include "deltatime.h"

    /* To Complete
    *
    * What's the point of a game if there is no background ? I mean it's pretty ugly right ?
    *
    * This structure takes an sprite, and the texture for the backgrounds
    */
    typedef struct background_s {
        /* To Complete
        *
        */
    } background_t;


    background_t **init_background_array(char **);
    background_t *init_background(char *);
    background_t **draw_background(background_t **, window_t *, deltatime_t);
    void destroy_background(background_t **);
#endif /* !BACKGROUND_H_ */
