/*
** EPITECH PROJECT, 2018
** CPool_evalexpr_2018
** File description:
** addition liste chainée
*/

#include "include/include.h"

node_t *find_sum(node_t *first)
{
    node_t *element = first->next;

    while (element != first) {
        if (element->c == '+') {
        return (element);
        }
        element = element->next;
    }
    return (NULL);
}

node_t *do_op_add(node_t *first)
{
    node_t *result = malloc(sizeof(node_t));
    node_t *element_sum = find_sum(first);
    char *nbr1 = change_list_to_str_after(element_sum, first);
    char *nbr2 = change_list_to_str_before(element_sum, first);

    return (result);
}