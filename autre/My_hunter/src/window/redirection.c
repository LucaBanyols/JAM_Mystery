/*
** EPITECH PROJECT, 2020
** redirection
** File description:
** switch window gestion
*/

#include "my.h"
#include "hunter.h"
#include "struct.h"

void bonus(global *glo)
{
    if (glo->score == 240)
        glo->spriteback = create_sprite_fifth(1);
    if (glo->score == 270)
        glo->spriteback = create_sprite_fifth(2);
    if (glo->score == 300)
        glo->spriteback = create_sprite_fifth(3);
    if (glo->score == 310)
        glo->spriteback = create_sprite_fifth(4);
}

void redirection_4(sfRenderWindow *win, global *glo, sprites *sp, fourth *fo)
{
    if (glo->score >= 210) {
        sfMusic_stop(fo->music_4);
        sp->level += 1;
        fifth_stage(win, glo, sp);
    }
}

void redirection_3(sfRenderWindow *win, global *glo, sprites *sp, third *th)
{
    if (glo->score >= 160) {
        sfMusic_stop(th->music_3);
        sp->level += 1;
        fourth_stage(win, glo, sp);
    }
}

void redirection_2(sfRenderWindow *win, global *glo, sprites *sp)
{
    if (glo->score >= 100) {
        sfMusic_stop(sp->music_2);
        sp->level += 1;
        third_stage(win, glo, sp);
    }
}

void redirection(sfRenderWindow *win, global *glo, sprites *sp)
{
    if (glo->score >= 50) {
        sfMusic_stop(glo->music);
        sp->level += 1;
        second_stage(win, glo, sp);
    }
}
