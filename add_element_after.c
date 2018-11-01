/*
** EPITECH PROJECT, 2018
** CPool_Day10_2018
** File description:
** new element next
*/

#include "include/include.h"

void add_element_after(node_t *element, char c)
{
    node_t *new_element = malloc(sizeof(node_t));

    if (new_element != NULL) {
        new_element->c = c;
        new_element->before = element->before;
        new_element->next = element;
        element->before->next = new_element;
        element->before = new_element;
    }
}