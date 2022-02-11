/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** pikachu backgrounds
*/

#include <SFML/Graphics.h>
#include "../../include/my.h"

sfSprite *fight_pikachub(sfRenderWindow* window)
{
    sfTexture* texture;
    sfSprite* Background;

    texture = sfTexture_createFromFile("images/fight_pikachu.jpg", NULL);
    if (!texture)
        return (NULL);
    Background = sfSprite_create();
    sfSprite_setTexture(Background, texture, sfTrue);
    return (Background);
}

sfSprite *fight_pikachu(sfRenderWindow* window)
{
    sfTexture* texture;
    sfSprite* Background;

    texture = sfTexture_createFromFile("images/fight_pikachu_2.jpg", NULL);
    if (!texture)
        return (NULL);
    Background = sfSprite_create();
    sfSprite_setTexture(Background, texture, sfTrue);
    return (Background);
}
