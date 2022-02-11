/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** sprite
*/

#include <SFML/Graphics.h>
#include "../../include/my.h"

sfSprite *link_sprite(sfSprite* sprite)
{
    sfTexture* texture;

    texture = sfTexture_createFromFile("images/house.png", NULL);
    if (!texture)
        return (NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    return (sprite);
}

sfSprite *house_sprite(sfSprite* sprite)
{
    sfTexture* texture;

    texture = sfTexture_createFromFile("images/house_2.png", NULL);
    if (!texture)
        return (NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    return (sprite);
}
