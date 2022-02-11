/*
** EPITECH PROJECT, 2020
** move third
** File description:
** gestion of mouvement sprite
*/

#include "my.h"
#include "struct.h"
#include "hunter.h"

void move_latios(sprites *sp, global *glo, third *th)
{
    sfSprite_move(th->latios, (sfVector2f){sp->vitesse_2, 0});
    if (sfSprite_getPosition(th->latios).x < -80){
        sp->y = (rand() % 739);
        glo->vie -= 1;
        sfSprite_setPosition(th->latios, (sfVector2f){2250, sp->y});
    }
}

void move_latias(sprites *sp, global *glo, third *th)
{
    sfSprite_move(th->latias, (sfVector2f){sp->vitesse_1, 0});
    if (sfSprite_getPosition(th->latias).x < -80) {
        sp->y = (rand() % 739);
        glo->vie -= 1;
        sfSprite_setPosition(th->latias, (sfVector2f){2150, sp->y});
    }
}

void move_brice(sprites *sp, third *th)
{
    sfSprite_move(th->brice, (sfVector2f){sp->vitesse_2, 0});
    if (sfSprite_getPosition(th->brice).x < -80) {
        sfSprite_setPosition(th->brice, (sfVector2f){1990, 850});
    }
}

void move_third(sprites *sp, global *glo, third *th)
{
    move_latios(sp, glo, th);
    move_latias(sp, glo, th);
    move_brice(sp, th);
}
