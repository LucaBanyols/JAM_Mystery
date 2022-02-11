/*
** EPITECH PROJECT, 2018
** my_hunter
** File description:
** my_putstr
*/

#include "../../include/my.h"

int my_putstr(char const *str)
{
    int letter = 0;
    while (str[letter] != '\0') {
        my_putchar(str[letter]);
        letter += 1;
    }
    return (0);
}
