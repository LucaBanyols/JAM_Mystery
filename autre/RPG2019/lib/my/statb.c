/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** stat after fight
*/

#include "../../include/my.h"

int statb(sfRenderWindow* window, sfMusic* M, int i, sfVector2f pos)
{
    sfSprite* Menu = statb_background(window);
    sfSprite* Play = Splay(window);
    sfSprite* Reset = Sreset(window);
    sfSprite* Quit = Squit(window);
    sfEvent event;

    while (sfRenderWindow_isOpen(window)){
        loop(window, Menu, M);
        Sbutton_loop(window, Play, Quit, Reset);
        while (sfRenderWindow_pollEvent(window, &event)) {
            stat_play(window, event, Play, M);
            stat_reset(window, event, Reset, M);
            stat_quit(window, event, Quit, M);
            event_stat(M, window, pos, i);
        }
    }
    sfSprite_destroy(Reset);
    destroy_field(window, Menu, Play, Quit);
}
