/*
** EPITECH PROJECT, 2020
** text_gestion
** File description:
** tesxt gestion dor game
*/

#include "my.h"
#include "hunter.h"
#include "struct.h"

char *getstr(int nb)
{
    char *str;
    int count = 0;
    int power = 1;
    int tmp = 0;

    if (nb == 0)
        return ("0");
    for (int i = 1; i <= nb; i *= 10, count++);
    if ((str = malloc(sizeof(char) * count + 1)) == NULL)
        return (NULL);
    for (int j = 0; j != count - 1; power *= 10, j++);
    for (int k = 0; k <= count - 1; k++) {
        tmp = nb / power;
        nb %= power;
        power /= 10;
        str[k] = tmp + '0';
    }
    str[count] = '\0';
    return (str);
}

void score(sfRenderWindow* window)
{
    sfFont *font;
    sfText *text = sfText_create();
    sfVector2f pos = {0, 0};

    font = sfFont_createFromFile("DejaVuSans-Bold.ttf");
    sfText_setFont(text, font);
    sfText_setString(text, "score :");
    sfText_setPosition(text, pos);
    sfRenderWindow_drawText(window, text, NULL);
    sfFont_destroy(font);
    sfText_destroy(text);
}

void text_score(sfRenderWindow* window, global *glo, sprites *sp)
{
    sfFont *font;
    sfText *text = sfText_create();
    sfVector2f pos = {120, 1};

    text_level(window, sp);
    font = sfFont_createFromFile("DejaVuSans-Bold.ttf");
    sfText_setFont(text, font);
    sfText_setString(text, getstr(glo->score));
    sfText_setPosition(text, pos);
    sfRenderWindow_drawText(window, text, NULL);
    sfFont_destroy(font);
    sfText_destroy(text);
}

void text_d(sfRenderWindow *window)
{
    sfFont *font;
    sfText *text = sfText_create();
    sfVector2f pos = {384, 387};

    font = sfFont_createFromFile("DejaVuSans-Bold.ttf");
    sfText_setFont(text, font);
    sfText_setString(text, "score dev : 308");
    sfText_setPosition(text, pos);
    sfRenderWindow_drawText(window, text, NULL);
    sfFont_destroy(font);
    sfText_destroy(text);
}

void text_over(sfRenderWindow* window, global *glo)
{
    sfFont *font;
    sfText *text = sfText_create();
    sfVector2f pos = {713, 317};

    text_d(window);
    font = sfFont_createFromFile("DejaVuSans-Bold.ttf");
    sfText_setFont(text, font);
    sfText_setString(text, getstr(glo->score));
    sfText_setPosition(text, pos);
    sfRenderWindow_drawText(window, text, NULL);
    sfFont_destroy(font);
    sfText_destroy(text);
}
