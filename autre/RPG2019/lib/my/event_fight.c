/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** fight events
*/

#include "../../include/my.h"

void event_anim_se(sfEvent e, sfMusic* GM, sfRenderWindow* w, sfVector2f pos)
{
    if (sfKeyboard_isKeyPressed(sfKeyReturn))
        hunter_se(w, e, pos, GM);
}

void event_anim(sfEvent e, sfMusic* GM, sfRenderWindow* w, sfVector2f pos)
{
    if (sfKeyboard_isKeyPressed(sfKeyReturn))
        hunter(w, e, pos, GM);
}

void event_atk_bow(sfEvent e, sfMusic* GM, sfRenderWindow* w, sfVector2f pos)
{
    if (sfKeyboard_isKeyPressed(sfKeyZ))
        mewtwob(w, e, pos, GM);
    if (sfKeyboard_isKeyPressed(sfKeyQ))
        dracaufeub(w, e, pos, GM);
    if (sfKeyboard_isKeyPressed(sfKeyD))
        pikachub(w, e, pos, GM);
}

void event_atk(sfEvent event, sfMusic* GM, sfRenderWindow* w, sfVector2f pos)
{
    if (sfKeyboard_isKeyPressed(sfKeyZ))
        mewtwo(w, event, pos, GM);
    if (sfKeyboard_isKeyPressed(sfKeyQ))
        dracaufeu(w, event, pos, GM);
    if (sfKeyboard_isKeyPressed(sfKeyD))
        pikachu(w, event, pos, GM);
}

void event_fight(sfEvent event, sfMusic* GM, sfRenderWindow* w, sfVector2f pos)
{
    if (event.type == sfEvtClosed ||
        sfKeyboard_isKeyPressed(sfKeyEscape)) {
        pos.x = 700;
        pos.y = 540;
        field(w, GM, event, pos);
    }
    event_atk(event, GM, w, pos);
}
