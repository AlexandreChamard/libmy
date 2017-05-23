/*
** mystr_islower.c for mystrislower in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 20:19:49 2016 Alexandre Chamard-bois
** Last update Mon May  8 11:28:27 2017 Alexandre Chamard-bois
*/

#include "macro.h"

int		my_str_islower(const char *str)
{
	while (LOWER(*str))
    str++;
  if (*str)
	 return (0);
  return (1);
}

int		my_str_isupper(const char *str)
{
	while (UPPER(*str))
    str++;
  if (*str)
	 return (0);
  return (1);
}

int		my_str_isprintable(const char *str)
{
	while (*str >= 32 && *str <= 126)
    str++;
  if (*str)
    return (0);
	return (1);
}

int		my_str_isalpha(const char *str)
{
	while (UPPER(*str) || LOWER(*str))
		str++;
	if (*str)
		return (0);
	return (1);
}

int		my_str_isalpha_num(const char *str)
{
	while (UPPER(*str) || LOWER(*str) || NUM(*str) || *str == '_')
		str++;
	if (*str)
		return (0);
	return (1);
}
