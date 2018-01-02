/*
** my_strtoc.c for ok in /home/alexandre/Documents/lib/my_lib/lib/my/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Wed Apr 12 20:06:42 2017 Alexandre Chamard-bois
** Last update Thu Nov 09 11:28:08 2017 alexandre Chamard-bois
*/

#include <sys/types.h>
#include "libmy.h"

int is_separator(char c, const char *separators)
{
	for (size_t i = 0; separators[i]; i++) {
		if (c == separators[i]) {
			return (1);
		}
	}
	return (0);
}

char *my_strtok(const char *str, const char *separators)
{
	static const char *save = NULL;
	static int j = 0;
	char *new_str;
	int i = j;

	if (!save || save != str) {
		save = str;
	}
	if (!str[j]) {
		return (NULL);
	}
	while (str[i] && !is_separator(str[i], separators)) {
		i++;
	}
	new_str = my_strndup(str + j, i - j);
	j = i;
	while (is_separator(str[j], separators)) {
		j++;
	}
	return (new_str);
}
