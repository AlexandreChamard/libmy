/*
** my_realloc.c for ok in /home/alexandre/Documents/projet_perso/printf2.0/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Sun Feb  5 00:20:43 2017 Alexandre Chamard-bois
** Last update Thu Nov 09 12:01:13 2017 alexandre Chamard-bois
*/

#include "printf.h"
#include "libmy.h"

char	*_printf_realloc(char *str, size_t newsize)
{
	char	*newstr = my_malloc(sizeof(char) * newsize);
	size_t i = 0;

	if (!newstr) {
		return (NULL);
	}
	if (str) {
		for (; str[i] && i < newsize; i++) {
			newstr[i] = str[i];
		}
		my_free(str);
	}
	newstr[i] = 0;
	return (newstr);
}
