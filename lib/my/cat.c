/*
** my_strcat.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Mon Jan  2 15:13:31 2017 Alexandre Chamard-bois
** Last update Wed Nov 08 13:37:16 2017 alexandre Chamard-bois
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "libmy.h"

char		*my_strcat(const char *first, const char *second)
{
	size_t	i = my_strlen(first);
	size_t	j = my_strlen(second);
	char	*concat = my_malloc(sizeof(char) * (i + j + 1));

	if (!concat) {
		return (NULL);
	}
	if (first) {
		my_strcpy(concat, first);
	}
	if (second) {
		my_strcpy(concat + i, second);
	}
	concat[i + j] = 0;
	return (concat);
}

char	*my_concat(const int nb, ...)
{
	va_list	ap;
	char 	*str = NULL;
	char 	*s1;
	char 	*s2;

	if (!nb) {
		return (NULL);
	}
	va_start(ap, nb);
	s1 = va_arg(ap, char *);
	for (int i = 1; i < nb; i++) {
		s2 = va_arg(ap, char *);
		s1 = my_strcat(s1, s2);
	}
	va_end(ap);
	return (str);
}

char	*my_strncat(const char *first, const char *second, size_t n)
{
	size_t	i = my_strlen(first);
	size_t	j = MIN(my_strlen(second), n);
	char	*concat = my_malloc(sizeof(char) * (i + j + 1));

	if (!concat) {
		return (NULL);
	}
	i = -1;
	while (first[++i]) {
		concat[i] = first[i];
	}
	j = -1;
	while (second[++j] && j < n) {
		concat[i + j] = second[j];
	}
	concat[i + j] = 0;
	return (concat);
}
