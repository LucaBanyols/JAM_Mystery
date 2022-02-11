/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** runner sprites
*/

#include "../../include/my.h"

sfSprite *bike_sprite(sfSprite* bike)
{
    sfIntRect rect = {0, 0, 200, 160};
    sfTexture* texture;

    texture = sfTexture_createFromFile("images/bike.png", NULL);
    if (!texture)
        return (NULL);
    bike = sfSprite_create();
    sfSprite_setTexture(bike, texture, sfTrue);
    sfSprite_setTextureRect(bike, rect);
    return (bike);
}

sfSprite *sword_sprite(sfSprite* sprite)
{
    sfIntRect rect = {0, 0, 128, 128};
    sfTexture* texture;

    texture = sfTexture_createFromFile("images/mastersword.png", NULL);
    if (!texture)
        return (NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, rect);
    return (sprite);
}

sfSprite *arrow_sprite(sfSprite* sprite)
{
    sfIntRect rect = {0, 0, 128, 128};
    sfTexture* texture;

    texture = sfTexture_createFromFile("images/arrow.png", NULL);
    if (!texture)
        return (NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, rect);
    return (sprite);
}
