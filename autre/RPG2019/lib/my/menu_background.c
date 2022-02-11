/*
** EPITECH PROJECT, 2018
** menu_background
** File description:
** Create Texture and Sprite for Menu Background.
*/

#include <SFML/Graphics.h>
#include "../../include/my.h"

sfSprite *menu_background(sfRenderWindow* window)
{
    sfTexture* MB_texture;
    sfSprite* Menu_Background;

    MB_texture = sfTexture_createFromFile("images/background.jpg", NULL);
    if (!MB_texture)
        return (NULL);
    Menu_Background = sfSprite_create();
    sfSprite_setTexture(Menu_Background, MB_texture, sfTrue);
    return (Menu_Background);
}

sfSprite *stat_background(sfRenderWindow* window)
{
    sfTexture* MB_texture;
    sfSprite* Menu_Background;

    MB_texture = sfTexture_createFromFile("images/stat.jpg", NULL);
    if (!MB_texture)
        return (NULL);
    Menu_Background = sfSprite_create();
    sfSprite_setTexture(Menu_Background, MB_texture, sfTrue);
    return (Menu_Background);
}

sfSprite *statb_background(sfRenderWindow* window)
{
    sfTexture* MB_texture;
    sfSprite* Menu_Background;

    MB_texture = sfTexture_createFromFile("images/stat_2.jpg", NULL);
    if (!MB_texture)
        return (NULL);
    Menu_Background = sfSprite_create();
    sfSprite_setTexture(Menu_Background, MB_texture, sfTrue);
    return (Menu_Background);
}

sfSprite *how1_background(sfRenderWindow* window)
{
    sfTexture* how_texture;
    sfSprite* how_Background;

    how_texture = sfTexture_createFromFile("images/how_house.jpg", NULL);
    if (!how_texture)
        return (NULL);
    how_Background = sfSprite_create();
    sfSprite_setTexture(how_Background, how_texture, sfTrue);
    return (how_Background);
}

sfSprite *how2_background(sfRenderWindow* window)
{
    sfTexture* how_texture;
    sfSprite* how_Background;

    how_texture = sfTexture_createFromFile("images/how_dial.jpg", NULL);
    if (!how_texture)
        return (NULL);
    how_Background = sfSprite_create();
    sfSprite_setTexture(how_Background, how_texture, sfTrue);
    return (how_Background);
}
