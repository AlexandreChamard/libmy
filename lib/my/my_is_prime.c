/*
** my_is_prime.c for my_is_prime in /home/Alex.Chamardbois/CPool/CPool_Day05
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Fri Oct  7 21:28:04 2016 Alexandre Chamard-bois
** Last update Thu Nov 09 10:55:37 2017 alexandre Chamard-bois
*/

int		my_is_prime(const int nb)
{
	if (nb == 2) {
		return (1);
	}
	if (nb < 2 || !(nb % 2)) {
		return (0);
	}
	for (int nbr_inf = 3; nbr_inf < nb; nbr_inf += 2) {
		if (!(nb % nbr_inf)) {
			return (0);
		}
	}
	return (1);
}
