/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** link second atk
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include "../../include/my.h"

int la_b_event(sfRenderWindow* wind, sfEvent event, sfVector2f pos, sfMusic* m)
{
    if (sfKeyboard_isKeyPressed(sfKeyReturn)) {
        runnerb(wind, event, pos, m);
    }
}

sfSprite *la_b_background(sfRenderWindow* window)
{
    sfTexture* how_texture;
    sfSprite* how_background;

    how_texture = sfTexture_createFromFile("images/fight_link_atk_2.jpg", NULL);
    if (!how_texture)
        return (NULL);
    how_background = sfSprite_create();
    sfSprite_setTexture(how_background, how_texture, sfTrue);
    return (how_background);
}

int link_atk_b(sfRenderWindow* wind, sfEvent event, sfVector2f pos, sfMusic* m)
{
    sfSprite* menu = la_b_background(wind);

    while (sfRenderWindow_isOpen(wind)){
        loop(wind, menu, m);
        while (sfRenderWindow_pollEvent(wind, &event))
            la_b_event(wind, event, pos, m);
    }
    sfRenderWindow_close(wind);
}
