/*
** EPITECH PROJECT, 2018
** liste chainée
** File description:
** delete element from list
*/

#include "include/include.h"

void delete_element(node_t *element)
{
    element->next->before = element->before;
    element->before->next = element->next;
    free(element);
}