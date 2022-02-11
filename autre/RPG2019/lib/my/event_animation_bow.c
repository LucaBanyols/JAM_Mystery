/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** fight bow period animation
*/

#include "../../include/my.h"

void event_animb_se(sfEvent e, sfMusic* GM, sfRenderWindow* w, sfVector2f pos)
{
    if (sfKeyboard_isKeyPressed(sfKeyReturn))
        hunterb_se(w, e, pos, GM);
}

void event_animb(sfEvent e, sfMusic* GM, sfRenderWindow* w, sfVector2f pos)
{
    if (sfKeyboard_isKeyPressed(sfKeyReturn))
        hunterb(w, e, pos, GM);
}
