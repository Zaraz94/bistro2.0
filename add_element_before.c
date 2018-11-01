 /*
** EPITECH PROJECT, 2018
** CPool_Day10_2018
** File description:
** new element prev
*/

#include "include/include.h"

void add_element_before(node_t *element, char c)
{
    node_t *new_element = malloc(sizeof(node_t));

    if (new_element != NULL) {
        new_element->c = c;
        new_element->before = element;
        new_element->next = element->next;
        element->next->before = new_element;
        element->next = new_element;
    }
}