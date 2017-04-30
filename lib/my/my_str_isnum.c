/*
** my_str_isnum.c for mystrisnum in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 20:11:24 2016 Alexandre Chamard-bois
** Last update Sun Apr 30 12:48:05 2017 Alexandre Chamard-bois
*/

#include "macro.h"

int		my_str_isnum(const char *str)
{
	if (*str == '-')
		str++;
	while (NUM(*str))
		str++;
	if (*str)
		return (1);
	return (0);
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
		return (1);
	return (0);
}
