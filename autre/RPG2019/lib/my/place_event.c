/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** speed x2
*/

#include "../../include/my.h"

sfVector2f pfevent2(sfEvent ev, sfSprite* sp, sfVector2f pos)
{
    sfVector2f a = {560, 240};
    sfVector2f b = {960, 520};

    if (sfKeyboard_isKeyPressed(sfKeyRight) && pos.x < 1800 && ((pos.y <= a.y ||
        pos.y >= b.y) || (pos.y > a.y && pos.y < b.y)
        && (pos.x < a.x || pos.x >= b.x)))
        pos.x += 40;
    if (sfKeyboard_isKeyPressed(sfKeyLeft) && pos.x > 260 && ((pos.y <= a.y ||
        pos.y >= b.y) || (pos.y > a.y && pos.y < b.y)
        && (pos.x <= a.x || pos.x > b.x)))
        pos.x -= 40;
    return (pos);
}

sfVector2f pfevent(sfEvent ev, sfSprite* sp, sfVector2f pos)
{
    sfVector2f a = {560, 240};
    sfVector2f b = {960, 520};

    if (sfKeyboard_isKeyPressed(sfKeyDown) && pos.y < 900 && ((pos.x <= a.x ||
        pos.x >= b.x) || (pos.x > a.x && pos.x < b.x)
        && (pos.y < a.y || pos.y >= b.y)))
        pos.y += 40;
    if (sfKeyboard_isKeyPressed(sfKeyUp) && pos.y > 40 && ((pos.x <= a.x ||
        pos.x >= b.x) || (pos.x > a.x && pos.x < b.x)
        && (pos.y <= a.y || pos.y > b.y)))
            pos.y -= 40;
    pos = pfevent2(ev, sp, pos);
    return (pos);
}
