/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** house dialog box
*/

#include <SFML/Graphics.h>
#include "../../include/my.h"

sfSprite *house_dialog(sfSprite* sprite)
{
    sfTexture* texture;
    sfIntRect rect = {0, 0, 1000, 309};

    texture = sfTexture_createFromFile("images/dialog_sign.png", NULL);
    if (!texture)
        return (NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, rect);
    return (sprite);
}
