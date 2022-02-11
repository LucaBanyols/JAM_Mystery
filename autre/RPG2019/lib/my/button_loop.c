/*
** EPITECH PROJECT, 2019
** my_world
** File description:
** button sprite in menu pos gestion
*/

#include <SFML/Window.h>
#include "../../include/my.h"

int button_loop(sfRenderWindow* w, sfSprite* Play, sfSprite* Quit, sfSprite* H)
{
    sfVector2f pos1 = {0, 500};
    sfVector2f pos2 = {1250, 500};
    sfVector2f pos3 = {1550, 0};

    sfRenderWindow_drawSprite(w, Play, NULL);
    sfRenderWindow_drawSprite(w, Quit, NULL);
    sfRenderWindow_drawSprite(w, H, NULL);
    sfSprite_setPosition(Play, pos1);
    sfSprite_setPosition(Quit, pos2);
    sfSprite_setPosition(H, pos3);
    return (0);
}
