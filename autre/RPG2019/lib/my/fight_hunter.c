/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** hunter
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <stdlib.h>
#include "../../include/my.h"

sfVector2f hevent(sfRenderWindow* wi, sfEvent ev, sfSprite* sp, sfVector2f pos)
{
    sfVector2f a = sfSprite_getPosition(sp);
    sfVector2f b = {a.x + 128, a.y + 128};
    sfVector2i mouse;

    mouse.x = sfMouse_getPositionRenderWindow(wi).x;
    mouse.y = sfMouse_getPositionRenderWindow(wi).y;
    if (ev.type == sfEvtMouseButtonPressed) {
        if (mouse.x >= a.x && mouse.y >= a.y && mouse.x <= b.x
        && mouse.y <= b.y) {
            pos.x = -300;
            pos.y = rand() % (0 + 1 + 900) - 0;
            sfSprite_setPosition(sp, pos);
        }
    }
    return (pos);
}

sfVector2f speed(sfRenderWindow* w, sfMusic* M, sfEvent e, sfVector2f pos)
{
    pos.x += 10;
    if (pos.x >= 1700)
        game_over(w, M);
    return (pos);
}

sfSprite *hunter_back(sfRenderWindow* window)
{
    sfTexture* texture;
    sfSprite* background;

    texture = sfTexture_createFromFile("images/fight_hunter.jpg", NULL);
    if (!texture)
        return (NULL);
    background = sfSprite_create();
    sfSprite_setTexture(background, texture, sfTrue);
    return (background);
}

sfVector2f init_pos(sfVector2f pos)
{
    pos.x = 0;
    pos.y = 0;
    return (pos);
}

void hunter(sfRenderWindow* wind, sfEvent event, sfVector2f pos, sfMusic* M)
{
    sfSprite* back = hunter_back(wind);
    sfSprite* sprite = pokeball(sprite);
    int count = 0;

    pos = init_pos(pos);
    while (sfRenderWindow_isOpen(wind)){
        loop(wind, back, M);
        set_sprite(wind, sprite, pos);
        pos = speed(wind, M, event, pos);
        if (pos.x == -200)
            count++;
        if (count == 10)
            link_atk_a(wind, event, pos, M);
        while (sfRenderWindow_pollEvent(wind, &event))
            pos = hevent(wind, event, sprite, pos);
    }
    destroy_h(wind, sprite);
}
