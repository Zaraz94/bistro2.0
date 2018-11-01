/*
** EPITECH PROJECT, 2018
** infinadd.c
** File description:
** 
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	my_putstr(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		my_putchar(str[i++]);
}

int		my_strlen(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
		i++;
	return (i);
}

char 	*my_revstr(char *str)
{
	int i = 0;
	int j = my_strlen(str) -1;
	char tmp;

	while (i < j) {
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}

int		my_max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

char 	my_calc(char numb1, char numb2, int i1, int i2)
{
	char result;

	if (i1 <= -1)
		numb1 = 48.;
	if (i2 <= -1)
		numb2 = 48;
	result = numb1 + numb2 - 48;
	printf("numb1:%c\n", numb1);
	printf("numb2:%c\n", numb2);
	printf("calc[i]:%c\n", result);
	return (result);
}

int		my_ret(char c)
{
	if (c > 57)
		return (1);
	return (0);
}
char	*infinadd(char *numb1, char *numb2, int i1, int i2)
{
	int i3 = my_max(i1+1, i2+1);
	int i = 0;
	int ret = 0;
	char *result = malloc(sizeof(char) * i2 + i1);

	while (i != i3) {
		 printf("i:%d\t", i);
		printf("i3:%d\n", i3);
		result[i] = my_calc(numb1[i1] +ret , numb2[i2], i1, i2);
		printf("result:%s\n\n", result);
		ret = 0;
		if (result[i] > 57) {
			result[i] -= 10;
			result[i+1] += 1;
			ret++;
			printf("ret:%d\n", ret);
			result[i+1] ='1';
		}
		i1--;
		i2--;
		i++;
	}
	my_revstr(result);
	printf("result:%s\n", result);
	return (result);
}

char	*preinfinadd(char *numb1, char *numb2)
{
	int i1 = my_strlen(numb1)-1;
	int i2 = my_strlen(numb2)-1;

	if (i1 >= i2)
		return(infinadd(numb1, numb2, i1, i2));
	if (i2 > i1)
		return(infinadd(numb2, numb1, i2, i1));
	return (0);
}

int		main(int argc, char *argv[])
{
	if (argc > 3) {
		my_putstr("too many params\n");
		return (84);
	}
	if (argc < 3) {
		my_putstr("too few params\n");
		return (84);
	}
	my_putstr(preinfinadd(argv[1], argv[2]));
	return (0);
}