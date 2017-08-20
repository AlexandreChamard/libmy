/*
** call_function1.c for ok in /home/alexandre/Documents/projet_perso/printf2.0/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Sun Feb  5 00:45:12 2017 Alexandre Chamard-bois
** Last update Thu Apr 13 09:50:23 2017 Alexandre Chamard-bois
*/

#include "printf.h"

char *put_char(char *str, char c)
{
	int i;

	i = my_printstrlen(str);
	my_printchar(str + i, c);
	return (str);
}

char 		*call_putchar(va_list ap, char *str)
{
	int i;
	char	c;

	i = my_printstrlen(str);
	c = va_arg(ap, int);
	my_printchar(str + i, c);
	return (str);
}

char	*call_percent(va_list ap, char *str)
{
	int i;

	(void) ap;
	i = my_printstrlen(str);
	my_printchar(str + i, '%');
	return (str);
}

char			*call_putstr(va_list ap, char *str)
{
	int i;
	char 	*add;

	i = my_printstrlen(str);
	add = va_arg(ap, char *);
	if (str == NULL)
    my_printstr(str + i, "(NULL)");
  else
    my_printstr(str + i, add);
	return (str);
}
