/*
** EPITECH PROJECT, 2018
** CPool_evalexpr_2018
** File description:
** evalexpr liste chainée circulaire
*/

#include "include/include.h"

node_t *create_list(char *str)
{
    node_t *list = new_list();
    node_t *first = list;
    int i = 0;

    while (str[i] != '\0') {
        add_element_after(list, str[i]);
        i = i + 1;
    }
    return (first);
}