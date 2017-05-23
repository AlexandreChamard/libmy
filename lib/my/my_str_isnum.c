/*
** my_str_isnum.c for mystrisnum in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 20:11:24 2016 Alexandre Chamard-bois
** Last update Mon May  8 11:27:40 2017 Alexandre Chamard-bois
*/

#include "macro.h"

int		my_str_isnum(const char *str)
{
	if (*str == '-')
		str++;
	while (NUM(*str))
		str++;
	if (*str)
		return (0);
	return (1);
}

int my_is_float(const char *str)
{
	if (*str == '-')
		str++;
	while (NUM(*str))
		str++;
	if (*str == '.')
	{
		str++;
		while (NUM(*str))
			str++;
	}
	if (*str)
		return (0);
	return (1);
}
