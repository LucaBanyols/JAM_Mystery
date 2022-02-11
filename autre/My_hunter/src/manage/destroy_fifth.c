/*
** EPITECH PROJECT, 2020
** destroy_fifth
** File description:
** destroy fifth element
*/

#include "my.h"
#include "hunter.h"
#include "struct.h"

void destroy_fifth(sfRenderWindow* win, global *glo, fifth *fi)
{
    sfMusic_destroy(fi->music_5);
    sfSprite_destroy(glo->spriteback);
    sfSprite_destroy(glo->life);
    sfSprite_destroy(fi->gold);
    sfSprite_destroy(fi->red);
    sfSprite_destroy(fi->dracaufeu);
    sfSprite_destroy(fi->ohoh);
    sfRenderWindow_close(win);
}
