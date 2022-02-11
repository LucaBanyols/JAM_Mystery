/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** runner after link atk
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <stdlib.h>
#include "../../include/my.h"

void game_over_handl(sfRenderWindow* w, sfMusic* M, sfSprite* s, sfSprite* e)
{
    sfVector2f a = sfSprite_getPosition(s);
    sfVector2f b = {a.x + 197, a.y + 200};
    sfVector2f c = sfSprite_getPosition(e);
    sfVector2f d = {c.x + 128, c.y + 128};

    if (((a.x <= c.x && c.x <= b.x) && (a.y <= c.y && c.y <= b.y))
        || (a.x <= d.x && d.x <= b.x) && (a.y <= d.y && d.y <= b.y))
        game_over(w, M);
}

sfVector2f move_w(sfSprite *weapon, sfVector2f pos_w)
{
    pos_w.x -= 30;
    sfSprite_setPosition(weapon, pos_w);
    if (pos_w.x <= -200) {
        pos_w.x = 2100;
        pos_w.y = rand() % (0 + 1 + 900) - 0;
        sfSprite_setPosition(weapon, pos_w);
    }
    return (pos_w);
}

sfVector2f revent(sfRenderWindow* wi, sfEvent ev, sfSprite* sp, sfVector2f pos)
{
    if (sfKeyboard_isKeyPressed(sfKeyDown) && pos.y < 900)
        pos.y += 50;
    if (sfKeyboard_isKeyPressed(sfKeyUp) && pos.y > 0)
        pos.y -= 50;
    return (pos);
}

int score_runner(int count, sfVector2f pos)
{
    if (pos.x == 2010)
        count++;
    return (count);
}

void runner(sfRenderWindow* wind, sfEvent event, sfVector2f pos, sfMusic* M)
{
    sfSprite* back = runner_back(wind);
    sfSprite* sprite = bike_sprite(sprite);
    sfSprite* weapon = sword_sprite(sprite);
    sfVector2f pos_b = {0, 0};
    sfVector2f pos_w = {1920, 0};
    int count = 0;

    pos = init_pos(pos);
    while (sfRenderWindow_isOpen(wind)){
        pos_b = loop_r(wind, back, M, pos_b);
        set_sprite(wind, weapon, pos_w);
        set_sprite(wind, sprite, pos);
        pos_w = move_w(weapon, pos_w);
        if ((count = score_runner(count, pos_w)) == 10)
            fightb(wind, event, pos, M);
        game_over_handl(wind, M, sprite, weapon);
        while (sfRenderWindow_pollEvent(wind, &event))
            pos = revent(wind, event, sprite, pos);
    }
    destroy_h(wind, sprite);
}
