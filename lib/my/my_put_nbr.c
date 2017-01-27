/*
** my_put_nbr.c for my_put_nbr in /home/Alex.Chamardbois/CPool/CPool_Day03
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Wed Oct  5 23:04:45 2016 Alexandre Chamard-bois
** Last update Fri Jan 27 12:55:47 2017 Alexandre Chamard-bois
*/

#include <unistd.h>

static inline void	my_print(char c)
{
	write(1, &c, 1);
}

static inline void rec_nbr(int n)
{
	if (n >= 10)
	{
		rec_nbr(n / 10);
		my_print(n % 10 + '0');
	}
	my_print(n % 10 + '0');
}

int my_put_nbr(int nbr)
{
	if (nbr < 0)
	{
		my_print('-');
		rec_nbr(-1 * nbr);
	}
	else
		rec_nbr(nbr);
	return (0);
}
