/*
** my_genbr.c for my_getnbr in /home/Alex.Chamardbois/CPool/CPool_Day04
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Thu Oct  6 22:28:26 2016 Alexandre Chamard-bois
** Last update Fri Jan 27 12:54:02 2017 Alexandre Chamard-bois
*/

int			my_getnbr(char *str)
{
	long	nbr_long;
	int		i;
	int		nega;

	i = 0;
	nbr_long = 0;
	nega = 1;
	if (str[i] == '-')
	{
		nega = -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		nbr_long = nbr_long * 10 + str[i] - '0';
		i++;
	}
	nbr_long = nega * nbr_long;
	if (nbr_long > -2147483648 && nbr_long < 2147483647)
		return (nbr_long);
	return (0);
}
