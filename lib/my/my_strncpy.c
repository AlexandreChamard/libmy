/*
** my_strncpy.c for mystrncpy in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 11:11:35 2016 Alexandre Chamard-bois
** Last update Tue Mar 21 16:02:05 2017 Alexandre Chamard-bois
*/

#include "my.h"

char	*my_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = -1;
	while (++i < n && src[i])
		dest[i] = src[i];
	while (++i < n)
		dest[i] = 0;
	dest[i] = 0;
	return (dest);
}
