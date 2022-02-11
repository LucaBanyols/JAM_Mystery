/*
** EPITECH PROJECT, 2020
** sprite_second
** File description:
** create sprite for second stage
*/

#include "struct.h"
#include "hunter.h"
#include "my.h"

sfSprite *gold(sfSprite *gold, global *glo)
{
    sfTexture *texture;

    glo->rect_g.left = 0;
    glo->rect_g.top = 0;
    glo->rect_g.width = 64;
    glo->rect_g.height = 48;
    texture = sfTexture_createFromFile("image/sprites/gold.png", NULL);
    if (!texture)
        return (NULL);
    gold = sfSprite_create();
    sfSprite_setTexture(gold, texture, sfTrue);
    sfSprite_setTextureRect(gold, glo->rect_g);
    sfSprite_setPosition(gold, (sfVector2f){1980, 850});
    return (gold);
}

sfSprite *lugia(sfSprite *lugia, global *glo)
{
    sfTexture *texture;

    glo->rect_lu.left = 0;
    glo->rect_lu.top = 0;
    glo->rect_lu.width = 62;
    glo->rect_lu.height = 57;
    texture = sfTexture_createFromFile("image/sprites/ohoh.png", NULL);
    if (!texture)
        return (NULL);
    lugia = sfSprite_create();
    sfSprite_setTexture(lugia, texture, sfTrue);
    sfSprite_setTextureRect(lugia, glo->rect_lu);
    sfSprite_setPosition(lugia, (sfVector2f){1980, 700});
    return (lugia);
}
