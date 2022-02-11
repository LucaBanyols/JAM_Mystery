/*
** EPITECH PROJECT, 2020
** move_fourth
** File description:
** gestion move sprite of fourth stage
*/

#include "my.h"
#include "struct.h"
#include "hunter.h"

void move_arceus(sprites *sp, global *glo, fourth *fo)
{
    sfSprite_move(fo->arceus, (sfVector2f){sp->vitesse_1*-1, sp->x});
    if (sfSprite_getPosition(fo->arceus).x > 1980 ||
        sfSprite_getPosition(fo->arceus).y < -80 ||
        sfSprite_getPosition(fo->arceus).y > 1160) {
        sp->y = (rand() % 739);
        sp->x = random_float(sp->x, 0.3);
        glo->vie -= 1;
        sfSprite_setPosition(fo->arceus, (sfVector2f){-60, sp->y});
    }
}

void move_carchacrok(sprites *sp, global *glo, fourth *fo)
{
    sfSprite_move(fo->carchacrok, (sfVector2f){sp->vitesse_2*-1, sp->x});
    if (sfSprite_getPosition(fo->carchacrok).x > 1980 ||
        sfSprite_getPosition(fo->carchacrok).y < -80 ||
        sfSprite_getPosition(fo->carchacrok).y > 1160) {
        sp->y = (rand() % 739);
        glo->vie -= 1;
        sfSprite_setPosition(fo->carchacrok, (sfVector2f){-80, sp->y});
    }
}

void move_louka(sprites *sp, fourth *fo)
{
    sfSprite_move(fo->louka, (sfVector2f){sp->vitesse_2*-1, 0});
    if (sfSprite_getPosition(fo->louka).x > 1980){
        sfSprite_setPosition(fo->louka, (sfVector2f){-80, 850});
    }
}

void move_fourth(sprites *sp, global *glo, fourth *fo)
{
    move_arceus(sp, glo, fo);
    move_carchacrok(sp, glo, fo);
    move_louka(sp, fo);
}
