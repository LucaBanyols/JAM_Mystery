/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** hunter bow period
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <stdlib.h>
#include "../../include/my.h"

sfVector2f speedb_se(sfRenderWindow* w, sfMusic* M, sfEvent e, sfVector2f pos)
{
    pos.x += 25;
    if (pos.x >= 1700)
        game_over(w, M);
    return (pos);
}

void hunterb_se(sfRenderWindow* wind, sfEvent ev, sfVector2f pos, sfMusic* M)
{
    sfSprite* back = hunter_back(wind);
    sfSprite* sprite = pokeball(sprite);
    int count = 0;

    pos = init_pos(pos);
    while (sfRenderWindow_isOpen(wind)){
        loop(wind, back, M);
        set_sprite(wind, sprite, pos);
        pos = speedb_se(wind, M, ev, pos);
        if (pos.x == -200)
            count++;
        if (count == 10)
            link_atk_b(wind, ev, pos, M);
        while (sfRenderWindow_pollEvent(wind, &ev))
            pos = hevent(wind, ev, sprite, pos);
    }
    destroy_h(wind, sprite);
}

sfVector2f speedb(sfRenderWindow* w, sfMusic* M, sfEvent e, sfVector2f pos)
{
    pos.x += 35;
    if (pos.x >= 1700)
        game_over(w, M);
    return (pos);
}

void hunterb(sfRenderWindow* wind, sfEvent event, sfVector2f pos, sfMusic* M)
{
    sfSprite* back = hunter_back(wind);
    sfSprite* sprite = pokeball(sprite);
    int count = 0;

    pos = init_pos(pos);
    while (sfRenderWindow_isOpen(wind)){
        loop(wind, back, M);
        set_sprite(wind, sprite, pos);
        pos = speedb(wind, M, event, pos);
        if (pos.x == -230)
            count++;
        if (count == 10)
            link_atk_b(wind, event, pos, M);
        while (sfRenderWindow_pollEvent(wind, &event))
            pos = hevent(wind, event, sprite, pos);
    }
    destroy_h(wind, sprite);
}
