/*
** EPITECH PROJECT, 2022
** workshop_struct_tek1
** File description:
** draw_background
*/

#include "game.h"
#include "window.h"
#include "background.h"

/* To Complete
*
* Iterate through the background structure array of background_t and draw the sprite background on screen
*/
background_t **draw_background(background_t **background, window_t *window, deltatime_t time)
{
    /* to Complete
    *
    */
    return background;
}

/* to Complete
*
* Iterate through the background structure array of background_t and destroy EVERYTHING
*
* DON'T FORGET TO FREE THE POINTERS OF COURSE -> FREE()
*/
void destroy_background(background_t **background)
{

    for (int i = 0; background[i] != NULL; i++) {
        sfSprite_destroy(background[i]->sprite);
        sfTexture_destroy(background[i]->texture);
        free(background[i]);
    }
    free(background);
}