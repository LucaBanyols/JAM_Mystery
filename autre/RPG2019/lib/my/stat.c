/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** statistics menu
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include "../../include/my.h"

int stat(sfRenderWindow* window, sfMusic* M, int i, sfVector2f pos)
{
    sfSprite* Menu = stat_background(window);
    sfSprite* Play = Splay(window);
    sfSprite* Reset = Sreset(window);
    sfSprite* Quit = Squit(window);
    sfEvent event;

    while (sfRenderWindow_isOpen(window)){
        loop(window, Menu, M);
        Sbutton_loop(window, Play, Quit, Reset);
        while (sfRenderWindow_pollEvent(window, &event)) {
            stat_play(window, event, Play, M);
            stat_reset(window, event, Reset, M);
            stat_quit(window, event, Quit, M);
            event_stat(M, window, pos, i);
        }
    }
    sfSprite_destroy(Reset);
    destroy_field(window, Menu, Play, Quit);
}

void Sbutton_loop(sfRenderWindow* wind, sfSprite* P, sfSprite* Q, sfSprite* R)
{
    sfVector2f pos1 = {1150, 320};
    sfVector2f pos2 = {1450, 320};
    sfVector2f pos3 = {1300, 960};

    sfRenderWindow_drawSprite(wind, P, NULL);
    sfRenderWindow_drawSprite(wind, Q, NULL);
    sfRenderWindow_drawSprite(wind, R, NULL);
    sfSprite_setPosition(P, pos1);
    sfSprite_setPosition(Q, pos2);
    sfSprite_setPosition(R, pos3);
}

int stat_reset(sfRenderWindow* window, sfEvent ev, sfSprite* sp, sfMusic* M)
{
    sfVector2f a = sfSprite_getPosition(sp);
    sfVector2f b = {a.x + 250, a.y + 69};
    sfVector2i mouse = set_mouse_pos(window, mouse);
    sfIntRect rect = {0, 0, 250, 69};

    if (mouse.x >= a.x && mouse.y >= a.y && mouse.x <= b.x && mouse.y <= b.y) {
        rect.left = 250;
        draw_sprite(window, sp, rect);
        if (ev.type == sfEvtMouseButtonPressed) {
            rect.left = 500;
            draw_sprite(window, sp, rect);
            sfMusic_stop(M);
            my_rpg(window, ev);
        }
    } else if (mouse.x <= a.x || mouse.y <= a.y || mouse.x >= b.x
        || mouse.y >= b.y) {
        rect.left = 0;
        draw_sprite(window, sp, rect);
    }
}

int stat_quit(sfRenderWindow* window, sfEvent ev, sfSprite* sprite, sfMusic* M)
{
    sfVector2f c = sfSprite_getPosition(sprite);
    sfVector2f d = {c.x + 250, c.y + 69};
    sfVector2i mouse = set_mouse_pos(window, mouse);
    sfIntRect rect = {0, 0, 250, 69};

    if (ev.type == sfEvtClosed || mouse.x >= c.x && mouse.y >= c.y
        && mouse.x <= d.x && mouse.y <= d.y) {
        rect.left = 250;
        draw_sprite(window, sprite, rect);
        if (ev.type == sfEvtMouseButtonPressed) {
            rect.left = 500;
            draw_sprite(window, sprite, rect);
            sfRenderWindow_close(window);
        }
    } else if (mouse.x <= c.x || mouse.y <= c.y || mouse.x >= d.x
        || mouse.y >= d.y) {
        rect.left = 0;
        draw_sprite(window, sprite, rect);
    }
}

int stat_play(sfRenderWindow* window, sfEvent event, sfSprite* s, sfMusic* MM)
{
    sfVector2f c = sfSprite_getPosition(s);
    sfVector2f d = {c.x + 250, c.y + 69};
    sfVector2i mouse = set_mouse_pos(window, mouse);
    sfIntRect rect = {0, 0, 250, 69};

    if (event.type == sfEvtClosed || mouse.x >= c.x && mouse.y >= c.y
        && mouse.x <= d.x && mouse.y <= d.y) {
        rect.left = 250;
        draw_sprite(window, s, rect);
        if (event.type == sfEvtMouseButtonPressed) {
            rect.left = 500;
            draw_sprite(window, s, rect);
            sfMusic_stop(MM);
            menu(window);
        }
    } else if (mouse.x <= c.x || mouse.y <= c.y || mouse.x >= d.x
        || mouse.y >= d.y) {
        rect.left = 0;
        draw_sprite(window, s, rect);
    }
}
