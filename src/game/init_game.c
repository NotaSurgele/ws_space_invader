/*
** EPITECH PROJECT, 2022
** workshop_struct_tek1
** File description:
** init_game
*/

#include "game.h"
#include "background.h"
#include "window.h"
#include "deltatime.h"

/* to Complete
*
* Create a player_t variable setting all his variable and then return it
*
*/
player_t init_player(char *sprite_path)
{
    player_t p = {0};

    /* to Complete
    *
    */
    return p;
}


/* to Complete
*
* Create an instance of every structure that you created before
* And put it inside the game_t structure and of course return it
*/
game_t init_game(void)
{
    game_t game = {0};

    /* to Complete
    */
    game.time = init_time();
    return game;
}