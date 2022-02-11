/*
** EPITECH PROJECT, 2020
** life
** File description:
** main fonction for life
*/

#include "my.h"
#include "struct.h"
#include "hunter.h"

void life_final(global *glo, sfRenderWindow *window, sfMusic *m)
{
    sfSprite_setPosition(glo->life, (sfVector2f){1350, 0});
    if (glo->vie == 4)
        glo->rect_l.top = 104;
    if (glo->vie == 3)
        glo->rect_l.top = 211;
    if (glo->vie == 2)
        glo->rect_l.top = 318;
    if (glo->vie == 1)
        glo->rect_l.top = 425;
    if (glo->vie == 0) {
        sfMusic_stop(m);
        win(glo, window);
    }
    sfSprite_setTextureRect(glo->life, glo->rect_l);
}

void life_gestion(global *glo, sfRenderWindow *window, sfMusic *m)
{
    sfSprite_setPosition(glo->life, (sfVector2f){1350, 0});
    if (glo->vie == 4)
        glo->rect_l.top = 104;
    if (glo->vie == 3)
        glo->rect_l.top = 211;
    if (glo->vie == 2)
        glo->rect_l.top = 318;
    if (glo->vie == 1)
        glo->rect_l.top = 425;
    if (glo->vie == 0) {
        sfMusic_stop(m);
        game_over(glo, window);
        }
    sfSprite_setTextureRect(glo->life, glo->rect_l);
}

