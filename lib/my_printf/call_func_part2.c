/*
** call_funct_part2.c for ok in /home/alexandre/Documents/tek-1/PSU_2016_my_printf/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Wed Nov 16 14:40:52 2016 Alexandre Chamard-bois
** Last update Fri Jan 27 13:20:35 2017 Alexandre Chamard-bois
*/

#include "my_printf.h"

int							call_put_o_nbr(va_list ap)
{
	unsigned int	nb;
	int 					count;

	count = 0;
	nb = va_arg(ap, unsigned int);
	count = my_put_nbr_base(nb, "01234567", count);
	return (count);
}

int							call_put_b_nbr(va_list ap)
{
	unsigned int	nb;
	int						count;

	count = 0;
	nb = va_arg(ap, unsigned int);
	count = my_put_nbr_base(nb, "01", count);
	return (count);
}

int							call_put_unsigned_nbr(va_list ap)
{
	unsigned int	nb;
	int						count;

	count = 0;
	nb = va_arg(ap, unsigned int);
	count = my_put_unsigned_nbr(nb, count);
	return (count);
}

int							call_put_x_nbr(va_list ap)
{
	unsigned int	nb;
	int						count;

	count = 0;
	nb = va_arg(ap, unsigned int);
	count = my_put_nbr_base(nb, "0123456789abcdef", count);
	return (count);
}

int							call_put_X_nbr(va_list ap)
{
	unsigned int	nb;
	int						count;

	count = 0;
	nb = va_arg(ap, unsigned int);
	count = my_put_nbr_base(nb, "0123456789ABCDEF", count);
	return (count);
}
