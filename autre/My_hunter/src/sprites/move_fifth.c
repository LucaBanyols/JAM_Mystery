
/*
** EPITECH PROJECT, 2020
** move_fifth
** File description:
** move gestion for fifth stage
*/

#include "my.h"
#include "struct.h"
#include "hunter.h"

void move_ohoh(sprites *sp, global *glo, fifth *fi)
{
    sfSprite_move(fi->ohoh, (sfVector2f){sp->vitesse_1 * -1, sp->x});
    if (sfSprite_getPosition(fi->ohoh).x > 1980 ||
        sfSprite_getPosition(fi->ohoh).y < -80 ||
        sfSprite_getPosition(fi->ohoh).y > 1160) {
        sp->y = (rand() % 739);
        sp->x = random_float(sp->x, 0.3);
        glo->vie -= 1;
        sfSprite_setPosition(fi->ohoh, (sfVector2f){-80, sp->y});
    }
}

void move_gold_2(sprites *sp, fifth *fi)
{
    sfSprite_move(fi->gold, (sfVector2f){sp->vitesse_1 * -1 , 0});
    if (sfSprite_getPosition(fi->gold).x > 1980) {
        sfSprite_setPosition(fi->gold, (sfVector2f){-80, 850});
    }
}

void move_dracaufeu_2(sprites *sp, global *glo, fifth *fi)
{
    sfSprite_move(fi->dracaufeu, (sfVector2f){sp->vitesse_2, sp->x});
    if (sfSprite_getPosition(fi->dracaufeu).x < -80 ||
        sfSprite_getPosition(fi->dracaufeu).y < -80 ||
        sfSprite_getPosition(fi->dracaufeu).y > 1160) {
        sp->y = (rand() % 739);
        sp->x = random_float(sp->x, 0.3);
        glo->vie -= 1;
        sfSprite_setPosition(fi->dracaufeu, (sfVector2f){2000, sp->y});
    }
}

void move_red_2(sprites *sp, fifth *fi)
{
    sfSprite_move(fi->red, (sfVector2f){sp->vitesse_2, 0});
    if (sfSprite_getPosition(fi->red).x < -80) {
        sfSprite_setPosition(fi->red, (sfVector2f){2000, 850});
    }
}

void move_fifth(sprites *sp, global *glo, fifth *fi)
{
    move_ohoh(sp, glo, fi);
    move_dracaufeu_2(sp, glo, fi);
    move_red_2(sp, fi);
    move_gold_2(sp, fi);
}
