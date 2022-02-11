/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** super effective hunter
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include "../../include/my.h"

sfVector2f speed_se(sfRenderWindow* w, sfMusic* M, sfEvent e, sfVector2f pos)
{
    pos.x += 15;
    if (pos.x >= 1700)
        game_over(w, M);
    return (pos);
}

void hunter_se(sfRenderWindow* wind, sfEvent event, sfVector2f pos, sfMusic* M)
{
    sfSprite* back = hunter_back(wind);
    sfSprite* sprite = pokeball(sprite);
    int count = 0;

    pos = init_pos(pos);
    while (sfRenderWindow_isOpen(wind)){
        loop(wind, back, M);
        set_sprite(wind, sprite, pos);
        pos = speed_se(wind, M, event, pos);
        if (pos.x == -210)
            count++;
        if (count == 10)
            link_atk_a(wind, event, pos, M);
        while (sfRenderWindow_pollEvent(wind, &event))
            pos = hevent(wind, event, sprite, pos);
    }
    destroy_h(wind, sprite);
}
