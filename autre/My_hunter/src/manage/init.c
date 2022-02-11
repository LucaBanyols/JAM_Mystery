/*
** EPITECH PROJECT, 2020
** init
** File description:
** initialization for struct
*/

#include "struct.h"
#include "hunter.h"
#include "my.h"

void fifth_init(sprites *sp, global *glo, fifth *fi)
{
    fi->music_5 = sfMusic_createFromFile("music/5.ogg");
    glo->spriteback = create_sprite_fifth(0);
    fi->red = red_2(fi->red, fi);
    fi->gold = gold_2(fi->gold, fi);
    fi->dracaufeu = dracaufeu_2(fi->dracaufeu, fi, sp);
    fi->ohoh = ohoh(fi->ohoh, fi, sp);
    fi->clock_r = sfClock_create();
    fi->clock_g = sfClock_create();
    fi->clock_o = sfClock_create();
    fi->clock_d = sfClock_create();
    sp->vitesse_1 = -1;
    sp->vitesse_2 = -1;
    sp->v_pause1 = -1;
    sp->v_pause2 = -1;
    sp->acc_1 = -0.2;
    sp->acc_2 = -0.2;
    sfMusic_play(fi->music_5);
}

void fourth_init(sprites *sp, global *glo, fourth *fo)
{
    fo->music_4 = sfMusic_createFromFile("music/4.ogg");
    glo->spriteback = create_sprite_fourth();
    fo->carchacrok = carchacrok();
    fo->arceus = arceus(fo->arceus, fo);
    fo->louka = louka(fo->louka, fo);
    fo->clock_lo = sfClock_create();
    fo->clock_a = sfClock_create();
    sp->vitesse_1 = -1;
    sp->vitesse_2 = -1;
    sp->v_pause1 = -1;
    sp->v_pause2 = -1;
    sp->acc_1 = -0.3;
    sp->acc_2 = -0.2;
    sfMusic_play(fo->music_4);
}

void third_init(sprites *sp, global *glo, third *th)
{
    th->music_3 = sfMusic_createFromFile("music/3.ogg");
    glo->spriteback = create_sprite_third();
    th->latias = latias();
    th->latios = latios();
    th->brice = brice(th->brice, th);
    th->clock_b = sfClock_create();
    sp->vitesse_1 = -1;
    sp->vitesse_2 = -1;
    sp->v_pause1 = -1;
    sp->v_pause2 = -1;
    sp->acc_1 = -0.4;
    sp->acc_2 = -0.3;
    sfMusic_play(th->music_3);
}

void second_init(sprites *sp, global *glo)
{
    sp->music_2 = sfMusic_createFromFile("music/2.ogg");
    glo->spriteback = create_sprite_second();
    sp->lugia = lugia(sp->lugia, glo);
    sp->gold = gold(sp->gold, glo);
    glo->clock_l = sfClock_create();
    glo->clock_g = sfClock_create();
    sp->vitesse_1 = -1;
    sp->vitesse_2 = -1;
    sp->v_pause1 = -1;
    sp->v_pause2 = -1;
    sp->acc_1 = -0.5;
    sp->acc_2 = -0.4;
    sfMusic_play(sp->music_2);
}

void first_init(sprites *sp, global *glo)
{
    glo->music = sfMusic_createFromFile("music/1.ogg");
    glo->spriteback = create_sprite_first();
    glo->life = life(glo->life, glo);
    sp->dracaufeu = dracaufeu(sp->dracaufeu, glo);
    sp->red = red(sp->red, glo);
    glo->clock_d = sfClock_create();
    glo->clock_r = sfClock_create();
    glo->score = 0;
    glo->vie = 5;
    sp->vitesse_1 = -1;
    sp->vitesse_2 = -1;
    sp->v_pause1 = -1;
    sp->v_pause2 = -1;
    sp->acc_1 = -0.6;
    sp->acc_2 = -0.5;
    sp->x = 0;
    sp->y = 0;
    sp->level = 1;
    sfMusic_play(glo->music);
}
