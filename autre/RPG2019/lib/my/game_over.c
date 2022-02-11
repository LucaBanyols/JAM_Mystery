/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** game_over screen
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include "../../include/my.h"

int go_event(sfRenderWindow* wind, sfEvent event, sfMusic* m)
{
    sfVector2f pos = {700, 540};

    if (sfKeyboard_isKeyPressed(sfKeyReturn)) {
        field(wind, m, event, pos);
    }
}

sfSprite *go_background(sfRenderWindow* window)
{
    sfTexture* how_texture;
    sfSprite* how_background;

    how_texture = sfTexture_createFromFile("images/game_over.jpg", NULL);
    if (!how_texture)
        return (NULL);
    how_background = sfSprite_create();
    sfSprite_setTexture(how_background, how_texture, sfTrue);
    return (how_background);
}

int game_over(sfRenderWindow* wind, sfMusic* m)
{
    sfSprite* menu = go_background(wind);
    sfEvent event;

    while (sfRenderWindow_isOpen(wind)){
        loop(wind, menu, m);
        while (sfRenderWindow_pollEvent(wind, &event))
            go_event(wind, event, m);
    }
    sfRenderWindow_close(wind);
}
