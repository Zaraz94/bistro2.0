/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** revstr
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i = i + 1;
    return (i);
}

char *my_revstr(char *str)
{
    int j = my_strlen(str) - 1;
    int n = 0;
    char c;

    while (n < j) {
        c = str[n];
        str[n] = str[j];
        str[j] = c;     
        j = j - 1;
        n = n + 1;
    }
    return (str);
}