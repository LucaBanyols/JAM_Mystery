/*
** EPITECH PROJECT, 2020
** third
** File description:
** main function for third stage
*/

#include "my.h"
#include "struct.h"
#include "hunter.h"

sfSprite *create_sprite_third(void)
{
    sfTexture *textback;
    sfSprite *spriteback;

    textback = sfTexture_createFromFile("image/background/third.png", NULL);
    if (!textback)
        return (NULL);
    spriteback = sfSprite_create();
    sfSprite_setTexture(spriteback, textback, sfTrue);
    return (spriteback);
}

void third_stage(sfRenderWindow* window, global *glo, sprites *sp)
{
    third *th = malloc(sizeof(*th));

    third_init(sp, glo, th);
    while (sfRenderWindow_isOpen(window)) {
        display_third(window, glo, th);
        text_score(window, glo, sp);
        score(window);
        th->rect_b = clock_brice(th->clock_b, th);
        life_gestion(glo, window, th->music_3);
        move_third(sp, glo, th);
        target_gestion(th->latios, glo, sp, window);
        target_gestion(th->latias, glo, sp, window);
        redirection_3(window, glo, sp, th);
        manage_first(window, sp);
    }
    destroy_third(window, th);
}
