/*
** my_strlen.c for my_strlen in /home/Alex.Chamardbois/CPool/CPool_Day04
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Thu Oct  6 15:32:00 2016 Alexandre Chamard-bois
** Last update Thu Nov 09 11:22:36 2017 alexandre Chamard-bois
*/

#include <sys/types.h>

size_t		my_strlen(const char *str)
{
	size_t i = 0;

	if (!str) {
		return (0);
	}
	while (str[i]) {
		i++;
	}
	return (i);
}
