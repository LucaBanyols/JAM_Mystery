/*
** EPITECH PROJECT, 2018
** menu_loop
** File description:
** Do a loop for menu.
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "../../include/my.h"

int loop(sfRenderWindow* window, sfSprite* sprite, sfMusic* Music)
{
    sfRenderWindow_display(window);
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfMusic_setLoop(Music, sfTrue);
    return (0);
}

sfVector2f loop_r(sfRenderWindow* w, sfSprite* s, sfMusic* m, sfVector2f p)
{
    sfRenderWindow_display(w);
    sfRenderWindow_clear(w, sfBlack);
    sfMusic_setLoop(m, sfTrue);
    sfRenderWindow_drawSprite(w, s, NULL);
    sfSprite_setPosition(s, p);
    p.x -= 20;
    if (p.x <= -1920) {
        p.x = 0;
        sfSprite_setPosition(s, p);
    }
    return (p);
}
