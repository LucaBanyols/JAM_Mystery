/*
** EPITECH PROJECT, 2020
** sprite_third
** File description:
** create sprite for third stage
*/

#include "struct.h"
#include "hunter.h"
#include "my.h"

sfSprite *latios(void)
{
    sfTexture *texture;
    sfSprite *latios;
    sfIntRect rect = {0, 0, 49, 34};

    texture = sfTexture_createFromFile("image/sprites/latios.png", NULL);
    if (!texture)
        return (NULL);
    latios = sfSprite_create();
    sfSprite_setTexture(latios, texture, sfTrue);
    sfSprite_setTextureRect(latios, rect);
    sfSprite_setPosition(latios, (sfVector2f){2250, 700});
    return (latios);
}

sfSprite *latias(void)
{
    sfTexture *texture;
    sfSprite *latias;
    sfIntRect rect = {0, 0, 49, 34};

    texture = sfTexture_createFromFile("image/sprites/latias.png", NULL);
    if (!texture)
        return (NULL);
    latias = sfSprite_create();
    sfSprite_setTexture(latias, texture, sfTrue);
    sfSprite_setTextureRect(latias, rect);
    sfSprite_setPosition(latias, (sfVector2f){2150, 740});
    return (latias);
}

sfSprite *brice(sfSprite *brice, third *th)
{
    sfTexture *texture;

    th->rect_b.left = 0;
    th->rect_b.top = 0;
    th->rect_b.width = 48;
    th->rect_b.height = 47;
    texture = sfTexture_createFromFile("image/sprites/brice.png", NULL);
    if (!texture)
        return (NULL);
    brice = sfSprite_create();
    sfSprite_setTexture(brice, texture, sfTrue);
    sfSprite_setTextureRect(brice, th->rect_b);
    sfSprite_setPosition(brice, (sfVector2f){2200, 850});
    return (brice);
}
