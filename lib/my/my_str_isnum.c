/*
** my_str_isnum.c for mystrisnum in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 20:11:24 2016 Alexandre Chamard-bois
** Last update Thu Nov 09 11:11:31 2017 alexandre Chamard-bois
*/

#include "macro.h"

int		my_str_isnum(const char *str)
{
	if (*str == '-') {
		str++;
	}
	while (NUM(*str)) {
		str++;
	}
	return (!*str);
}

int my_is_float(const char *str)
{
	if (*str == '-') {
		str++;
	}
	while (NUM(*str)) {
		str++;
	}
	if (*str == '.') {
		str++;
		while (NUM(*str)) {
			str++;
		}
	}
	return (!*str);
}
