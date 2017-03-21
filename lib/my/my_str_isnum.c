/*
** my_str_isnum.c for mystrisnum in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 20:11:24 2016 Alexandre Chamard-bois
** Last update Tue Mar 21 15:52:46 2017 Alexandre Chamard-bois
*/

int		my_str_isnum(char *str)
{
	while (*str >= '0' && *str <= '9')
		str++;
	if (*str)
		return (1);
	return (0);
}
