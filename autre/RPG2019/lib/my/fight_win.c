/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** winnning fight screen
*/

#include "../../include/my.h"

int fw_event(sfRenderWindow* wind, sfEvent event, sfVector2f pos, sfMusic* m)
{
    if (sfKeyboard_isKeyPressed(sfKeyReturn)) {
        sfMusic_stop(m);
        pos.x = 680;
        pos.y = 560;
        place(wind, event, pos);
    }
}

sfSprite *fw_background(sfRenderWindow* window)
{
    sfTexture* how_texture;
    sfSprite* how_background;

    how_texture = sfTexture_createFromFile("images/fight_win.jpg", NULL);
    if (!how_texture)
        return (NULL);
    how_background = sfSprite_create();
    sfSprite_setTexture(how_background, how_texture, sfTrue);
    return (how_background);
}

int fight_win(sfRenderWindow* wind, sfEvent event, sfVector2f pos, sfMusic* m)
{
    sfSprite* menu = fw_background(wind);

    while (sfRenderWindow_isOpen(wind)){
        loop(wind, menu, m);
        while (sfRenderWindow_pollEvent(wind, &event))
            fw_event(wind, event, pos, m);
    }
    sfRenderWindow_close(wind);
}
