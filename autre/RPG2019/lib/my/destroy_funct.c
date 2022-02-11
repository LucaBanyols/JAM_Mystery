/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** destroy music and window
*/

#include <SFML/Audio.h>
#include "../../include/my.h"

void destroy_funct(sfMusic* Music, sfRenderWindow* window, sfSprite* sprite)
{
    sfMusic_destroy(Music);
    sfSprite_destroy(sprite);
    sfRenderWindow_close(window);
}

void destroy_functs(sfMusic* M, sfRenderWindow* w, sfSprite* s1, sfSprite* s2)
{
    sfMusic_destroy(M);
    sfSprite_destroy(s1);
    sfSprite_destroy(s2);
    sfRenderWindow_close(w);
}

void destroy_field(sfRenderWindow* w, sfSprite* s1, sfSprite* s2, sfSprite* s3)
{
    sfSprite_destroy(s1);
    sfSprite_destroy(s2);
    sfSprite_destroy(s3);
    sfRenderWindow_close(w);
}

void destroy_h(sfRenderWindow* wind, sfSprite* sprite)
{
    sfSprite_destroy(sprite);
    sfRenderWindow_close(wind);
}

void destroy_r(sfRenderWindow* wind, sfSprite* sprite, sfSprite* s)
{
    sfSprite_destroy(sprite);
    sfSprite_destroy(s);
    sfRenderWindow_close(wind);
}
