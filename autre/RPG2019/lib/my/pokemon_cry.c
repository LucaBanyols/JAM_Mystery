/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** pokemon crys
*/

#include <SFML/Audio.h>
#include "../../include/my.h"

sfMusic *mewtwo_cry(void)
{
    sfMusic *GMusic;

    GMusic = sfMusic_createFromFile("music/mewtwo.ogg");
    if (!GMusic)
        return (NULL);
    sfMusic_play(GMusic);
    return (GMusic);
}

sfMusic *dracaufeu_cry(void)
{
    sfMusic *GMusic;

    GMusic = sfMusic_createFromFile("music/dracaufeu.ogg");
    if (!GMusic)
        return (NULL);
    sfMusic_play(GMusic);
    return (GMusic);
}

sfMusic *pikachu_cry(void)
{
    sfMusic *GMusic;

    GMusic = sfMusic_createFromFile("music/pikachu.ogg");
    if (!GMusic)
        return (NULL);
    sfMusic_play(GMusic);
    return (GMusic);
}
