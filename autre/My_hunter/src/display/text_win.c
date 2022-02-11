/*
** EPITECH PROJECT, 2020
** text_win
** File description:
** print score for win
*/

#include "my.h"
#include "hunter.h"
#include "struct.h"

void text_dev(sfRenderWindow* window)
{
    sfFont *font;
    sfText *text = sfText_create();
    sfVector2f pos = {394, 554};

    font = sfFont_createFromFile("DejaVuSans-Bold.ttf");
    sfText_setFont(text, font);
    sfText_setString(text, "score du dev : 308");
    sfText_setPosition(text, pos);
    sfRenderWindow_drawText(window, text, NULL);
}

void win_text(sfRenderWindow* window)
{
    sfFont *font;
    sfText *text = sfText_create();
    sfVector2f pos = {394, 604};

    font = sfFont_createFromFile("DejaVuSans-Bold.ttf");
    sfText_setFont(text, font);
    sfText_setString(text, "ton score :");
    sfText_setPosition(text, pos);
    sfRenderWindow_drawText(window, text, NULL);
}

void text_win(sfRenderWindow* window, global *glo)
{
    sfFont *font;
    sfText *text = sfText_create();
    sfVector2f pos = {600, 604};

    font = sfFont_createFromFile("DejaVuSans-Bold.ttf");
    sfText_setFont(text, font);
    sfText_setString(text, getstr(glo->score));
    sfText_setPosition(text, pos);
    sfRenderWindow_drawText(window, text, NULL);
}
