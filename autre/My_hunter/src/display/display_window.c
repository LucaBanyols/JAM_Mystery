/*
** EPITECH PROJECT, 2020
** display_window
** File description:
** display window and loop musix
*/

#include "struct.h"
#include "hunter.h"
#include "my.h"

void display_window(sfRenderWindow *window, global *glo, sfMusic *music)
{
    sfRenderWindow_display(window);
    sfRenderWindow_clear(window, sfCyan);
    sfRenderWindow_drawSprite(window, glo->spriteback, NULL);
    sfMusic_setLoop(music, sfTrue);
}
