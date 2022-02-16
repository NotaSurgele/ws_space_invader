/*
** EPITECH PROJECT, 2022
** workshop_struct_tek1
** File description:
** main
*/

#include <stdio.h>
#include "window.h"
#include "game.h"
#include "deltatime.h"

/*
* The main event loop
*/
void check_event(sfEvent evt, window_t *window, game_t *game)
{
    while (sfRenderWindow_pollEvent(window->render_window, &evt)) {
        if (evt.type == sfEvtClosed)
            sfRenderWindow_close(window->render_window);
        set_player_move(game, evt);
    }
}

/*
* YOU HAVE TO DESTROY EVERYTHING THAT YOU CREATED ITS THE LAW
*/
void destroy(game_t game, window_t *window)
{
    sfRenderWindow_destroy(window->render_window);
    destroy_background(game.bg);
    destroy_player(game.player);
}

/*
* Main game loop
*/
int main(void)
{
    window_t *window = init_window("Space Invaders", 400, 600);
    game_t game = init_game();
    sfEvent evt = {0};

    game.time._clock = sfClock_create();
    while (sfRenderWindow_isOpen(window->render_window)) {
        check_event(evt, window, &game);
        player_move(&game.player, game.time);
        sfRenderWindow_display(window->render_window);
        sfRenderWindow_clear(window->render_window, sfBlack);
        game.bg = draw_background(game.bg, window, game.time);
        draw_player(game.player, window);
        time_manager(&game.time);
    }
    destroy(game, window);
    return 0;
}