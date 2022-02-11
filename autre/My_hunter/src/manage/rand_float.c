/*
** EPITECH PROJECT, 2020
** rand_float
** File description:
** generate a random float
*/

#include "struct.h"
#include "hunter.h"
#include "my.h"

float random_float(float x, float a)
{
    int i = 0;

    a *= 10;
    x = (rand() % (int)a);
    i = (rand() % 2);
    if (i == 1)
        x *= -1;
    return (x);
}
