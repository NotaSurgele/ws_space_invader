/*
** EPITECH PROJECT, 2022
** workshop_struct_tek1
** File description:
** player_move
*/

#include "game.h"

/*
* This one is ugly but pretty useful for nice character movement
*/
void set_player_move(game_t *game, sfEvent evt)
{
    if (evt.type == sfEvtKeyPressed) {
        if (evt.key.code == sfKeyD)
            game->player.right = sfTrue;
        if (evt.key.code == sfKeyQ)
            game->player.left = sfTrue;
    }
    if (evt.type == sfEvtKeyReleased) {
        if (evt.key.code == sfKeyD)
            game->player.right = sfFalse;
        if (evt.key.code == sfKeyQ)
            game->player.left = sfFalse;
    }
}

/* to Complete
*
*  In this function i want you to move the sprite on right if the player->right == sfTrue
*  To the same for the left
*/
void player_move(player_t *player, deltatime_t time)
{
    /* to Complete
    */
}