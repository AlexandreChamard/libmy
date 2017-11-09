/*
** call_function1.c for ok in /home/alexandre/Documents/projet_perso/printf2.0/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Sun Feb  5 00:45:12 2017 Alexandre Chamard-bois
** Last update Thu Nov 09 11:29:41 2017 alexandre Chamard-bois
*/

#include "printf.h"

char		*put_char(char *str, char c)
{
	int 	i = my_printstrlen(str);

	my_printchar(str + i, c);
	return (str);
}

char 		*call_putchar(va_list ap, char *str)
{
	int 	i = my_printstrlen(str);
	char	c = va_arg(ap, int);

	my_printchar(str + i, c);
	return (str);
}

char		*call_percent(va_list ap, char *str)
{
	int 	i = my_printstrlen(str);

	(void) ap;
	my_printchar(str + i, '%');
	return (str);
}

char		*call_putstr(va_list ap, char *str)
{
	int	i = my_printstrlen(str);
	char	*add = va_arg(ap, char *);

	if (!str) {
		my_printstr(str + i, "(NULL)");
	} else {
		my_printstr(str + i, add);
	}
	return (str);
}
