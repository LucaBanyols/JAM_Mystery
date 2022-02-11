/*
** EPITECH PROJECT, 2019
** My_World
** File description:
** Project a 3d-dimensional into a 2d-dimensional one.
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include "include/my.h"

void field(sfRenderWindow* window, sfMusic* M, sfEvent event, sfVector2f pos)
{
    sfSprite* back = field_background(window);
    sfSprite* sprite = player_sprite(sprite);
    sfSprite* link = link_sprite(link);
    sfSprite* dialog = dialog_box(dialog);
    sfVector2f pos2 = {2000, 1100};
    sfIntRect rect = {0, 0, 64, 64};

    while (sfRenderWindow_isOpen(window)){
        loop(window, back, M);
        set_sprite(window, sprite, pos);
        set_sprites(window, link, dialog, pos2);
        while (sfRenderWindow_pollEvent(window, &event)){
            pos = fevent(event, sprite, pos);
            rect = r_event(window, event, sprite, rect);
            pos2 = event_box(rect, dialog, pos, window);
            event_field(event, M, window, pos);
        }
    }
    destroy_field(window, sprite, link, dialog);
}

void path(sfRenderWindow* window, sfEvent event, sfVector2f pos)
{
    sfSprite* back = path_background(window);
    sfSprite* sprite = player_sprite(sprite);
    sfMusic* Music = music_path();
    sfIntRect rect = {0, 0, 64, 64};

    while (sfRenderWindow_isOpen(window)){
        loop(window, back, Music);
        set_sprite(window, sprite, pos);
        while (sfRenderWindow_pollEvent(window, &event)) {
            pos = pevent(event, sprite, pos);
            rect = r_event(window, event, sprite, rect);
            event_path(event, Music, window, pos);
        }
    }
    destroy_funct(Music, window, sprite);
}

void my_rpg(sfRenderWindow* window, sfEvent event)
{
    sfSprite* back = game_background(window);
    sfSprite* sprite = player_sprite(sprite);
    sfMusic* GMusic = music_game();
    sfSprite* dialog = house_dialog(dialog);
    sfVector2f pos = {880, 880};
    sfVector2f pos2 = {2000, 1100};
    sfIntRect rect = {0, 0, 64, 64};

    while (sfRenderWindow_isOpen(window)){
        loop(window, back, GMusic);
        set_sprite(window, sprite, pos);
        set_sprite(window, dialog, pos2);
        while (sfRenderWindow_pollEvent(window, &event)) {
            pos = p_event(event, sprite, pos);
            rect = r_event(window, event, sprite, rect);
            pos2 = ev_sign(rect, dialog, pos, window);
            event_game(event, GMusic, window, pos);
        }
    }
    destroy_funct(GMusic, window, sprite);
}

int main(int argc, char **argv, char *str)
{
    sfRenderWindow* window;
    sfVideoMode mode = {1920, 1080, 32};

    window = sfRenderWindow_create(mode, "my_rpg",
                sfResize | sfFullscreen | sfClose, NULL);
    if (!window)
        return (84);
    sfRenderWindow_setFramerateLimit(window, 60);
    if (argc > 2 || (argc == 2 && my_strcmp(argv[1], "-h") != 0))
        return (84);
    if (argc == 2 && my_strcmp(argv[1], "-h") == 0) {
        help(str);
        return (0);
    }
    menu(window);
    return (0);
}
