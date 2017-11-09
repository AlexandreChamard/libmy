/*
** my_split.c for ok in /home/alexandre/Documents/lib/my_lib/lib/my/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Wed Apr 12 21:33:43 2017 Alexandre Chamard-bois
** Last update Thu Nov 09 11:08:41 2017 alexandre Chamard-bois
*/

#include <stdlib.h>
#include <stdarg.h>
#include "libmy.h"

char **init_separator(va_list ap, int nb)
{
	char **sep = my_malloc(sizeof(char *) * (nb + 1));
	char *str;
	int i = 0;

	if (!sep)
	return (NULL);
	for (; i < nb; i++) {
		str = va_arg(ap, char *);
		sep[i] = my_strdup(str);
	}
	sep[i] = NULL;
	va_end(ap);
	return (sep);
}

int verif_separator(char *str, char **separator)
{
	for (size_t i = 0; separator[i]; i++) {
		if (!my_wordcmp(str, separator[i])) {
			return (i);
		}
	}
	return (-1);
}

char *my_split(char *str, int *who, const int nb, ...)
{
	char **separator;
	char *split;
	int i = 0;
	int whoo;
	va_list ap;

	va_start(ap, nb);
	if (!(separator = init_separator(ap, nb)) || !str || !*str)
	return (NULL);
	while (str[i] && (whoo = verif_separator(str + i, separator)) == -1)
	i++;
	split = my_strndup(str, i);
	if (str[i]) {
		my_strcpy(str, str + i + my_strlen(separator[whoo]));
	} else {
		my_strcpy(str, str + i);
	}
	if (who)
	*who = whoo;
	clean_line(str);
	clean_line(split);
	return (split);
}
