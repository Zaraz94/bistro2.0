/*
** EPITECH PROJECT, 2018
** CPool_evalexpr_2018
** File description:
** calcul dans les parantheses
*/

#include "include/include.h"

// int my_listlen_in_parant(node_t *last_parant, node_t *first)
// {
//  int i = 0;

//  while (last_parant != first) {
//      if (last_parant->c == '(')
//          return (i);
//      i = i + 1;
//      last_parant = last_parant->before;
//  }
// }

node_t *find_last_parant(node_t *first)
{
    node_t *last_parant = first->next;

    while (last_parant != first) {
        if (last_parant->c == ')') {
            return (last_parant);
        }
        last_parant = last_parant->next;
    }
    return (NULL);
}

node_p *add_parant_in_list(node_t *last_parant, node_t *first)
{
    node_p *element = new_list();
    node_p *first_element = element;
    node_t *in_parant = last_parant->before;

    while (in_parant != first) {
        if (in_parant->c == '(')
            return (first_element);
        add_element_before(first_element, in_parant->c);
        in_parant = in_parant->before;
    }
    return (first_element);
}

node_t *do_op_parant(node_t *first)
{
    node_t *last_parant = find_last_parant(first);
    node_p *calc_in_parant = add_parant_in_list(last_parant, first);
    //node_p *list = add_calc_parant_in_list(first_elem_parant, last_parant, first);

    printf("\n");
    print_list(calc_in_parant);
    return (NULL);
}