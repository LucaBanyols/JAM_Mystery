/*
** EPITECH PROJECT, 2018
** menu
** File description:
** Function that will allow us to go to menu.
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include "../../include/my.h"

int menu(sfRenderWindow* window)
{
    sfSprite* Menu = menu_background(window);
    sfSprite* Play = play(window);
    sfSprite* Quit = quit(window);
    sfSprite* How = how(window);
    sfMusic* MMusic = music_menu();
    sfEvent event;

    while (sfRenderWindow_isOpen(window)){
        loop(window, Menu, MMusic);
        button_loop(window, Play, Quit, How);
        while (sfRenderWindow_pollEvent(window, &event)) {
            event_play(window, event, Play, MMusic);
            event_quit(window, event, Quit);
            event_how(window, event, How, MMusic);
        }
    }
    sfSprite_destroy(How);
    destroy_functs(MMusic, window, Play, Quit);
}
