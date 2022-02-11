/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** clock gestion
*/

#include "../../include/my.h"

sfIntRect time(sfClock *clock_a, sfTime time_a, float seconds, sfIntRect rect)
{
    if (seconds > 0.08) {
        rect.left += 70;
        if (rect.left >= 280)
            rect.left -= 280;
        sfClock_restart(clock_a);
    }
    return (rect);
}

sfIntRect time2(sfClock *clock_a, sfTime time_a, float seconds, sfIntRect rect)
{
    if (seconds > 0.08) {
        rect.left += 132;
        if (rect.left >= 396)
            rect.left -= 396;
        sfClock_restart(clock_a);
    }
    return (rect);
}
