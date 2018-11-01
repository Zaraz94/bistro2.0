/*
** EPITECH PROJECT, 2018
** CPool_evalexpr_2018
** File description:
** addition liste chainée
*/

#include "include/include.h"

int my_listlen_nbr_after(node_t *element, node_t *first)
{
    int i = 0;
    node_t *c_nbr = element->next;

    while (c_nbr != first) {
        if (c_nbr->c == ')' || c_nbr->c == '(' || c_nbr->c == '/' 
            || c_nbr->c == '-' || c_nbr->c == '*' || c_nbr->c == '%' || c_nbr->c == '/') {
            return (i);
        }
        i = i + 1;
        c_nbr = c_nbr->next;
    }
    return (i);
}

char *change_list_to_str_after(node_t *element, node_t *first)
{
    char *str = malloc(sizeof(char) * my_listlen_nbr_after(element, first) + 1);
    int i = 0;
    node_t *c_nbr = element->next;

    while (c_nbr != first) {
        if (c_nbr->c == ')' || c_nbr->c == '(' || c_nbr->c == '+' 
            || c_nbr->c == '-' || c_nbr->c == '*' || c_nbr->c == '%' || c_nbr->c == '/') {
            break;
            return (str);
        }
        str[i] = c_nbr->c;
        i = i + 1;
        c_nbr = c_nbr->next;
    }
    str[i + 1] = '\0';
    return (str);
}