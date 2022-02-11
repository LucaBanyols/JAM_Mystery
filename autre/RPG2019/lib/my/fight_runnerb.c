/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** runner after link 2nd atk
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <stdlib.h>
#include "../../include/my.h"

sfVector2f move_w_b(sfSprite *weapon, sfVector2f pos_w)
{
    pos_w.x -= 45;
    sfSprite_setPosition(weapon, pos_w);
    if (pos_w.x <= -200) {
        pos_w.x = 2100;
        pos_w.y = rand() % (0 + 1 + 900) - 0;
        sfSprite_setPosition(weapon, pos_w);
    }
    return (pos_w);
}

void runnerb(sfRenderWindow* wind, sfEvent event, sfVector2f pos, sfMusic* M)
{
    sfSprite* back = runner_back(wind);
    sfSprite* sprite = bike_sprite(sprite);
    sfSprite* weapon = arrow_sprite(sprite);
    sfVector2f pos_b = {0, 0};
    sfVector2f pos_w = {1920, 0};
    int count = 0;

    pos = init_pos(pos);
    while (sfRenderWindow_isOpen(wind)){
        pos_b = loop_r(wind, back, M, pos_b);
        set_sprite(wind, weapon, pos_w);
        set_sprite(wind, sprite, pos);
        pos_w = move_w_b(weapon, pos_w);
        if ((count = score_runner(count, pos_w)) == 10)
            fight_win(wind, event, pos, M);
        game_over_handl(wind, M, sprite, weapon);
        while (sfRenderWindow_pollEvent(wind, &event))
            pos = revent(wind, event, sprite, pos);
    }
    destroy_h(wind, sprite);
}
