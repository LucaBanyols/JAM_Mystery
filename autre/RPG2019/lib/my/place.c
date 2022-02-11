/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** field after fight
*/

#include "../../include/my.h"

void event_place(sfEvent event, sfMusic* GM, sfRenderWindow* w, sfVector2f pos)
{
    int i = 4;

    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        statb(w, GM, i, pos);
}

sfSprite *place_background(sfRenderWindow* window)
{
    sfTexture* texture;
    sfSprite* Background;

    texture = sfTexture_createFromFile("images/field_2.jpg", NULL);
    if (!texture)
        return (NULL);
    Background = sfSprite_create();
    sfSprite_setTexture(Background, texture, sfTrue);
    return (Background);
}

void place(sfRenderWindow* window, sfEvent event, sfVector2f pos)
{
    sfSprite* back = place_background(window);
    sfSprite* sprite = player_sprite(sprite);
    sfMusic* music = music_path();
    sfIntRect rect = {0, 0, 64, 64};
    sfSprite* link = house_sprite(link);
    sfSprite* dialog = dialog_place(dialog);
    sfVector2f pos2 = {2000, 1100};

    while (sfRenderWindow_isOpen(window)){
        loop(window, back, music);
        set_sprite(window, sprite, pos);
        set_sprites(window, link, dialog, pos2);
        while (sfRenderWindow_pollEvent(window, &event)){
            pos = pfevent(event, sprite, pos);
            rect = r_event(window, event, sprite, rect);
            pos2 = box_place(rect, dialog, pos, window);
            event_place(event, music, window, pos);
        }
    }
    sfMusic_destroy(music);
    destroy_field(window, sprite, link, dialog);
}
