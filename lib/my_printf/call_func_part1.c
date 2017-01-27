/*
** call_func.c for ok in /home/alexandre/Documents/tek-1/PSU_2016_my_printf/
**
** Made by Alexandre Chamard-bois
** Login  <alexandre.chamard-bois@epitech.eu>
**
** Started on	Mon Nov 14 21:35:24 2016 Alexandre Chamard-bois
** Last update Fri Jan	6 11:20:29 2017 Alexandre Chamard-bois
*/

#include "my_printf.h"

int 		call_putchar(va_list ap)
{
	char	c;

	c = va_arg(ap, int);
	my_putchar(c);
	return (1);
}

int	call_percent(va_list ap)
{
	(void) ap;
	my_putchar('%');
	return (1);
}

int			call_putstr(va_list ap)
{
	int 	count;
	char 	*str;

	count = 0;
	str = va_arg(ap, char *);
	if (str == NULL)
	{
		count = my_putstr("(NULL)", count);
		return (count);
	}
	count = my_putstr(str, count);
	return (count);
}

int			call_putstr_S(va_list ap)
{
	int		count;
	char 	*str;

	count = 0;
	str = va_arg(ap, char *);
	if (str == NULL)
	{
		count = my_putstr("(NULL)", count);
		return (count);
	}
	count = my_putstr_S(str, count);
	return (count);
}

int		call_put_nbr(va_list ap)
{
	int	nb;
	int	count;

	count = 0;
	nb = va_arg(ap, int);
	count = my_put_nbr(nb, count);
	return (count);
}
