/*
** EPITECH PROJECT, 2020
** clock
** File description:
** clock gestion
*/

#include "my.h"
#include "struct.h"
#include "hunter.h"

sfIntRect clock_poke(sfClock *clock_p, global *glo, sfIntRect rect)
{
    sfTime time_a = sfClock_getElapsedTime(clock_p);
    float seconds_a = time_a.microseconds / 1000000.0;

    if (seconds_a > 0.1) {
        rect.left += 64;
        if (rect.left >= 768)
            rect.left = 0;
        sfClock_restart(clock_p);
    }
    sfSprite_setTextureRect(glo->poke, rect);
    return (rect);
}

sfIntRect clock_gold(sfClock *clock_g, global *glo, sprites *sp)
{
    sfTime time_a = sfClock_getElapsedTime(clock_g);
    float seconds_a = time_a.microseconds / 1000000.0;

    if (seconds_a > 0.1) {
        glo->rect_g.left += 64;
        if (glo->rect_g.left >= 256)
            glo->rect_g.left = 0;
        sfClock_restart(clock_g);
    }
    sfSprite_setTextureRect(sp->gold, glo->rect_g);
    return (glo->rect_g);
}

sfIntRect clock_lugia(sfClock *clock_lu, global *glo, sprites *sp)
{
    sfTime time_a = sfClock_getElapsedTime(clock_lu);
    float seconds_a = time_a.microseconds / 1000000.0;

    if (seconds_a > 0.3) {
        glo->rect_lu.left += 62;
        if (glo->rect_lu.left >= 186)
            glo->rect_lu.left = 0;
        sfClock_restart(clock_lu);
    }
    sfSprite_setTextureRect(sp->lugia, glo->rect_lu);
    return (glo->rect_lu);
}

sfIntRect clock_red(sfClock *clock_r, global *glo, sprites *sp)
{
    sfTime time_a = sfClock_getElapsedTime(clock_r);
    float seconds_a = time_a.microseconds / 1000000.0;

    if (seconds_a > 0.1) {
        glo->rect_r.left += 64;
        if (glo->rect_r.left >= 256)
            glo->rect_r.left = 0;
        sfClock_restart(clock_r);
    }
    sfSprite_setTextureRect(sp->red, glo->rect_r);
    return (glo->rect_r);
}

sfIntRect clock_dracaufeu(sfClock *clock_d, global *glo, sprites *sp)
{
    sfTime time_b = sfClock_getElapsedTime(clock_d);
    float seconds_b = time_b.microseconds / 1000000.0;

    if (seconds_b > 0.1) {
        glo->rect_d.left += 66;
        if (glo->rect_d.left >= 264)
            glo->rect_d.left = 0;
        sfClock_restart(clock_d);
    }
    sfSprite_setTextureRect(sp->dracaufeu, glo->rect_d);
    return (glo->rect_d);
}
