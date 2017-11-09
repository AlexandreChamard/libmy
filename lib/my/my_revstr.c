/*
** my_revstr.c for myrevstr in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 11:40:03 2016 Alexandre Chamard-bois
** Last update Thu Nov 09 11:59:09 2017 alexandre Chamard-bois
*/

#include "libmy.h"

char		*my_revstr(char *str)
{
	char	remplace;
	size_t	size = my_strlen(str) - 1;

	if (!str) {
		return (NULL);
	}
	for (size_t i = 0; i < size / 2; i++) {
		remplace = str[i];
		str[i] = str[size - i];
		str[size - i] = remplace;
	}
	return (str);
}
