/*
** EPITECH PROJECT, 2020
** fifth
** File description:
** main function for fifth stage
*/

#include "my.h"
#include "struct.h"
#include "hunter.h"

sfSprite *create_sprite_fifth(int nb)
{
    sfTexture *textback;
    sfSprite *spriteback;

    if (nb == 0)
        textback = sfTexture_createFromFile("image/background/fifth.png", NULL);
    if (nb == 1)
        textback = sfTexture_createFromFile("image/background/50.png", NULL);
    if (nb == 2)
        textback = sfTexture_createFromFile("image/background/100.png", NULL);
    if (nb == 3)
        textback = sfTexture_createFromFile("image/background/150.png", NULL);
    if (nb == 3)
        textback = sfTexture_createFromFile("image/background/200.png", NULL);
    if (!textback)
        return (NULL);
    spriteback = sfSprite_create();
    sfSprite_setTexture(spriteback, textback, sfTrue);
    return (spriteback);
}

void fifth_stage(sfRenderWindow* window, global *glo, sprites *sp)
{
    fifth *fi = malloc(sizeof(*fi));

    fifth_init(sp, glo, fi);
    while (sfRenderWindow_isOpen(window)) {
        display_fifth(window, glo, fi);
        text_score(window, glo, sp);
        score(window);
        fi->rect_r = clock_red_2(fi->clock_r, fi);
        fi->rect_g = clock_gold_2(fi->clock_g, fi);
        fi->rect_d = clock_dracaufeu_2(fi->clock_d, fi);
        fi->rect_o = clock_ohoh(fi->clock_o, fi);
        life_final(glo, window, fi->music_5);
        move_fifth(sp, glo, fi);
        target_second(fi->dracaufeu, glo, sp, window);
        target_fourth(fi->ohoh, glo, sp, window);
        bonus(glo);
        manage_second(window, sp);
    }
    destroy_fifth(window, glo, fi);
}
