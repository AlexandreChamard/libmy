/*
** my_put_nbr.c for my_put_nbr in /home/Alex.Chamardbois/CPool/CPool_Day03
**
** Made by Alexandre Chamard-bois
** Login	 <Alex.Chamardbois@epitech.net>
**
** Started on	Wed Oct	5 23:04:45 2016 Alexandre Chamard-bois
** Last update Fri Jan	6 11:20:14 2017 Alexandre Chamard-bois
*/

#include "my_printf.h"

static int	modulo(unsigned int nb, unsigned int size)
{
	int				i;

	i = 1;
	while (nb > size - 1)
	{
		nb = nb / size;
		i = i * size;
	}
	return (i);
}

int					my_put_nbr_base(unsigned int nb, char *bs, int count)
{
	unsigned int	size;
	int						mod;
	int						i;

	size = my_strlen(bs);
	i = 0;
	mod = modulo(nb, size);
	while (mod > 0)
	{
		i = nb / mod;
		my_putchar(bs[i]);
		nb = nb - mod * i;
		mod = mod / size;
		count += 1;
	}
	return (count);
}

static int	modul(unsigned long int nb, unsigned long int size)
{
	long int	i;

	i = 1;
	while (nb > size - 1)
	{
		nb = nb / size;
		i = i * size;
	}
	return (i);
}

int					my_put_adr(unsigned long int nb, char *bs, int count)
{
	unsigned int	size;
	long int			mod;
	long int			i;

	size = my_strlen(bs);
	i = 0;
	mod = modul(nb, size);
	while (mod > 0)
	{
		i = nb / mod;
		my_putchar(bs[i]);
		nb = nb - mod * i;
		mod = mod / size;
		count += 1;
	}
	return (count);
}
