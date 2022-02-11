/*
** EPITECH PROJECT, 2020
** fourth
** File description:
** main fonction for the fourth stage
*/

#include "my.h"
#include "struct.h"
#include "hunter.h"

sfSprite *create_sprite_fourth(void)
{
    sfTexture *textback;
    sfSprite *spriteback;

    textback = sfTexture_createFromFile("image/background/fourth.png", NULL);
    if (!textback)
        return (NULL);
    spriteback = sfSprite_create();
    sfSprite_setTexture(spriteback, textback, sfTrue);
    return (spriteback);
}

void fourth_stage(sfRenderWindow* window, global *glo, sprites *sp)
{
    fourth *fo = malloc(sizeof(*fo));

    fourth_init(sp, glo, fo);
    while (sfRenderWindow_isOpen(window)) {
        display_fourth(window, glo, fo);
        text_score(window, glo, sp);
        score(window);
        fo->rect_lo = clock_louka(fo->clock_lo, fo);
        fo->rect_a = clock_arceus(fo->clock_a, fo);
        life_gestion(glo, window, fo->music_4);
        move_fourth(sp, glo, fo);
        target_fourth(fo->arceus, glo, sp, window);
        target_fourth(fo->carchacrok, glo, sp, window);
        redirection_4(window, glo, sp, fo);
        manage_second(window, sp);
    }
    destroy_fourth(window, fo);
}

