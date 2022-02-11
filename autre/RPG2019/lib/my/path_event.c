/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** path events
*/

#include "../../include/my.h"

sfVector2f pevent2(sfEvent ev, sfSprite* sp, sfVector2f pos)
{
    if (sfKeyboard_isKeyPressed(sfKeyRight) && pos.x < 990)
        pos.x += 20;
    if (sfKeyboard_isKeyPressed(sfKeyLeft) && pos.x > 910)
        pos.x -= 20;
    return (pos);
}

sfVector2f pevent(sfEvent ev, sfSprite* sp, sfVector2f pos)
{
    sfIntRect rect = {0, 0, 64, 64};

    if (sfKeyboard_isKeyPressed(sfKeyDown) && pos.y < 930)
        pos.y += 20;
    if (sfKeyboard_isKeyPressed(sfKeyUp) && pos.y > 550)
        pos.y -= 20;
    pos = pevent2(ev, sp, pos);
    return (pos);
}
