/*
** EPITECH PROJECT, 2018
** music_menu
** File description:
** Create menu music.
*/

#include <SFML/Audio.h>
#include "../../include/my.h"

sfMusic *music_menu(void)
{
    sfMusic *MMusic;

    MMusic = sfMusic_createFromFile("music/menu_music.ogg");
    if (!MMusic)
        return (NULL);
    sfMusic_play(MMusic);
    return (MMusic);
}
