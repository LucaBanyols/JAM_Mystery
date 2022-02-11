/*
** EPITECH PROJECT, 2020
** win
** File description:
** main fonction for win
*/

#include "my.h"
#include "hunter.h"
#include "struct.h"

sfMusic *win_music(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/win.ogg");
    if (!music)
        return (NULL);
    sfMusic_play(music);
    return (music);
}

sfSprite *display_win(void)
{
    sfTexture *texture;
    sfSprite *w_over;

    texture = sfTexture_createFromFile("image/background/win.png", NULL);
    if (!texture)
        return (NULL);
    w_over = sfSprite_create();
    sfSprite_setTexture(w_over, texture, sfTrue);
    return (w_over);
}

void win(global *glo, sfRenderWindow *win)
{

    sfSprite *winn = display_win();
    sfMusic *w_music = win_music();
    sfEvent ev;

    while (sfRenderWindow_isOpen(win)) {
        sfRenderWindow_display(win);
        sfRenderWindow_drawSprite(win, winn, NULL);
        text_win(win, glo);
        win_text(win);
        text_dev(win);
        while (sfRenderWindow_pollEvent(win, &ev)) {
            if (ev.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeySpace))
                sfRenderWindow_close(win);
        }
    }
    sfMusic_destroy(w_music);
    sfSprite_destroy(winn);
    sfRenderWindow_close(win);
}
