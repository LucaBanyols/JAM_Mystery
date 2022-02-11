/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** game events
*/

#include "../../include/my.h"

void event_game(sfEvent event, sfMusic* GM, sfRenderWindow* w, sfVector2f pos)
{
    int i = 1;

    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        stat(w, GM, i, pos);
    if (pos.x >= 840 && pos.x <= 940 && pos.y == 900) {
        sfMusic_stop(GM);
        pos.x = 950;
        pos.y = 560;
        path(w, event, pos);
    }
}

void event_path(sfEvent event, sfMusic* GM, sfRenderWindow* w, sfVector2f pos)
{
    int i = 2;

    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        stat(w, GM, i, pos);
    if (pos.x >= 910 && pos.x <= 990 && pos.y == 540) {
        sfMusic_stop(GM);
        my_rpg(w, event);
    }
    if (pos.x >= 910 && pos.x <= 990 && pos.y == 900){
        pos.x = 1660;
        pos.y = 60;
        field(w, GM, event, pos);
    }
}

void event_field(sfEvent event, sfMusic* GM, sfRenderWindow* w, sfVector2f pos)
{
    int i = 3;

    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        stat(w, GM, i, pos);
    if (pos.x >= 1620 && pos.x <= 1700 && pos.y == 40){
        sfMusic_stop(GM);
        pos.x = 930;
        pos.y = 880;
        path(w, event, pos);
    }
    if (pos.y == 540 && (pos.x == 740  || pos.x == 720)
        && sfKeyboard_isKeyPressed(sfKeyReturn)){
        sfMusic_stop(GM);
        pos.x = 1350;
        pos.y = 365;
        fight(w, event, pos);
    }
}

void event_stat(sfMusic* GM, sfRenderWindow* w, sfVector2f pos, int i)
{
    sfEvent event;

    if (sfKeyboard_isKeyPressed(sfKeyReturn)) {
        if (i == 1){
            sfMusic_stop(GM);
            my_rpg(w, event);
        } else if (i == 2){
            sfMusic_stop(GM);
            path(w, event, pos);
        }
        if (i == 3)
            field(w, GM, event, pos);
        else if (i == 4){
            sfMusic_stop(GM);
            place(w, event, pos);
        }
    }
}
