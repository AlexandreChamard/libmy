/*
** my_split.c for ok in /home/alexandre/Documents/lib/my_lib/lib_cheat/bonus/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Wed May 24 11:43:43 2017 Alexandre Chamard-bois
** Last update Wed Oct  4 14:58:25 2017 Alexandre Chamard-bois
*/

#include <stdlib.h>
#include <unistd.h>
#include "lib_cheat.h"

/* NON FONCTIONNEL */

char **cut(char **tab, char *str, int nb_word, const char sep)
{
  *str == sep ? : 0;
}

char		**my_wordtab(char *str, const char sep)
{
	char	**tab;
	int		nbw;
	int		i;
	int 	j;

	nbw = NW(str, sep);
	if (!(tab = malloc(sizeof(char *) * (nbw + 2))))
		return (NULL);
	tab[0] = str;
	i = 0;
	j = 0;
	while (i <= nbw)
	{
		while (str[j])
			j++;
		tab[i + 1] = str + j + 1;
		j++;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

// char **cut(char **tab, char *str, char c, int nb_word)
// {
//   *tab = *str != c ? str : (nb_word--, *str = 0, str + 1);
//   return (nb_word ? cut(tab + (!*str), str + 1, c, nb_word) : 0, tab);
// }
//
// char **my_split(char *str, char c)
// {
//   return (cut(malloc(sizeof(char*) * (NW(str, c) + 1)),
//      my_strdup(str), c, NW(str, c)));
// }
