/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** background
*/

#include <SFML/Graphics.h>
#include "../../include/my.h"

sfSprite *field_background(sfRenderWindow* window)
{
    sfTexture* texture;
    sfSprite* Background;

    texture = sfTexture_createFromFile("images/field.jpg", NULL);
    if (!texture)
        return (NULL);
    Background = sfSprite_create();
    sfSprite_setTexture(Background, texture, sfTrue);
    return (Background);
}
