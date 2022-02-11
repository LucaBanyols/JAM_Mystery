/*
** EPITECH PROJECT, 2020
** sprite_fifth
** File description:
** create sprite for fifth stage
*/

#include "struct.h"
#include "hunter.h"
#include "my.h"

sfSprite *dracaufeu_2(sfSprite *dracaufeu, fifth *fi, sprites *sp)
{
    sfTexture *texture;

    fi->rect_d.left = 0;
    fi->rect_d.top = 0;
    fi->rect_d.width = 66;
    fi->rect_d.height = 47;
    texture = sfTexture_createFromFile("image/sprites/dracaufeu.png", NULL);
    if (!texture)
        return (NULL);
    dracaufeu = sfSprite_create();
    sfSprite_setTexture(dracaufeu, texture, sfTrue);
    sfSprite_setTextureRect(dracaufeu, fi->rect_d);
    sp->x = 0;
    sfSprite_setPosition(dracaufeu, (sfVector2f){2000, 700});
    return (dracaufeu);
}

sfSprite *red_2(sfSprite *red, fifth *fi)
{
    sfTexture *texture;

    fi->rect_r.left = 0;
    fi->rect_r.top = 0;
    fi->rect_r.width = 64;
    fi->rect_r.height = 48;
    texture = sfTexture_createFromFile("image/sprites/red.png", NULL);
    if (!texture)
        return (NULL);
    red = sfSprite_create();
    sfSprite_setTexture(red, texture, sfTrue);
    sfSprite_setTextureRect(red, fi->rect_r);
    sfSprite_setPosition(red, (sfVector2f){2000, 850});
    return (red);
}

sfSprite *gold_2(sfSprite *gold, fifth *fi)
{
    sfTexture *texture;

    fi->rect_g.left = 0;
    fi->rect_g.top = 0;
    fi->rect_g.width = 64;
    fi->rect_g.height = 48;
    texture = sfTexture_createFromFile("image/sprites/gold_r.png", NULL);
    if (!texture)
        return (NULL);
    gold = sfSprite_create();
    sfSprite_setTexture(gold, texture, sfTrue);
    sfSprite_setTextureRect(gold, fi->rect_g);
    sfSprite_setPosition(gold, (sfVector2f){-80, 850});
    return (gold);
}

sfSprite *ohoh(sfSprite *ohoh, fifth *fi, sprites *sp)
{
    sfTexture *texture;

    fi->rect_o.left = 0;
    fi->rect_o.top = 0;
    fi->rect_o.width = 62;
    fi->rect_o.height = 57;
    texture = sfTexture_createFromFile("image/sprites/ohoh_r.png", NULL);
    if (!texture)
        return (NULL);
    ohoh = sfSprite_create();
    sfSprite_setTexture(ohoh, texture, sfTrue);
    sfSprite_setTextureRect(ohoh, fi->rect_o);
    sp->x = 0;
    sfSprite_setPosition(ohoh, (sfVector2f){-80, 700});
    return (ohoh);
}
