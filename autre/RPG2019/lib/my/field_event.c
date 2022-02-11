/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** field_event
*/

#include "../../include/my.h"

sfVector2f fevent2(sfEvent ev, sfSprite* sp, sfVector2f pos)
{
    sfVector2f a = {560, 240};
    sfVector2f b = {960, 540};

    if (sfKeyboard_isKeyPressed(sfKeyRight) && pos.x < 1800 && ((pos.y <= a.y ||
        pos.y >= b.y) || (pos.y > a.y && pos.y < b.y)
        && (pos.x < a.x || pos.x >= b.x)))
        pos.x += 20;
    if (sfKeyboard_isKeyPressed(sfKeyLeft) && pos.x > 260 && ((pos.y <= a.y ||
        pos.y >= b.y) || (pos.y > a.y && pos.y < b.y)
        && (pos.x <= a.x || pos.x > b.x)))
        pos.x -= 20;
    return (pos);
}

sfVector2f fevent(sfEvent ev, sfSprite* sp, sfVector2f pos)
{
    sfVector2f a = {560, 240};
    sfVector2f b = {960, 540};

    if (sfKeyboard_isKeyPressed(sfKeyDown) && pos.y < 900 && ((pos.x <= a.x ||
        pos.x >= b.x) || (pos.x > a.x && pos.x < b.x)
        && (pos.y < a.y || pos.y >= b.y)))
        pos.y += 20;
    if (sfKeyboard_isKeyPressed(sfKeyUp) && pos.y > 40 && ((pos.x <= a.x ||
        pos.x >= b.x) || (pos.x > a.x && pos.x < b.x)
        && (pos.y <= a.y || pos.y > b.y)))
            pos.y -= 20;
    pos = fevent2(ev, sp, pos);
    return (pos);
}
