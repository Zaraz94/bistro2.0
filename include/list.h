/*
** EPITECH PROJECT, 2018
** CPool_evalexpr_2018
** File description:
** proto pour liste chainée
*/

#ifndef LIST_H
#define LIST_H

#include "struct.h"

node_t *new_list(void);
void add_element_after(node_t *element, char c);
void add_element_before(node_t *element, char c);
void print_list(node_t *first);
void print_list_rev(node_t *first);
void delete_element(node_t *element);

#endif