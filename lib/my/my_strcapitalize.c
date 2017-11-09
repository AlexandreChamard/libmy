/*
** my_strcapitalize.c for my_strcapitalize in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 19:18:10 2016 Alexandre Chamard-bois
** Last update Thu Nov 09 11:21:39 2017 alexandre Chamard-bois
*/

#include <sys/types.h>
#include "macro.h"

static inline int an(const char c)
{
	if (UPPER(c)) {
		return (3);
	}
	if (LOWER(c)) {
		return (2);
	}
	return (NUM(c));
}

char	*my_strcapitalize(char *str)
{
	if (!str || !*str) {
		return (str);
	}
	if (an(*str) == 2) {
		*str -= 32;
	}
	for (size_t i = 1; str[i]; i++) {
		if (an(str[i]) == 3 && an(str[i - 1])) {
			str[i] += 32;
		} else if (an(str[i]) == 2 && !an(str[i - 1])) {
			str[i] -= 32;
		}
	}
	return (str);
}

char	*my_strlowcase(char *str)
{
	for (size_t i = 0; str[i]; i++) {
		if (UPPER(str[i])) {
			str[i] += 32;
		}
	}
	return (str);
}

char	*my_strupcase(char *str)
{
	for (size_t i = 0; str[i]; i++) {
		if (LOWER(str[i])) {
			str[i] -= 32;
		}
	}
	return (str);
}
