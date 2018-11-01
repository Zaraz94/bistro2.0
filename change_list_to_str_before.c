/*
** EPITECH PROJECT, 2018
** CPool_evalexpr_2018
** File description:
** addition liste chainée
*/

#include "include/include.h"

int my_listlen_nbr_before(node_t *element, node_t *first)
{
    int i = 0;
    node_t *c_nbr = element->before;

    while (c_nbr != first) {
        if (c_nbr->c == ')' || c_nbr->c == '(' || c_nbr->c == '+' 
            || c_nbr->c == '-' || c_nbr->c == '*' || c_nbr->c == '%' || c_nbr->c == '/') {
        	break;
            return (i);
        }
        i = i + 1;
        c_nbr = c_nbr->before;
    }
    return (i);
}

char *change_list_to_str_before(node_t *element, node_t *first)
{
    char *str = malloc(sizeof(char) * my_listlen_nbr_before(element, first) + 1);
    int i = 0;
    node_t *c_nbr = element->before;

    while (c_nbr != first) {
        if (c_nbr->c == ')' || c_nbr->c == '(' || c_nbr->c == '+' 
            || c_nbr->c == '-' || c_nbr->c == '*' || c_nbr->c == '%' || c_nbr->c == '/') {
            break;
            return (str);
        }
        str[i] = c_nbr->c;
        i = i + 1;
        c_nbr = c_nbr->before;
    }
    str[i + 1] = '\0';
    my_revstr(str);
    return (str);
}