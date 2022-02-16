/*
** EPITECH PROJECT, 2022
** workshop_struct_tek1
** File description:
** game
*/

#ifndef GAME_H_
    #define GAME_H_

    #include "background.h"
    #include "deltatime.h"
    #include "window.h"

    /* Complete this structure
    *
    *  This structure should get a sprite and a texture to draw
    *  You will see later why there is two sfBool inside
    */
    typedef struct player_s {
        /*
        * to Complete
        */
        sfBool right;
        sfBool left;
    }player_t;


    /* Complete this structure
    *
    *  Since we are working on a little game without a tons of data
    *  you are free to put everything in a game_t structure, but keep in mind
    *  that this is okay only if you are working on a little game
    *
    *  This structure takes a background_t array[][], a player_t, and a deltatime_t
    */
    typedef struct game_s {
        /*
        * to Complete
        */
    }game_t;

    game_t init_game(void);
    void draw_player(player_t player, window_t *window);
    void destroy_player(player_t player);
    void set_player_move(game_t *game, sfEvent evt);
    void player_move(player_t *player, deltatime_t time);
#endif /* !GAME_H_ */
