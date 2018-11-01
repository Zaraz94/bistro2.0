/*
** EPITECH PROJECT, 2018
** CPool_evalexpr_2018
** File description:
** evalexpr liste chainée circulaire
*/

#include "include/include.h"

int evalexpr(char *str)
{
    int result = 0;
    //-------- CP la str en liste chainée circulaire-----//
    node_t *list = create_list(str);

    //-------- Affiche la liste chainée -----------------//
    //print_list(list);
    //do_op_add(list);
    do_op_parant(list);
    return (result);
}