/*
** EPITECH PROJECT, 2020
** second
** File description:
** main function for second stage
*/

#include "my.h"
#include "hunter.h"
#include "struct.h"

sfSprite *create_sprite_second(void)
{
    sfTexture *textback;
    sfSprite *spriteback;

    textback = sfTexture_createFromFile("image/background/second.png", NULL);
    if (!textback)
        return (NULL);
    spriteback = sfSprite_create();
    sfSprite_setTexture(spriteback, textback, sfTrue);
    return (spriteback);
}

void manage_second(sfRenderWindow *w, sprites *sp)
{
    sfEvent ev;

    while (sfRenderWindow_pollEvent(w, &ev)) {
        if (ev.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeySpace))
            sfRenderWindow_close(w);
        if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
            sp->x = 0;
            sp->vitesse_1 = 0;
            sp->vitesse_2 = 0;
        }
        if (sfKeyboard_isKeyPressed(sfKeyEnter)) {
            sp->x = random_float(sp->x, 0.3);
            sp->vitesse_1 = sp->v_pause1;
            sp->vitesse_2 = sp->v_pause2;
        }
    }
}

void second_stage(sfRenderWindow* window, global *glo, sprites *sp)
{
    second_init(sp, glo);
    while (sfRenderWindow_isOpen(window)) {
        display_second(window, sp, glo);
        text_score(window, glo, sp);
        score(window);
        glo->rect_lu = clock_lugia(glo->clock_l, glo, sp);
        glo->rect_g = clock_gold(glo->clock_g, glo, sp);
        life_gestion(glo, window, sp->music_2);
        move_second(sp, glo);
        target_second(sp->lugia, glo, sp, window);
        redirection_2(window, glo, sp);
        manage_second(window, sp);
    }
    destroy_second(window, sp);
}
