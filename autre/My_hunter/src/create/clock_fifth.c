/*
** EPITECH PROJECT, 2020
** clock_fifht
** File description:
** clock gestion for fifth stage
*/

#include "my.h"
#include "struct.h"
#include "hunter.h"

sfIntRect clock_red_2(sfClock *clock_r, fifth *fi)
{
    sfTime time_a = sfClock_getElapsedTime(clock_r);
    float seconds_a = time_a.microseconds / 1000000.0;

    if (seconds_a > 0.1) {
        fi->rect_r.left += 64;
        if (fi->rect_r.left >= 256)
            fi->rect_r.left = 0;
        sfClock_restart(clock_r);
    }
    sfSprite_setTextureRect(fi->red, fi->rect_r);
    return (fi->rect_r);
}

sfIntRect clock_dracaufeu_2(sfClock *clock_d, fifth *fi)
{
    sfTime time_b = sfClock_getElapsedTime(clock_d);
    float seconds_b = time_b.microseconds / 1000000.0;

    if (seconds_b > 0.1) {
        fi->rect_d.left += 66;
        if (fi->rect_d.left >= 264)
            fi->rect_d.left = 0;
        sfClock_restart(clock_d);
    }
    sfSprite_setTextureRect(fi->dracaufeu, fi->rect_d);
    return (fi->rect_d);
}

sfIntRect clock_gold_2(sfClock *clock_g, fifth *fi)
{
    sfTime time_a = sfClock_getElapsedTime(clock_g);
    float seconds_a = time_a.microseconds / 1000000.0;

    if (seconds_a > 0.1) {
        fi->rect_g.left += 64;
        if (fi->rect_g.left >= 256)
            fi->rect_g.left = 0;
        sfClock_restart(clock_g);
    }
    sfSprite_setTextureRect(fi->gold, fi->rect_g);
    return (fi->rect_g);
}

sfIntRect clock_ohoh(sfClock *clock_o, fifth *fi)
{
    sfTime time_a = sfClock_getElapsedTime(clock_o);
    float seconds_a = time_a.microseconds / 1000000.0;

    if (seconds_a > 0.3) {
        fi->rect_o.left += 62;
        if (fi->rect_o.left >= 186)
            fi->rect_o.left = 0;
        sfClock_restart(clock_o);
    }
    sfSprite_setTextureRect(fi->ohoh, fi->rect_o);
    return (fi->rect_o);
}
