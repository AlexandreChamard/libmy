/*
** my_is_prime.c for my_is_prime in /home/Alex.Chamardbois/CPool/CPool_Day05
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Fri Oct  7 21:28:04 2016 Alexandre Chamard-bois
** Last update Fri Jan 27 12:54:44 2017 Alexandre Chamard-bois
*/

int		my_is_prime(int nb)
{
	int	nbr_inf;

	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0)
		return (0);
	if (nb < 2)
		return (0);
	nbr_inf = 3;
	while (nbr_inf < nb)
	{
		if (nb % nbr_inf == 0)
			return (0);
		nbr_inf = nbr_inf + 2;
	}
	return (1);
}
