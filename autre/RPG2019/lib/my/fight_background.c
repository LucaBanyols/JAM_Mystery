/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** fight background
*/

#include <SFML/Graphics.h>
#include "../../include/my.h"

sfSprite *fight_mewtwo(sfRenderWindow* window)
{
    sfTexture* texture;
    sfSprite* Background;

    texture = sfTexture_createFromFile("images/fight_mewtwo.jpg", NULL);
    if (!texture)
        return (NULL);
    Background = sfSprite_create();
    sfSprite_setTexture(Background, texture, sfTrue);
    return (Background);
}

sfSprite *fight_dracaufeu(sfRenderWindow* window)
{
    sfTexture* texture;
    sfSprite* Background;

    texture = sfTexture_createFromFile("images/fight_chizard.jpg", NULL);
    if (!texture)
        return (NULL);
    Background = sfSprite_create();
    sfSprite_setTexture(Background, texture, sfTrue);
    return (Background);
}

sfSprite *fight_background(sfRenderWindow* window)
{
    sfTexture* texture;
    sfSprite* Background;

    texture = sfTexture_createFromFile("images/fight.jpg", NULL);
    if (!texture)
        return (NULL);
    Background = sfSprite_create();
    sfSprite_setTexture(Background, texture, sfTrue);
    return (Background);
}

sfSprite *runner_back(sfRenderWindow* window)
{
    sfTexture* texture;
    sfSprite* sprite;
    sfIntRect rect = {0, 0, 3840, 1080};

    texture = sfTexture_createFromFile("images/fight_runner.jpg", NULL);
    if (!texture)
        return (NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, rect);
    return (sprite);
}
