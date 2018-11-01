/*
** EPITECH PROJECT, 2018
** CPool_Day10_2018
** File description:
** print list
*/

#include "include/include.h"

void print_list(node_t *first)
{
    node_t *i = first->next;

    while (i != first) {
        my_putchar(i->c);
        i = i->next;
    }
}

void print_list_rev(node_t *first)
{
    node_t *i = first->before;

    while (i != first) {
        my_putchar(i->c);
        i = i->before;
    }
}