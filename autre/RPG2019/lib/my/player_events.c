/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** player events
*/

#include "../../include/my.h"

sfIntRect r_event2(sfRenderWindow* w, sfEvent ev, sfSprite* sp, sfIntRect rect)
{
    if (sfKeyboard_isKeyPressed(sfKeyRight)) {
        if (rect.top != 128)
            rect.top = 128;
        rect.left += 64;
        if (rect.left >= 256)
            rect.left = 0;
        draw_sprite(w, sp, rect);
    }
    if (sfKeyboard_isKeyPressed(sfKeyLeft))
        if (rect.top != 64)
            rect.top = 64;
        rect.left += 64;
        if (rect.left >= 256)
            rect.left = 0;
        draw_sprite(w, sp, rect);
    return (rect);
}
sfIntRect r_event(sfRenderWindow* w, sfEvent ev, sfSprite* sp, sfIntRect rect)
{
    if (sfKeyboard_isKeyPressed(sfKeyDown)) {
        if (rect.top != 0)
            rect.top = 0;
        rect.left += 64;
        if (rect.left >= 256)
            rect.left = 0;
        draw_sprite(w, sp, rect);
    }
    if (sfKeyboard_isKeyPressed(sfKeyUp)) {
        if (rect.top != 192)
            rect.top = 192;
        rect.left += 64;
        if (rect.left >= 256)
            rect.left = 0;
        draw_sprite(w, sp, rect);
    }
    rect = r_event2(w, ev, sp, rect);
    return (rect);
}

sfVector2f p_event2(sfEvent ev, sfSprite* sp, sfVector2f pos)
{
    if (sfKeyboard_isKeyPressed(sfKeyRight) && pos.x < 1250)
        pos.x += 20;
    if (sfKeyboard_isKeyPressed(sfKeyLeft) && pos.x > 200)
        pos.x -= 20;
    return (pos);
}

sfVector2f p_event(sfEvent ev, sfSprite* sp, sfVector2f pos)
{
    sfIntRect rect = {0, 0, 64, 64};

    if (sfKeyboard_isKeyPressed(sfKeyDown) && pos.y < 900)
        pos.y += 20;
    if (sfKeyboard_isKeyPressed(sfKeyUp) && pos.y > 450)
        pos.y -= 20;
    pos = p_event2(ev, sp, pos);
    return (pos);
}
