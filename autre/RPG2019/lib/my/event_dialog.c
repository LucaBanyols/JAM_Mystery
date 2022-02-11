/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** dialog box gestion
*/

#include <unistd.h>
#include "../../include/my.h"

sfVector2f event_box(sfIntRect r, sfSprite* d, sfVector2f p, sfRenderWindow* w)
{
    sfVector2f pos = {2000, 1100};
    sfIntRect rect= {0, 0, 1000, 309};

    if (p.y == 540 && (p.x == 720 || p.x == 740)){
        pos.x = 600;
        pos.y = 660;
        if (sfKeyboard_isKeyPressed(sfKeyNum1)){
            rect.left = 0;
            draw_sprite(w, d, rect);
        }
        if (sfKeyboard_isKeyPressed(sfKeyNum2)){
            rect.left = 1000;
            draw_sprite(w, d, rect);
        }
        if (sfKeyboard_isKeyPressed(sfKeyNum3)){
            rect.left = 2000;
            draw_sprite(w, d, rect);
        }
    }
    return (pos);
}

sfVector2f box_place(sfIntRect r, sfSprite* d, sfVector2f p, sfRenderWindow* w)
{
    sfVector2f pos = {2000, 1100};
    sfIntRect rect= {0, 0, 1000, 309};

    if (p.y == 40 && (p.x == 1640 || p.x == 1680)){
        pos.x = 600;
        pos.y = 660;
        if (sfKeyboard_isKeyPressed(sfKeyNum1)){
            rect.left = 0;
            draw_sprite(w, d, rect);
        }
        if (sfKeyboard_isKeyPressed(sfKeyNum2)){
            rect.left = 1000;
            draw_sprite(w, d, rect);
        }
        if (sfKeyboard_isKeyPressed(sfKeyNum3)){
            rect.left = 2000;
            draw_sprite(w, d, rect);
        }
    }
    return (pos);
}

sfVector2f ev_sign(sfIntRect r, sfSprite* d, sfVector2f p, sfRenderWindow* w)
{
    sfVector2f pos = {2000, 1100};
    sfIntRect rect= {0, 0, 1000, 309};

    if (p.y == 440 && p.x > 1080 && p.x < 1200){
        pos.x = 600;
        pos.y = 660;
        if (sfKeyboard_isKeyPressed(sfKeyNum1)){
            rect.left = 0;
            draw_sprite(w, d, rect);
        }
        if (sfKeyboard_isKeyPressed(sfKeyNum2)){
            rect.left = 1000;
            draw_sprite(w, d, rect);
        }
        if (sfKeyboard_isKeyPressed(sfKeyNum3)){
            rect.left = 2000;
            draw_sprite(w, d, rect);
        }
    }
    return (pos);
}
