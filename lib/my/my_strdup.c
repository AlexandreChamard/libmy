/*
** my_strdup.c for mystrdup in /home/Alex.Chamardbois/CPool/CPool_Day08
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Wed Oct 12 10:27:02 2016 Alexandre Chamard-bois
** Last update Fri Jan 27 13:10:13 2017 Alexandre Chamard-bois
*/
#include <stdlib.h>
#include "my.h"

char		*my_strdup(char *src)
{
	char	*str;
	int		size_str;

	size_str = my_strlen(src) + 1;
	str = malloc(sizeof(char) * size_str);
	if (str == NULL)
		return (NULL);
	my_strcpy(str, src);
	return (str);
}
