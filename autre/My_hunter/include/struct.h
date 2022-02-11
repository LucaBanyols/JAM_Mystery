/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** hunter
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>


#ifndef STRUCT_JEU_H
#define STRUCT_JEU_H

typedef struct global global;
struct global
{
    sfSprite *spriteback;
    sfSprite *sprite_play;
    sfSprite *sprite_exit;
    sfSprite *life;
    sfSprite *poke;
    sfMusic *music;
    sfMusic *menu_music;
    sfIntRect rect_d;
    sfIntRect rect_r;
    sfIntRect rect_l;
    sfIntRect rect_lu;
    sfIntRect rect_g;
    int money;
    int score;
    int vie;
    sfClock *clock_d;
    sfClock *clock_r;
    sfClock *clock_l;
    sfClock *clock_g;
};

typedef struct sprites sprites;
struct sprites
{
    sfMusic *music_2;
    sfSprite *red;
    sfSprite *dracaufeu;
    sfSprite *gold;
    sfSprite *lugia;
    float vitesse_1;
    float vitesse_2;
    float v_pause1;
    float v_pause2;
    float acc_1;
    float acc_2;
    int x;
    int level;
    float y;
};

typedef struct third third;
struct third
{
    sfMusic *music_3;
    sfSprite *latias;
    sfSprite *latios;
    sfSprite *brice;
    sfIntRect rect_b;
    sfClock *clock_b;
};

typedef struct fourth fourth;
struct fourth
{
    sfMusic *music_4;
    sfSprite *arceus;
    sfSprite *carchacrok;
    sfSprite *louka;
    sfIntRect rect_lo;
    sfClock *clock_lo;
    sfIntRect rect_a;
    sfClock *clock_a;
};

typedef struct fifth fifth;
struct fifth
{
    sfMusic *music_5;
    sfSprite *red;
    sfSprite *gold;
    sfSprite *dracaufeu;
    sfSprite *ohoh;
    sfIntRect rect_r;
    sfIntRect rect_g;
    sfIntRect rect_d;
    sfIntRect rect_o;
    sfClock *clock_r;
    sfClock *clock_g;
    sfClock *clock_d;
    sfClock *clock_o;
};

#endif
