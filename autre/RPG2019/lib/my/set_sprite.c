/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** draw sprite and set position
*/

#include "../../include/my.h"

void set_sprite(sfRenderWindow* window, sfSprite* sprite, sfVector2f pos)
{
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfSprite_setPosition(sprite, pos);
}

void set_sprites(sfRenderWindow* w, sfSprite* l, sfSprite* d, sfVector2f pos2)
{
    sfVector2f pos_link = {560, 160};
    sfIntRect rect = {0, 0, 64, 64};

    sfRenderWindow_drawSprite(w, l, NULL);
    sfSprite_setPosition(l, pos_link);
    sfRenderWindow_drawSprite(w, d, NULL);
    sfSprite_setPosition(d, pos2);
}
