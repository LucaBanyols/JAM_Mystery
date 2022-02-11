/*
** EPITECH PROJECT, 2020
** display
** File description:
** display sprite
*/

#include "struct.h"
#include "hunter.h"
#include "my.h"

void display_fourth(sfRenderWindow *window, global *glo, fourth *fo)
{
    display_window(window, glo, fo->music_4);
    sfRenderWindow_drawSprite(window, fo->arceus, NULL);
    sfRenderWindow_drawSprite(window, fo->louka, NULL);
    sfRenderWindow_drawSprite(window, fo->carchacrok, NULL);
    sfRenderWindow_drawSprite(window, glo->life, NULL);
}

void display_third(sfRenderWindow *window, global *glo, third *th)
{
    display_window(window, glo, th->music_3);
    sfRenderWindow_drawSprite(window, th->latias, NULL);
    sfRenderWindow_drawSprite(window, th->latios, NULL);
    sfRenderWindow_drawSprite(window, th->brice, NULL);
    sfRenderWindow_drawSprite(window, glo->life, NULL);
}

void display_poke(sfRenderWindow *window, global *glo)
{
    sfVector2f pos1 = {935, 580};

    sfRenderWindow_drawSprite(window, glo->poke, NULL);
    sfSprite_setPosition(glo->poke, pos1);
}

void display_second(sfRenderWindow *window, sprites *sp, global *glo)
{
    display_window(window, glo, sp->music_2);
    sfRenderWindow_drawSprite(window, sp->gold, NULL);
    sfRenderWindow_drawSprite(window, sp->lugia, NULL);
    sfRenderWindow_drawSprite(window, glo->life, NULL);
}

void display_first(sfRenderWindow *window, sprites *sp, global *glo)
{
    display_window(window, glo, glo->music);
    sfRenderWindow_drawSprite(window, sp->red, NULL);
    sfRenderWindow_drawSprite(window, sp->dracaufeu, NULL);
    sfRenderWindow_drawSprite(window, glo->life, NULL);
}
