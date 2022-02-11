/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** fight 2sd part gestion
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include "../../include/my.h"

void mewtwob(sfRenderWindow* window, sfEvent event, sfVector2f pos, sfMusic* M)
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
            event_animb(event, M, window, pos);
        }
    }
    destroy_funct(Music, window, sprite);
}

void dracaufeub(sfRenderWindow* window, sfEvent ev, sfVector2f pos, sfMusic* M)
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
            event_animb_se(ev, M, window, pos);
        }
    }
    destroy_funct(Music, window, sprite);
}

void pikachub(sfRenderWindow* window, sfEvent ev, sfVector2f pos, sfMusic* M)
{
    sfSprite* back = fight_pikachub(window);
    sfMusic* Music = pikachu_cry();

    while (sfRenderWindow_isOpen(window)){
        loop(window, back, M);
        while (sfRenderWindow_pollEvent(window, &ev)){
            event_animb(ev, M, window, pos);
        }
    }
    sfMusic_destroy(Music);
    sfRenderWindow_close(window);
}

sfSprite *fight_bow_background(sfRenderWindow* window)
{
    sfTexture* texture;
    sfSprite* background;

    texture = sfTexture_createFromFile("images/fight_bow.jpg", NULL);
    if (!texture)
        return (NULL);
    background = sfSprite_create();
    sfSprite_setTexture(background, texture, sfTrue);
    return (background);
}

void fightb(sfRenderWindow* window, sfEvent event, sfVector2f pos, sfMusic* m)
{
    sfSprite* back = fight_bow_background(window);

    pos.x = 1350;
    pos.y = 365;
    while (sfRenderWindow_isOpen(window)){
        loop(window, back, m);
        while (sfRenderWindow_pollEvent(window, &event)){
            event_atk_bow(event, m, window, pos);
        }
    }
    sfRenderWindow_close(window);
}
