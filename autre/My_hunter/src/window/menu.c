/*
** EPITECH PROJECT, 2020
** menu
** File description:
** main fonction for menu
*/

#include "my.h"
#include "hunter.h"
#include "struct.h"

sfMusic *menu_music(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/menu.ogg");
    if (!music)
        return (NULL);
    sfMusic_play(music);
    return (music);
}

sfSprite *play_button(void)
{
    sfTexture* play_texture;
    sfSprite* play;
    sfIntRect rect = {0, 0, 670, 185};

    play_texture = sfTexture_createFromFile("image/sprites/play.png", NULL);
    if (!play_texture)
        return (NULL);
    play = sfSprite_create();
    sfSprite_setTexture(play, play_texture, sfTrue);
    sfSprite_setTextureRect(play, rect);
    return (play);
}

sfSprite *quit_button(void)
{
    sfTexture* quit_texture;
    sfSprite* quit;
    sfIntRect rect = {0, 0, 670, 185};

    quit_texture = sfTexture_createFromFile("image/sprites/exit.png", NULL);
    if (!quit_texture)
        return (NULL);
    quit = sfSprite_create();
    sfSprite_setTexture(quit, quit_texture, sfTrue);
    sfSprite_setTextureRect(quit, rect);
    return (quit);
}

sfSprite *menu_background(void)
{
    sfTexture* texture;
    sfSprite* menu_background;

    texture = sfTexture_createFromFile("image/background/menu_back.jpg", NULL);
    if (!texture)
        return (NULL);
    menu_background = sfSprite_create();
    sfSprite_setTexture(menu_background, texture, sfTrue);
    return (menu_background);
}

void launch_menu(sfRenderWindow *window)
{
    global *glo = malloc(sizeof(*glo));
    sfIntRect rect = {0, 0, 64, 63};
    sfClock *clock_p = sfClock_create();
    sfSprite *how = how_button();

    menu_init(glo);
    while (sfRenderWindow_isOpen(window)){
        display_window(window, glo, glo->menu_music);
        display_poke(window, glo);
        button_loop(window, glo, how);
        rect = clock_poke(clock_p, glo, rect);
        manage_menu(window, how, glo);
        }
    destroy_menu(window, glo, how);
}
