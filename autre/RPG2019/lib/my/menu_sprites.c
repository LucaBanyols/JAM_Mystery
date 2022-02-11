/*
** EPITECH PROJECT, 2019
** my_world
** File description:
** menu buttons' sprites
*/

#include <SFML/Graphics.h>
#include "../../include/my.h"

sfSprite *play(sfRenderWindow* window)
{
    sfTexture* play_texture;
    sfSprite* play;
    sfIntRect rect = {0, 0, 670, 185};

    play_texture = sfTexture_createFromFile("images/play.png", NULL);
    if (!play_texture)
        return (NULL);
    play = sfSprite_create();
    sfSprite_setTexture(play, play_texture, sfTrue);
    sfSprite_setTextureRect(play, rect);
    return (play);
}

sfSprite *quit(sfRenderWindow* window)
{
    sfTexture* quit_texture;
    sfSprite* quit;
    sfIntRect rect = {0, 0, 670, 185};

    quit_texture = sfTexture_createFromFile("images/exit.png", NULL);
    if (!quit_texture)
        return (NULL);
    quit = sfSprite_create();
    sfSprite_setTexture(quit, quit_texture, sfTrue);
    sfSprite_setTextureRect(quit, rect);
    return (quit);
}

sfSprite *how(sfRenderWindow* window)
{
    sfTexture* how_texture;
    sfSprite* how;
    sfIntRect rect = {0, 0, 330, 160};

    how_texture = sfTexture_createFromFile("images/how.png", NULL);
    if (!how_texture)
        return (NULL);
    how = sfSprite_create();
    sfSprite_setTexture(how, how_texture, sfTrue);
    sfSprite_setTextureRect(how, rect);
    return (how);
}
