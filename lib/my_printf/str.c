/*
** str.c for ok in /home/alexandre/Documents/projet_perso/printf2.0/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Sun Feb  5 00:13:42 2017 Alexandre Chamard-bois
** Last update Thu Apr 13 09:50:37 2017 Alexandre Chamard-bois
*/

#include "myprint.h"

int my_printstr(char *str, char *next)
{
	int	i;

	i = 0;
	while (next[i])
  {
    str[i] = next[i];
    i++;
  }
	str[i] = 0;
	return (my_printstrlen(next));
}

int my_printchar(char *str, char c)
{
  *str = c;
	*(str + 1) = 0;
	return (1);
}
