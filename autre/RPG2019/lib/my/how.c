/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** how to play
*/

#include "../../include/my.h"

int how1(sfRenderWindow* window, sfMusic* Music)
{
    sfSprite* Menu = how1_background(window);
    sfEvent event;

    while (sfRenderWindow_isOpen(window)){
        loop(window, Menu, Music);
        while (sfRenderWindow_pollEvent(window, &event))
            event_how1(window, event, Music);
    }
    sfRenderWindow_close(window);
}

int how2(sfRenderWindow* window, sfMusic* Music)
{
    sfSprite* Menu = how2_background(window);
    sfEvent event;

    while (sfRenderWindow_isOpen(window)){
        loop(window, Menu, Music);
        while (sfRenderWindow_pollEvent(window, &event))
            event_how2(window, event, Music);
    }
    sfRenderWindow_close(window);
}
