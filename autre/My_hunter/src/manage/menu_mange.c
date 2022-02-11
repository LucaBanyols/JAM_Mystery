/*
** EPITECH PROJECT, 2020
** menu_manage
** File description:
** mange menu
*/

#include "struct.h"
#include "hunter.h"
#include "my.h"

void manage_menu(sfRenderWindow *window, sfSprite *how, global *glo)
{
    sfEvent ev;

    while (sfRenderWindow_pollEvent(window, &ev)) {
        if (ev.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeySpace))
            sfRenderWindow_close(window);
        event_play(window, ev, glo);
        event_quit(window, ev, glo);
        event_how(window, ev, how, glo);
    }
}
