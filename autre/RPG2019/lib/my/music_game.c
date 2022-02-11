/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** create music
*/

#include <SFML/Audio.h>
#include "../../include/my.h"

sfMusic *music_fight(void)
{
    sfMusic *GMusic;

    GMusic = sfMusic_createFromFile("music/fight_music.ogg");
    if (!GMusic)
        return (NULL);
    sfMusic_play(GMusic);
    return (GMusic);
}

sfMusic *music_game(void)
{
    sfMusic *GMusic;

    GMusic = sfMusic_createFromFile("music/game_music.ogg");
    if (!GMusic)
        return (NULL);
    sfMusic_play(GMusic);
    return (GMusic);
}

sfMusic *music_path(void)
{
    sfMusic *GMusic;

    GMusic = sfMusic_createFromFile("music/outside_music.ogg");
    if (!GMusic)
        return (NULL);
    sfMusic_play(GMusic);
    return (GMusic);
}
