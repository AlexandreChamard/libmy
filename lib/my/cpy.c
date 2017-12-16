/*
** my_strcpy.c for mystrcpy in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 09:35:53 2016 Alexandre Chamard-bois
** Last update Thu Nov 09 14:33:37 2017 alexandre Chamard-bois
*/

#include <sys/types.h>

char	*my_strcpy(char *dest, const char *src)
{
	size_t	i = 0;

	while (src[i]) {
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	*my_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i = 0;

	while (i < n && src[i]) {
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

void *my_memcpy(void *dest, const void *src, size_t size)
{
	return (my_strncpy(dest, src, size));
}
