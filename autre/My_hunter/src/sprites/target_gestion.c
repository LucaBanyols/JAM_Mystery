/*
** EPITECH PROJECT, 2020
** target_gestion
** File description:
** target_gestion
*/

#include "struct.h"
#include "hunter.h"
#include "my.h"

void target_fourth(sfSprite *s, global *glo, sprites *sp, sfRenderWindow *win)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (sfMouse_getPositionRenderWindow(win).x >
            sfSprite_getPosition(s).x
            && sfMouse_getPositionRenderWindow(win).x <
            sfSprite_getPosition(s).x
            +80 && sfMouse_getPositionRenderWindow(win).y >
            sfSprite_getPosition(s).y &&
            sfMouse_getPositionRenderWindow(win).y <
            sfSprite_getPosition(s).y + 80) {
            sp->y = (rand() % 751);
            sp->x = random_float(sp->x, 0.3);
            sp->vitesse_1 += sp->acc_1;
            sp->vitesse_2 += sp->acc_2;
            sp->v_pause1 += sp->acc_1;
            sp->v_pause2 += sp->acc_1;
            glo->score += 1;
            sfSprite_setPosition((s), (sfVector2f){-80, sp->y});
        }
    }
}

void target_second(sfSprite *s, global *glo, sprites *sp, sfRenderWindow *win)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (sfMouse_getPositionRenderWindow(win).x >
            sfSprite_getPosition(s).x
            && sfMouse_getPositionRenderWindow(win).x <
            sfSprite_getPosition(s).x
            +110 && sfMouse_getPositionRenderWindow(win).y >
            sfSprite_getPosition(s).y &&
            sfMouse_getPositionRenderWindow(win).y <
            sfSprite_getPosition(s).y + 110) {
            sp->y = (rand() % 751);
            sp->x = random_float(sp->x, 0.3);
            sp->vitesse_1 += sp->acc_1;
            sp->vitesse_2 += sp->acc_2;
            sp->v_pause1 += sp->acc_1;
            sp->v_pause2 += sp->acc_1;
            glo->score += 1;
            sfSprite_setPosition((s), (sfVector2f){1980, sp->y});
        }
    }
}

void target_gestion(sfSprite *s, global *glo, sprites *sp, sfRenderWindow *win)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (sfMouse_getPositionRenderWindow(win).x >
            sfSprite_getPosition(s).x
            && sfMouse_getPositionRenderWindow(win).x <
            sfSprite_getPosition(s).x
            +110 && sfMouse_getPositionRenderWindow(win).y >
            sfSprite_getPosition(s).y &&
            sfMouse_getPositionRenderWindow(win).y <
            sfSprite_getPosition(s).y + 110) {
            sp->y = (rand() % 751);
            sp->vitesse_1 += sp->acc_1;
            sp->vitesse_2 += sp->acc_2;
            sp->v_pause1 += sp->acc_1;
            sp->v_pause2 += sp->acc_1;
            glo->score += 1;
            sfSprite_setPosition((s), (sfVector2f){1980, sp->y});
        }
    }
}
