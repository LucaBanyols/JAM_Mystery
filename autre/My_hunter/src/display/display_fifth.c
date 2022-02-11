/*
** EPITECH PROJECT, 2020
** display_fifth
** File description:
** display sprite for fifth
*/

#include "my.h"
#include "hunter.h"
#include "struct.h"

void display_fifth(sfRenderWindow *window, global *glo, fifth *fi)
{
    display_window(window, glo, fi->music_5);
    sfRenderWindow_drawSprite(window, fi->red, NULL);
    sfRenderWindow_drawSprite(window, fi->dracaufeu, NULL);
    sfRenderWindow_drawSprite(window, fi->ohoh, NULL);
    sfRenderWindow_drawSprite(window, fi->gold, NULL);
    sfRenderWindow_drawSprite(window, glo->life, NULL);
}



