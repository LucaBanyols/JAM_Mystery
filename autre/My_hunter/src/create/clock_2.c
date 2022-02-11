/*
** EPITECH PROJECT, 2020
** clock
** File description:
** rest of the fonction clock
*/

#include "my.h"
#include "struct.h"
#include "hunter.h"

sfIntRect clock_brice(sfClock *clock_b, third *th)
{
    sfTime time_a = sfClock_getElapsedTime(clock_b);
    float seconds_a = time_a.microseconds / 1000000.0;

    if (seconds_a > 0.1) {
        th->rect_b.left += 48;
        if (th->rect_b.left >= 192)
            th->rect_b.left = 0;
        sfClock_restart(clock_b);
    }
    sfSprite_setTextureRect(th->brice, th->rect_b);
    return (th->rect_b);
}

sfIntRect clock_arceus(sfClock *clock_a, fourth *fo)
{
    sfTime time_a = sfClock_getElapsedTime(clock_a);
    float seconds_a = time_a.microseconds / 1000000.0;

    if (seconds_a > 0.1) {
        fo->rect_a.top += 33;
        if (fo->rect_a.top >= 66)
            fo->rect_a.top = 0;
        sfClock_restart(clock_a);
    }
    sfSprite_setTextureRect(fo->arceus, fo->rect_a);
    return (fo->rect_a);
}

sfIntRect clock_louka(sfClock *clock_lo, fourth *fo)
{
    sfTime time_a = sfClock_getElapsedTime(clock_lo);
    float seconds_a = time_a.microseconds / 1000000.0;

    if (seconds_a > 0.1) {
        fo->rect_lo.left += 50;
        if (fo->rect_lo.left >= 200)
            fo->rect_lo.left = 0;
        sfClock_restart(clock_lo);
    }
    sfSprite_setTextureRect(fo->louka, fo->rect_lo);
    return (fo->rect_lo);
}
