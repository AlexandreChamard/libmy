/*
** mystr_islower.c for mystrislower in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 20:19:49 2016 Alexandre Chamard-bois
** Last update Thu Nov 09 10:57:40 2017 alexandre Chamard-bois
*/

#include "macro.h"

int	my_str_islower(const char *str)
{
	while (LOWER(*str)) {
		str++;
	}
	return (!*str);
}

int	my_str_isupper(const char *str)
{
	while (UPPER(*str)) {
		str++;
	}
	return (!*str);
}

int	my_str_isprintable(const char *str)
{
	while (*str >= 32 && *str <= 126) {
		str++;
	}
	return (!*str);
}

int	my_str_isalpha(const char *str)
{
	while (UPPER(*str) || LOWER(*str)) {
		str++;
	}
	return (!*str);
}

int	my_str_isalpha_num(const char *str)
{
	while (UPPER(*str) || LOWER(*str) || NUM(*str) || *str == '_') {
		str++;
	}
	return (!*str);
}
