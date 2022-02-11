/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** link first atk
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include "../../include/my.h"

int la_a_event(sfRenderWindow* wind, sfEvent event, sfVector2f pos, sfMusic* m)
{
    if (sfKeyboard_isKeyPressed(sfKeyReturn)) {
        runner(wind, event, pos, m);
    }
}

sfSprite *la_a_background(sfRenderWindow* window)
{
    sfTexture* how_texture;
    sfSprite* how_background;

    how_texture = sfTexture_createFromFile("images/fight_link_atk.jpg", NULL);
    if (!how_texture)
        return (NULL);
    how_background = sfSprite_create();
    sfSprite_setTexture(how_background, how_texture, sfTrue);
    return (how_background);
}

int link_atk_a(sfRenderWindow* wind, sfEvent event, sfVector2f pos, sfMusic* m)
{
    sfSprite* menu = la_a_background(wind);

    while (sfRenderWindow_isOpen(wind)){
        loop(wind, menu, m);
        while (sfRenderWindow_pollEvent(wind, &event))
            la_a_event(wind, event, pos, m);
    }
    sfRenderWindow_close(wind);
}
