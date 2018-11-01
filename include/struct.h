/*
** EPITECH PROJECT, 2018
** CPool_evalexpr_2018
** File description:
** struct liste chainée circulaire
*/

#ifndef STRUCT_H
#define STRUCT_H

typedef struct node_s node_t;
struct node_s {
    char c;
    node_t *next;
    node_t *before;
};

//-------Peux etre utile, a voir------//
typedef struct node_parant node_p;
struct node_parant {
	int c;
	node_p *next;
	node_p *before;
};

#endif