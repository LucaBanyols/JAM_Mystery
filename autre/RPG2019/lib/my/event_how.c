/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** how to play events
*/

#include "../../include/my.h"

int event_how1(sfRenderWindow* window, sfEvent event, sfMusic* Music)
{
    if (sfKeyboard_isKeyPressed(sfKeyRight))
        how2(window, Music);
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        sfMusic_stop(Music);
        menu(window);
    }
}

int event_how2(sfRenderWindow* window, sfEvent event, sfMusic* Music)
{
    if (sfKeyboard_isKeyPressed(sfKeyLeft))
        how1(window, Music);
    if (sfKeyboard_isKeyPressed(sfKeyRight) ||
        sfKeyboard_isKeyPressed(sfKeyEscape)) {
        sfMusic_stop(Music);
        menu(window);
    }
}
