/*
** EPITECH PROJECT, 2020
** sprite_first
** File description:
** creation sprite for first stage
*/

#include "struct.h"
#include "hunter.h"
#include "my.h"

sfSprite *poke(void)
{
    sfTexture *texture;
    sfSprite *poke;
    sfIntRect rect = {0, 0, 64, 63};

    texture = sfTexture_createFromFile("image/sprites/poke.png", NULL);
    if (!texture)
        return (NULL);
    poke = sfSprite_create();
    sfSprite_setTexture(poke, texture, sfTrue);
    sfSprite_setTextureRect(poke, rect);
    return (poke);
}

sfSprite *life(sfSprite *life, global *glo)
{
    sfTexture *texture;

    glo->rect_l.left = 0;
    glo->rect_l.top = 0;
    glo->rect_l.width = 547;
    glo->rect_l.height = 84;
    texture = sfTexture_createFromFile("image/sprites/life.png", NULL);
    if (!texture)
        return (NULL);
    life = sfSprite_create();
    sfSprite_setTexture(life, texture, sfTrue);
    sfSprite_setTextureRect(life, glo->rect_l);
    return (life);
}

sfSprite *red(sfSprite *red, global *glo)
{
    sfTexture *texture;

    glo->rect_r.left = 0;
    glo->rect_r.top = 0;
    glo->rect_r.width = 64;
    glo->rect_r.height = 48;
    texture = sfTexture_createFromFile("image/sprites/red.png", NULL);
    if (!texture)
        return (NULL);
    red = sfSprite_create();
    sfSprite_setTexture(red, texture, sfTrue);
    sfSprite_setTextureRect(red, glo->rect_r);
    sfSprite_setPosition(red, (sfVector2f){2000, 850});
    return (red);
}

sfSprite *dracaufeu(sfSprite *dracaufeu, global *glo)
{
    sfTexture *texture;

    glo->rect_d.left = 0;
    glo->rect_d.top = 0;
    glo->rect_d.width = 66;
    glo->rect_d.height = 47;
    texture = sfTexture_createFromFile("image/sprites/dracaufeu.png", NULL);
    if (!texture)
        return (NULL);
    dracaufeu = sfSprite_create();
    sfSprite_setTexture(dracaufeu, texture, sfTrue);
    sfSprite_setTextureRect(dracaufeu, glo->rect_d);
    sfSprite_setPosition(dracaufeu, (sfVector2f){2000, 700});
    return (dracaufeu);
}
