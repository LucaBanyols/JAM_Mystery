/*
** EPITECH PROJECT, 2020
** destroy
** File description:
** destroy element
*/

#include "my.h"
#include "hunter.h"
#include "struct.h"

void destroy_fourth(sfRenderWindow* win, fourth *fo)
{
    sfMusic_destroy(fo->music_4);
    sfSprite_destroy(fo->arceus);
    sfSprite_destroy(fo->louka);
    sfSprite_destroy(fo->carchacrok);
    sfRenderWindow_close(win);
}

void destroy_third(sfRenderWindow* win, third *th)
{
    sfMusic_destroy(th->music_3);
    sfSprite_destroy(th->latios);
    sfSprite_destroy(th->latias);
    sfSprite_destroy(th->brice);
    sfRenderWindow_close(win);
}

void destroy_second(sfRenderWindow* window, sprites *sp)
{
    sfMusic_destroy(sp->music_2);
    sfSprite_destroy(sp->gold);
    sfSprite_destroy(sp->lugia);
    sfRenderWindow_close(window);
}

void destroy_first(sfRenderWindow* window, global *glo, sprites *sp)
{
    sfSprite_destroy(sp->red);
    sfMusic_destroy(glo->music);
    sfSprite_destroy(sp->dracaufeu);
    sfRenderWindow_close(window);
}

void destroy_menu(sfRenderWindow* window, global *glo, sfSprite *how)
{
    sfMusic_destroy(glo->menu_music);
    sfSprite_destroy(glo->sprite_play);
    sfSprite_destroy(glo->sprite_exit);
    sfSprite_destroy(glo->poke);
    sfSprite_destroy(how);
    sfRenderWindow_close(window);
}
