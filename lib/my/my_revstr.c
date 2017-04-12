/*
** my_revstr.c for myrevstr in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 11:40:03 2016 Alexandre Chamard-bois
** Last update Wed Apr 12 21:54:53 2017 Alexandre Chamard-bois
*/

#include "libmy.h"

char		*my_revstr(char *str)
{
	char	remplace;
	int		size;
	int		i;

	size = my_strlen(str) - 1;
	i = 0;
	while (i < size)
	{
		remplace = str[i];
		str[i] = str[size];
		str[size] = remplace;
		i++;
		size--;
	}
	return (str);
}
