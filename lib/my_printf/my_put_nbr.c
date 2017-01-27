/*
** my_put_nbr.c for my_put_nbr in /home/Alex.Chamardbois/CPool/CPool_Day03
**
** Made by Alexandre Chamard-bois
** Login	 <Alex.Chamardbois@epitech.net>
**
** Started on  Wed Oct  5 23:04:45 2016 Alexandre Chamard-bois
** Last update Fri Jan  6 11:20:19 2017 Alexandre Chamard-bois
*/

#include "my_printf.h"

static int	modulo(int nb)
{
	int				i;

	i = 1;
	while (nb > 9)
	{
		nb = nb / 10;
		i = i * 10;
	}
	return (i);
}

static int	modulo_unsigned(unsigned int nb)
{
	int				i;

	i = 1;
	while (nb > 9)
	{
		nb = nb / 10;
		i = i * 10;
	}
	return (i);
}

int		my_put_nbr(int nb, int count)
{
	int	mod;
	int	i;

	i = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	mod = modulo(nb);
	while (mod > 0)
	{
		i = nb / mod;
		my_putchar(i + 48);
		nb = nb - mod * i;
		mod = mod / 10;
		count += 1;
	}
	return (count);
}

int		my_put_unsigned_nbr(unsigned int nb, int count)
{
	int	mod;
	int	i;

	i = 0;
	mod = modulo_unsigned(nb);
	while (mod > 0)
	{
		i = nb / mod;
		my_putchar(i + 48);
		nb = nb - mod * i;
		mod = mod / 10;
		count += 1;
	}
	return (count);
}
