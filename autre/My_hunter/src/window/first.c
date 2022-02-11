/*
** EPITECH PROJECT, 2020
** first
** File description:
** main fonction for first stage
*/

#include "struct.h"
#include "hunter.h"
#include "my.h"

sfSprite *create_sprite_first(void)
{
    sfTexture *textback;
    sfSprite *spriteback;

    textback = sfTexture_createFromFile("image/background/first.png", NULL);
    if (!textback)
        return (NULL);
    spriteback = sfSprite_create();
    sfSprite_setTexture(spriteback, textback, sfTrue);
    return (spriteback);
}

void manage_first(sfRenderWindow *w, sprites *sp)
{
    sfEvent ev;

    while (sfRenderWindow_pollEvent(w, &ev)) {
        if (ev.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeySpace))
            sfRenderWindow_close(w);
        if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
            sp->vitesse_1 = 0;
            sp->vitesse_2 = 0;
        }
        if (sfKeyboard_isKeyPressed(sfKeyEnter)) {
            sp->vitesse_1 = sp->v_pause1;
            sp->vitesse_2 = sp->v_pause2;
        }
    }
}

void first_stage(sfRenderWindow* window, global *glo)
{
    sprites *sp = malloc(sizeof(*sp));

    first_init(sp, glo);
    while (sfRenderWindow_isOpen(window)) {
        display_first(window, sp, glo);
        text_score(window, glo, sp);
        score(window);
        glo->rect_d = clock_dracaufeu(glo->clock_d, glo, sp);
        glo->rect_r = clock_red(glo->clock_r, glo, sp);
        life_gestion(glo, window, glo->music);
        move_first(sp, glo);
        target_gestion(sp->dracaufeu, glo, sp, window);
        redirection(window, glo, sp);
        manage_first(window, sp);
    }
    destroy_first(window, glo, sp);
}
