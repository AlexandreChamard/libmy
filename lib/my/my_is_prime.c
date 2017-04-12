/*
** my_is_prime.c for my_is_prime in /home/Alex.Chamardbois/CPool/CPool_Day05
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Fri Oct  7 21:28:04 2016 Alexandre Chamard-bois
** Last update Wed Apr 12 23:12:13 2017 Alexandre Chamard-bois
*/

int		my_is_prime(const int nb)
{
	int	nbr_inf;

	if (nb == 2)
		return (1);
	if (!(nb % 2) || nb < 2)
		return (0);
	nbr_inf = 1;
	while ((nbr_inf += 2) < nb)
		if (!(nb % nbr_inf))
			return (0);
	return (1);
}
