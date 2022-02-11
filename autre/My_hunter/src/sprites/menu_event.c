/*
** EPITECH PROJECT, 2020
** menu_event
** File description:
** event for menu
*/

#include "my.h"
#include "hunter.h"
#include "struct.h"

void event_how(sfRenderWindow *win, sfEvent event, sfSprite *spr, global *glo)
{
    sfVector2f c = sfSprite_getPosition(spr);
    sfVector2f d = {c.x + 50, c.y + 50};
    sfVector2i mouse;

    mouse.x = sfMouse_getPositionRenderWindow(win).x;
    mouse.y = sfMouse_getPositionRenderWindow(win).y;
    if ((event.type == sfEvtClosed || mouse.x >= c.x) &&
                mouse.y >= c.y && mouse.x <= d.x && mouse.y <= d.y &&
        event.type == sfEvtMouseButtonPressed) {
        sfMusic_stop(glo->menu_music);
        how(win);
    }
}

void event_quit(sfRenderWindow* window, sfEvent event, global *glo)
{
    sfVector2f c = sfSprite_getPosition(glo->sprite_exit);
    sfVector2f d = {c.x + 670, c.y + 185};
    sfVector2i mouse;
    sfIntRect rect = {0, 0, 670, 185};

    mouse.x = sfMouse_getPositionRenderWindow(window).x;
    mouse.y = sfMouse_getPositionRenderWindow(window).y;
    if ((event.type == sfEvtClosed || mouse.x >= c.x) &&
        ((mouse.y >= c.y) && mouse.x <= d.x && mouse.y <= d.y)) {
        rect.left += 670;
        sfSprite_setTextureRect(glo->sprite_exit, rect);
        sfRenderWindow_drawSprite(window, glo->sprite_exit, NULL);
        if (event.type == sfEvtMouseButtonPressed
            || event.type == sfEvtClosed)
            sfRenderWindow_close(window);
    } if (mouse.x <= c.x || mouse.y <= c.y || mouse.x >= d.x
            || mouse.y >= d.y) {
        rect.left = 0;
        sfSprite_setTextureRect(glo->sprite_exit, rect);
        sfRenderWindow_drawSprite(window, glo->sprite_exit, NULL);
    }
}

void event_play(sfRenderWindow* window, sfEvent event, global *glo)
{
    sfVector2f c = sfSprite_getPosition(glo->sprite_play);
    sfVector2f d = {c.x + 670, c.y + 185};
    sfVector2i mouse;
    sfIntRect rect = {0, 0, 670, 185};

    mouse.x = sfMouse_getPositionRenderWindow(window).x;
    mouse.y = sfMouse_getPositionRenderWindow(window).y;
    if ((event.type == sfEvtClosed || mouse.x >= c.x) &&
        ((mouse.y >= c.y) && mouse.x <= d.x && mouse.y <= d.y)) {
        rect.left += 670;
        sfSprite_setTextureRect(glo->sprite_play, rect);
        sfRenderWindow_drawSprite(window, glo->sprite_play, NULL);
        if (event.type == sfEvtMouseButtonPressed
            || event.type == sfEvtClosed) {
            sfMusic_stop(glo->menu_music);
            first_stage(window, glo);
        }
    } if (mouse.x <= c.x || mouse.y <= c.y || mouse.x >= d.x
            || mouse.y >= d.y) {
        rect.left = 0;
        sfSprite_setTextureRect(glo->sprite_play, rect);
        sfRenderWindow_drawSprite(window, glo->sprite_play, NULL);
    }
}

void button_loop(sfRenderWindow* window, global *glo, sfSprite *how)
{
    sfVector2f pos1 = {190, 520};
    sfVector2f pos2 = {1065, 520};
    sfVector2f pos3 = {940, 440};

    sfRenderWindow_drawSprite(window, glo->sprite_exit, NULL);
    sfRenderWindow_drawSprite(window, glo->sprite_play, NULL);
    sfRenderWindow_drawSprite(window, how, NULL);
    sfSprite_setPosition(glo->sprite_play, pos1);
    sfSprite_setPosition(glo->sprite_exit, pos2);
    sfSprite_setPosition(how, pos3);
}
