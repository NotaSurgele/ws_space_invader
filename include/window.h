/*
** EPITECH PROJECT, 2022
** workshop_struct_tek1
** File description:
** window
*/

#ifndef WINDOW_H_
    #define WINDOW_H_

    #include <stdlib.h>

    #include <SFML/Graphics.h>
    #include <SFML/System.h>


    /* Complete this structure
    *
    * It is important to have a structure that actually handle your game window
    * this can be very useful if you need to access the size of the window to instance
    *
    * This structure takes an sfRenderWindow, an sfVideoMode, size_t width, size_t height
    */
    typedef struct window_s {
        /*
        *to Complete
        */
    } window_t;


    /*
    * Functions declaration
    */
   window_t *init_window(char *, size_t, size_t);

#endif /* !WINDOW_H_ */
