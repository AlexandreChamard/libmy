/*
** mystrtowordtab.c for  in /home/Alex.Chamardbois/CPool/CPool_Day08/task04
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Fri Oct 14 17:39:59 2016 Alexandre Chamard-bois
** Last update Thu Nov 09 12:00:18 2017 alexandre Chamard-bois
*/

#include <stdlib.h>
#include "libmy.h"

int is_sep(char c, const char *sep)
{
	for (size_t i = 0; sep[i]; i++) {
		if (c == sep[i]) {
			return (1);
		}
	}
	return (0);
}

int	nb_word(const char *str, const char *sep)
{
	int in_word = !is_sep(*str, sep);
	int nb_word = in_word;

	while (*str) {
		if (!is_sep(*str, sep) && !in_word) {
			nb_word++;
		}
		if (is_sep(*str, sep)) {
			in_word = 0;
		} else {
			in_word = 1;
		}
		str++;
	}
	return (nb_word);
}

int	size_word(const char *str, const char *sep)
{
	size_t i = 0;

	while (str[i] && !is_sep(str[i], sep)) {
		i++;
	}
	return (i);
}

int		get_word(char *tab, const char *str, const char *sep)
{
	size_t	i = 0;

	for (; str[i] && !is_sep(str[i], sep); i++) {
		tab[i] = str[i];
	}
	tab[i] = 0;
	return (i);
}

char		**my_str_to_wordtab(const char *str, const char *sep)
{
	size_t	nword = nb_word(str, sep);
	char	**tab = my_malloc(sizeof(char *) * (nword + 1));
	size_t	i = 0;

	if (!tab) {
		return (NULL);
	}
	for (; i < nword; i++) {
		while (is_sep(*str, sep)) {
			str++;
		}
		tab[i] = my_malloc(sizeof(char) * (size_word(str, sep) + 1));
		if (!tab[i]) {
			free_tab(tab);
			return (NULL);
		}
		str += get_word(tab[i], str, sep);
	}
	tab[i] = NULL;
	return (tab);
}
