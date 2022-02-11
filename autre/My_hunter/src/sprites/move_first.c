/*
** EPITECH PROJECT, 2020
** move_first
** File description:
** movement gestion for first stage
*/

#include "struct.h"
#include "hunter.h"
#include "my.h"

void move_dracaufeu(sprites *sp, global *glo)
{
    sfSprite_move(sp->dracaufeu, (sfVector2f){sp->vitesse_1, 0});
    if (sfSprite_getPosition(sp->dracaufeu).x < -80) {
        sp->y = (rand() % 739);
        glo->vie -= 1;
        sfSprite_setPosition(sp->dracaufeu, (sfVector2f){1980, sp->y});
    }
}

void move_red(sprites *sp)
{
    sfSprite_move(sp->red, (sfVector2f){sp->vitesse_2, 0});
    if (sfSprite_getPosition(sp->red).x < -80){
        sfSprite_setPosition(sp->red, (sfVector2f){1980, 850});
    }
}

void move_first(sprites *sp, global *glo)
{
    move_dracaufeu(sp, glo);
    move_red(sp);
}
