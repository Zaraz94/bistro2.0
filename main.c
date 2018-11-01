/*
** EPITECH PROJECT, 2018
** CPool_evalexpr_2018
** File description:
** evalexpr liste chainée circulaire
*/

#include "include/include.h"

int main(int ac, char **av)
{
    int result = evalexpr(av[1]);

    if (ac != 2)
        return (84);
    return (result);
}