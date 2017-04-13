/*
** call_function2.c for ok in /home/alexandre/Documents/projet_perso/printf2.0/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Sun Feb  5 00:51:54 2017 Alexandre Chamard-bois
** Last update Thu Apr 13 10:16:37 2017 Alexandre Chamard-bois
*/

#include "myprint.h"

char            *call_put_unsigned_nbr(va_list ap, char *str)
{
	int i;
	unsigned int	nb;

	i = my_printstrlen(str);
	nb = va_arg(ap, int);
	my_printnbr_base(str + i, nb, "0123456789");
	str = my_printrevstr(str, i);
	return (str);
}

char				    *call_put_o_nbr(va_list ap, char *str)
{
	int i;
	unsigned int	nb;

	i = my_printstrlen(str);
	nb = va_arg(ap, unsigned int);
	my_printnbr_base(str + i, nb, "01234567");
	str = my_printrevstr(str, i);
	return (str);
}

char            *call_put_b_nbr(va_list ap, char *str)
{
	int i;
	unsigned int	nb;

	i = my_printstrlen(str);
	nb = va_arg(ap, unsigned int);
	my_printnbr_base(str + i, nb, "01");
	str = my_printrevstr(str, i);
	return (str);
}

char            *call_put_x_nbr(va_list ap, char *str)
{
	int i;
	unsigned int	nb;

	i = my_printstrlen(str);
	nb = va_arg(ap, unsigned int);
	my_printnbr_base(str + i, nb, "0123456789abcdef");
	str = my_printrevstr(str, i);
	return (str);
}

char            *call_put_X_nbr(va_list ap, char *str)
{
	int i;
	unsigned int	nb;

	i = my_printstrlen(str);
	nb = va_arg(ap, unsigned int);
	my_printnbr_base(str + i, nb, "0123456789ABCDEF");
	str = my_printrevstr(str, i);
	return (str);
}
