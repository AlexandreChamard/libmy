/*
** my_strcapitalize.c for my_strcapitalize in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 19:18:10 2016 Alexandre Chamard-bois
** Last update Sun Apr 30 12:56:32 2017 Alexandre Chamard-bois
*/

#include "macro.h"

static inline int an(const char c)
{
	if (UPPER(c))
		return (3);
	if (LOWER(c))
		return (2);
	if (NUM(c))
		return (1);
	return (0);
}

char	*my_strcapitalize(char *str)
{
	int	i;

	if (!str || !*str)
		return (str);
	if (an(*str) == 2)
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if (an(str[i]) == 3 && an(str[i - 1]))
			str[i] += 32;
		else if (an(str[i]) == 2 && !an(str[i - 1]))
			str[i] -= 32;
		i++;
	}
	return (str);
}

char	*my_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (UPPER(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*my_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (LOWER(str[i]))
			str[i] -= 32;
		i++;
	}
	return (str);
}
