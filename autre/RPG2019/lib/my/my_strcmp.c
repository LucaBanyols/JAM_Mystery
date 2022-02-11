/*
** EPITECH PROJECT, 2018
** my_hunter
** File description:
** my_strcmp
*/

int my_strcmp(char const *s1, char const *s2)
{
    int num = 0;
    int res = 0;

    if (s1[num] != s2[num])
        return (84);
    while ((s1[num] == s2[num]) && (s1[num] != '\0') && (s2[num] != '\0'))
        num ++;
    res = (s1[num] - s2[num]);
    return (res);
}
