/*
** my_genbr.c for my_getnbr in /home/Alex.Chamardbois/CPool/CPool_Day04
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Thu Oct  6 22:28:26 2016 Alexandre Chamard-bois
** Last update Tue Mar 21 15:48:37 2017 Alexandre Chamard-bois
*/

int			my_getnbr(char *str)
{
	int		nbr;
	int		nega;

	nbr = 0;
	nega = 1;
	if (*str == '-' && (nega = -1))
		str++;
	while (*str <= '9' && *str >= '0')
	{
		nbr = nbr * 10 + *str - '0';
		str++;
	}
	return (nega * nbr);
}
