/*
** EPITECH PROJECT, 2018
** CPool_Day10_2018
** File description:
** do_op
*/

#include "include/include.h"

node_t *new_list(void)
{
    node_t *first = malloc(sizeof(node_t));

    if (first != NULL) {
        first->next = first;
        first->before = first;
    }
    return (first);
}