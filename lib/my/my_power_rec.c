/*
** my_power_rec.c for my_power_rec in /home/Alex.Chamardbois/CPool/CPool_Day05
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Fri Oct  7 20:30:50 2016 Alexandre Chamard-bois
** Last update Wed Apr 12 21:53:48 2017 Alexandre Chamard-bois
*/

int			my_power_rec(const int nb, const int p)
{
	long	result;

	if (p < 0)
		return (0);
	if (p	== 0)
		return (1);
	result = nb * my_power_rec(nb, p - 1);
	if (result < -2147483648 || result > 2147483647)
		return (0);
	return (result);
}
