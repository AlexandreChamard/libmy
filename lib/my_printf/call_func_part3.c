/*
** call_func_part3.c for ok in /home/alexandre/Documents/tek-1/PSU_2016_my_printf/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Wed Nov 16 14:42:11 2016 Alexandre Chamard-bois
** Last update Fri Jan 27 13:21:54 2017 Alexandre Chamard-bois
*/

#include "my_printf.h"

int									call_put_adr(va_list ap)
{
	unsigned long int	nb;
	int								count;

	count = 0;
	nb = va_arg(ap, unsigned long int);
	count = my_putstr("0x", count);
	count = my_put_nbr_base(nb, "0123456789abcdef", count);
	return (count);
}
