/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** fight gestion
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include "../../include/my.h"

void mewtwo(sfRenderWindow* window, sfEvent event, sfVector2f pos, sfMusic* M)
{
    sfSprite* back = fight_mewtwo(window);
    sfMusic* Music = mewtwo_cry();
    sfSprite* sprite = mewtwo_sprite(sprite);
    sfIntRect rect = {0, 0, 70, 86};
    sfClock *clock_a = sfClock_create();
    sfTime time_a;
    float seconds_a;

    while (sfRenderWindow_isOpen(window)){
        loop(window, back, M);
        time_a = sfClock_getElapsedTime(clock_a);
        seconds_a = time_a.microseconds / 1000000.0;
        rect = time(clock_a, time_a, seconds_a, rect);
        draw_sprite(window, sprite, rect);
        sfSprite_setPosition(sprite, pos);
        while (sfRenderWindow_pollEvent(window, &event)){
            event_anim(event, M, window, pos);
        }
    }
    destroy_funct(Music, window, sprite);
}

void dracaufeu(sfRenderWindow* window, sfEvent ev, sfVector2f pos, sfMusic* M)
{
    sfSprite* back = fight_dracaufeu(window);
    sfMusic* Music = dracaufeu_cry();
    sfSprite* sprite = dracaufeu_sprite(sprite);
    sfIntRect rect = {0, 0, 132, 73};
    sfClock *clock_a = sfClock_create();
    sfTime time_a;
    float seconds_a;

    while (sfRenderWindow_isOpen(window)){
        loop(window, back, M);
        time_a = sfClock_getElapsedTime(clock_a);
        seconds_a = time_a.microseconds / 1000000.0;
        rect = time2(clock_a, time_a, seconds_a, rect);
        draw_sprite(window, sprite, rect);
        sfSprite_setPosition(sprite, pos);
        while (sfRenderWindow_pollEvent(window, &ev)){
            event_anim_se(ev, M, window, pos);
        }
    }
    destroy_funct(Music, window, sprite);
}

void pikachu(sfRenderWindow* window, sfEvent event, sfVector2f pos, sfMusic* M)
{
    sfSprite* back = fight_pikachu(window);
    sfMusic* Music = pikachu_cry();

    while (sfRenderWindow_isOpen(window)){
        loop(window, back, M);
        while (sfRenderWindow_pollEvent(window, &event)){
            event_anim_se(event, M, window, pos);
        }
    }
    sfMusic_destroy(Music);
    sfRenderWindow_close(window);
}

void fight(sfRenderWindow* window, sfEvent event, sfVector2f pos)
{
    sfSprite* back = fight_background(window);
    sfMusic* Music = music_fight();

    while (sfRenderWindow_isOpen(window)){
        loop(window, back, Music);
        while (sfRenderWindow_pollEvent(window, &event)){
            event_fight(event, Music, window, pos);
        }
    }
    sfMusic_destroy(Music);
    sfRenderWindow_close(window);
}
