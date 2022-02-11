/*
** EPITECH PROJECT, 2020
** init
** File description:
** initializion struct for menu
*/

#include "my.h"
#include "hunter.h"
#include "struct.h"

void menu_init(global *glo)
{
    glo->spriteback = menu_background();
    glo->sprite_play = play_button();
    glo->sprite_exit = quit_button();
    glo->menu_music = menu_music();
    glo->poke = poke();
}
