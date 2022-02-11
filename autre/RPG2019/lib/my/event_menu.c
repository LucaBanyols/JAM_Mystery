/*
** EPITECH PROJECT, 2018
** event_menu
** File description:
** Manage event for menu.
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "../../include/my.h"

int draw_sprite(sfRenderWindow* window, sfSprite* s, sfIntRect rect)
{
    sfSprite_setTextureRect(s, rect);
    sfRenderWindow_drawSprite(window, s, NULL);
}

int event_play(sfRenderWindow* window, sfEvent event, sfSprite* s, sfMusic* MM)
{
    sfVector2f a = sfSprite_getPosition(s);
    sfVector2f b = {a.x + 670, a.y + 185};
    sfVector2i mouse;
    sfIntRect rect = {0, 0, 670, 185};

    mouse.x = sfMouse_getPositionRenderWindow(window).x;
    mouse.y = sfMouse_getPositionRenderWindow(window).y;
    if (mouse.x >= a.x && mouse.y >= a.y && mouse.x <= b.x && mouse.y <= b.y) {
        rect.left += 670;
        draw_sprite(window, s, rect);
        if (event.type == sfEvtMouseButtonPressed) {
            sfMusic_stop(MM);
            my_rpg(window, event);
        }
    } else if (mouse.x <= a.x || mouse.y <= a.y || mouse.x >= b.x
        || mouse.y >= b.y) {
        rect.left = 0;
        draw_sprite(window, s, rect);
    }
}

int event_quit(sfRenderWindow* window, sfEvent event, sfSprite* sprite)
{
    sfVector2f c = sfSprite_getPosition(sprite);
    sfVector2f d = {c.x + 670, c.y + 185};
    sfVector2i mouse;
    sfIntRect rect = {0, 0, 670, 185};

    mouse.x = sfMouse_getPositionRenderWindow(window).x;
    mouse.y = sfMouse_getPositionRenderWindow(window).y;
    if (event.type == sfEvtClosed || mouse.x >= c.x && mouse.y >= c.y
        && mouse.x <= d.x && mouse.y <= d.y) {
        rect.left += 670;
        draw_sprite(window, sprite, rect);
        if (event.type == sfEvtMouseButtonPressed) {
            sfRenderWindow_close(window);
        }
    } else if (mouse.x <= c.x || mouse.y <= c.y || mouse.x >= d.x
        || mouse.y >= d.y) {
        rect.left = 0;
        draw_sprite(window, sprite, rect);
    }
}

int event_how(sfRenderWindow* window, sfEvent event, sfSprite* sp, sfMusic* M)
{
    sfVector2f c = sfSprite_getPosition(sp);
    sfVector2f d = {c.x + 330, c.y + 160};
    sfVector2i mouse;
    sfIntRect rect = {0, 0, 330, 160};

    mouse.x = sfMouse_getPositionRenderWindow(window).x;
    mouse.y = sfMouse_getPositionRenderWindow(window).y;
    if (event.type == sfEvtClosed || mouse.x >= c.x && mouse.y >= c.y
        && mouse.x <= d.x && mouse.y <= d.y) {
        rect.left += 330;
        draw_sprite(window, sp, rect);
        if (event.type == sfEvtMouseButtonPressed) {
            how1(window, M);
        }
    } else if (mouse.x <= c.x || mouse.y <= c.y || mouse.x >= d.x
        || mouse.y >= d.y) {
        rect.left = 0;
        draw_sprite(window, sp, rect);
    }
}
