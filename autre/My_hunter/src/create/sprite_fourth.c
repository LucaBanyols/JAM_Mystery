/*
** EPITECH PROJECT, 2020
** sprite_fourth
** File description:
** create sprite for fourth stage
*/

#include "struct.h"
#include "hunter.h"
#include "my.h"

sfSprite *carchacrok(void)
{
    sfTexture *texture;
    sfSprite *carchacrok;
    sfIntRect rect = {0, 0, 39, 31};

    texture = sfTexture_createFromFile("image/sprites/carchacrok.png", NULL);
    if (!texture)
        return (NULL);
    carchacrok = sfSprite_create();
    sfSprite_setTexture(carchacrok, texture, sfTrue);
    sfSprite_setTextureRect(carchacrok, rect);
    sfSprite_setPosition(carchacrok, (sfVector2f){-80, 700});
    return (carchacrok);
}

sfSprite *arceus(sfSprite *arceus, fourth *fo)
{
    sfTexture *texture;

    fo->rect_a.left = 0;
    fo->rect_a.top = 0;
    fo->rect_a.width = 35;
    fo->rect_a.height = 33;
    texture = sfTexture_createFromFile("image/sprites/arceus.png", NULL);
    if (!texture)
        return (NULL);
    arceus = sfSprite_create();
    sfSprite_setTexture(arceus, texture, sfTrue);
    sfSprite_setTextureRect(arceus, fo->rect_a);
    sfSprite_setPosition(arceus, (sfVector2f){-80, 600});
    return (arceus);
}

sfSprite *louka(sfSprite *louka, fourth *fo)
{
    sfTexture *texture;

    fo->rect_lo.left = 0;
    fo->rect_lo.top = 0;
    fo->rect_lo.width = 50;
    fo->rect_lo.height = 50;
    texture = sfTexture_createFromFile("image/sprites/louka.png", NULL);
    if (!texture)
        return (NULL);
    louka = sfSprite_create();
    sfSprite_setTexture(louka, texture, sfTrue);
    sfSprite_setTextureRect(louka, fo->rect_lo);
    sfSprite_setPosition(louka, (sfVector2f){-80, 850});
    return (louka);
}
