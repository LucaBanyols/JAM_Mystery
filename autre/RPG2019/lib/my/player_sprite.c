/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** player sprite gestion
*/

#include <SFML/Graphics.h>
#include "../../include/my.h"

sfSprite *player_sprite(sfSprite* sprite)
{
    sfIntRect rect = {0, 0, 64, 64};
    sfTexture* texture;

    texture = sfTexture_createFromFile("images/sprite.png", NULL);
    if (!texture)
        return (NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, rect);
    return (sprite);
}
