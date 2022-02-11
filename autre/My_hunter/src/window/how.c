/*
** EPITECH PROJECT, 2020
** how.c
** File description:
** main function for how
*/

#include "my.h"
#include "hunter.h"
#include "struct.h"

sfSprite *how_button(void)
{
    sfTexture* how_texture;
    sfSprite* how;

    how_texture = sfTexture_createFromFile("image/sprites/how.png", NULL);
    if (!how_texture)
        return (NULL);
    how = sfSprite_create();
    sfSprite_setTexture(how, how_texture, sfTrue);
    return (how);
}

sfMusic *how_music(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/how.ogg");
    if (!music)
        return (NULL);
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    return (music);
}

sfSprite *how_back(void)
{
    sfTexture *textback;
    sfSprite *spriteback;

    textback = sfTexture_createFromFile("image/background/how.png", NULL);
    if (!textback)
        return (NULL);
    spriteback = sfSprite_create();
    sfSprite_setTexture(spriteback, textback, sfTrue);
    return (spriteback);
}

void how(sfRenderWindow* win)
{
    sfEvent ev;
    sfSprite *back = how_back();
    sfMusic *music = how_music();

    while (sfRenderWindow_isOpen(win)) {
        sfRenderWindow_display(win);
        sfRenderWindow_drawSprite(win, back, NULL);
        while (sfRenderWindow_pollEvent(win, &ev)) {
            if (ev.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyEscape)
                || sfKeyboard_isKeyPressed(sfKeySpace)
                || sfKeyboard_isKeyPressed(sfKeyEnter)) {
                sfMusic_stop(music);
                sfMusic_destroy(music);
                launch_menu(win);
            }
        }
    }
}
