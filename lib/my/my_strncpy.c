/*
** my_strncpy.c for mystrncpy in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 11:11:35 2016 Alexandre Chamard-bois
** Last update Fri Jan 27 13:15:13 2017 Alexandre Chamard-bois
*/

#include "my.h"

char	*my_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (i != n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
