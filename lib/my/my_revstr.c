/*
** my_revstr.c for myrevstr in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 11:40:03 2016 Alexandre Chamard-bois
** Last update Wed Apr 12 23:00:37 2017 Alexandre Chamard-bois
*/

#include "libmy.h"

char		*my_revstr(char *str)
{
	char	remplace;
	int		size;
	int		i;

	if (!str)
		return (str);
	size = my_strlen(str) - 1;
	i = -1;
	while (++i < size / 2)
	{
		remplace = str[i];
		str[i] = str[size - i];
		str[size - i] = remplace;
	}
	return (str);
}
