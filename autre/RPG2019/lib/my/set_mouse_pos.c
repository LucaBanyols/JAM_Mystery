/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** set the mouse position
*/

#include "../../include/my.h"

sfVector2i set_mouse_pos(sfRenderWindow* window, sfVector2i mouse)
{
    mouse.x = sfMouse_getPositionRenderWindow(window).x;
    mouse.y = sfMouse_getPositionRenderWindow(window).y;
    return (mouse);
}
