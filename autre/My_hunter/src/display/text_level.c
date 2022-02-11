/*
** EPITECH PROJECT, 2020
** text_level
** File description:
** print level
*/

#include "my.h"
#include "hunter.h"
#include "struct.h"

static void level(sfRenderWindow* window)
{
    sfFont *font;
    sfText *text = sfText_create();
    sfVector2f pos = {0, 50};

    font = sfFont_createFromFile("DejaVuSans-Bold.ttf");
    sfText_setFont(text, font);
    sfText_setString(text, "level :");
    sfText_setPosition(text, pos);
    sfRenderWindow_drawText(window, text, NULL);
}

void text_level(sfRenderWindow* window, sprites *sp)
{
    sfFont *font;
    sfText *text = sfText_create();
    sfVector2f pos = {120, 50};

    level(window);
    font = sfFont_createFromFile("DejaVuSans-Bold.ttf");
    sfText_setFont(text, font);
    sfText_setString(text, getstr(sp->level));
    sfText_setPosition(text, pos);
    sfRenderWindow_drawText(window, text, NULL);

}
