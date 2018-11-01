/*
** EPITECH PROJECT, 2018
** CPool_evalexpr_2018
** File description:
** proto pour liste chainée
*/

#ifndef INCLUDE_H
#define INCLUDE_H

#include "struct.h"
#include "list.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void my_putchar(char c);
int my_strlen(char const *str);
char *my_revstr(char *str);
int evalexpr(char *str);
node_t *create_list(char *str);
node_t *do_op_add(node_t *first);
int my_listlen_nbr_after(node_t *element, node_t *first);
char *change_list_to_str_after(node_t *element, node_t *first);
node_t *find_sum(node_t *first);
int my_listlen_nbr_before(node_t *element, node_t *first);
char *change_list_to_str_before(node_t *element, node_t *first);

//node_t *find_last_parant(node_t first);
node_t *do_op_parant(node_t *first);

#endif