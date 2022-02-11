/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** stat_sprites
*/

#include <SFML/Graphics.h>
#include "../../include/my.h"

sfSprite *Splay(sfRenderWindow* window)
{
    sfTexture* play_texture;
    sfSprite* play;
    sfIntRect rect = {0, 0, 250, 69};

    play_texture = sfTexture_createFromFile("images/Smenu.png", NULL);
    if (!play_texture)
        return (NULL);
    play = sfSprite_create();
    sfSprite_setTexture(play, play_texture, sfTrue);
    sfSprite_setTextureRect(play, rect);
    return (play);
}

sfSprite *Squit(sfRenderWindow* window)
{
    sfTexture* quit_texture;
    sfSprite* quit;
    sfIntRect rect = {0, 0, 250, 69};

    quit_texture = sfTexture_createFromFile("images/Sexit.png", NULL);
    if (!quit_texture)
        return (NULL);
    quit = sfSprite_create();
    sfSprite_setTexture(quit, quit_texture, sfTrue);
    sfSprite_setTextureRect(quit, rect);
    return (quit);
}

sfSprite *Sreset(sfRenderWindow* window)
{
    sfTexture* quit_texture;
    sfSprite* quit;
    sfIntRect rect = {0, 0, 250, 69};

    quit_texture = sfTexture_createFromFile("images/Sreset.png", NULL);
    if (!quit_texture)
        return (NULL);
    quit = sfSprite_create();
    sfSprite_setTexture(quit, quit_texture, sfTrue);
    sfSprite_setTextureRect(quit, rect);
    return (quit);
}
