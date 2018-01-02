/*
** my_strlen.c for ok in /home/alexandre/Documents/projet_perso/printf2.0/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Sat Feb  4 23:13:43 2017 Alexandre Chamard-bois
** Last update Thu Nov 09 12:01:22 2017 alexandre Chamard-bois
*/

#include "printf.h"

int my_printstrlen(char *str)
{
	return ((*str) ? my_printstrlen(str + 1) + 1 : 0);
}

char		*my_printrevstr(char *str, int start)
{
	size_t	size = my_printstrlen(str) - 1 - start;
	char	tmp;

	if (str[start] == '-') {
		start++;
		size--;
	}
	for (size_t i = 0; i < (size + 1) / 2; i++) {
		tmp = str[i + start];
		str[i + start] = str[size - i + start];
		str[size - i + start] = tmp;
	}
	return (str);
}
