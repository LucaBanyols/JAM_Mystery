/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** fight sprites
*/

#include "../../include/my.h"

sfSprite *mewtwo_sprite(sfSprite* sprite)
{
    sfIntRect rect = {0, 0, 73, 86};
    sfTexture* texture;

    texture = sfTexture_createFromFile("images/mewtwo.png", NULL);
    if (!texture)
        return (NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, rect);
    return (sprite);
}

sfSprite *dracaufeu_sprite(sfSprite* sprite)
{
    sfIntRect rect = {0, 0, 135, 73};
    sfTexture* texture;

    texture = sfTexture_createFromFile("images/chizard.png", NULL);
    if (!texture)
        return (NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, rect);
    return (sprite);
}

sfSprite *pokeball(sfSprite* sprite)
{
    sfIntRect rect = {0, 0, 128, 128};
    sfTexture* texture;

    texture = sfTexture_createFromFile("images/honor.png", NULL);
    if (!texture)
        return (NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, rect);
    return (sprite);
}
