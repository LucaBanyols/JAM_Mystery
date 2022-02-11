/*
** EPITECH PROJECT, 2020
** move_second
** File description:
** move sprite gestion
*/

#include "struct.h"
#include "hunter.h"
#include "my.h"

void move_lugia(sprites *sp, global *glo)
{
    sfSprite_move(sp->lugia, (sfVector2f){sp->vitesse_1, sp->x});
    if (sfSprite_getPosition(sp->lugia).x < -80 ||
        sfSprite_getPosition(sp->lugia).y < -80 ||
        sfSprite_getPosition(sp->lugia).y > 1160) {
        sp->y = (rand() % 739);
        sp->x = random_float(sp->x, 0.3);
        glo->vie -= 1;
        sfSprite_setPosition(sp->lugia, (sfVector2f){1980, sp->y});
    }
}

void move_gold(sprites *sp)
{
    sfSprite_move(sp->gold, (sfVector2f){sp->vitesse_2, 0});
    if (sfSprite_getPosition(sp->gold).x < -80){
        sfSprite_setPosition(sp->gold, (sfVector2f){1980, 850});
    }
}

void move_second(sprites *sp, global *glo)
{
    move_lugia(sp, glo);
    move_gold(sp);
}
