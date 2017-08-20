/*
** mystrtowordtab.c for  in /home/Alex.Chamardbois/CPool/CPool_Day08/task04
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Fri Oct 14 17:39:59 2016 Alexandre Chamard-bois
** Last update Sun Aug 20 19:36:44 2017 Alexandre Chamard-bois
*/

#include <stdlib.h>
#include "libmy.h"

int is_sep(char c, const char *sep)
{
	int i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	nb_word(const char *str, const char *sep)
{
	int in_word;
  int nb_word;

  nb_word = 0;
  if (is_sep(*str, sep))
    in_word = 0;
  else
  {
    in_word = 1;
    nb_word = 1;
  }
  while (*str)
  {
    if (!is_sep(*str, sep) && !in_word)
      nb_word++;
    if (is_sep(*str, sep))
      in_word = 0;
    else
      in_word = 1;
    str++;
  }
  return (nb_word);
}

int	size_word(const char *str, const char *sep)
{
  int i;

  i = 0;
  while (str[i] && !is_sep(str[i], sep))
    i++;
  return (i);
}

int		get_word(char *tab, const char *str, const char *sep)
{
	int	i;

	i = 0;
	while (str[i] && !is_sep(str[i], sep))
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = 0;
	return (i);
}

char		**my_str_to_wordtab(const char *str, const char *sep)
{
	char	**tab;
	int		nword;
	int		i;

	nword = nb_word(str, sep);
	if (!(tab = my_malloc(sizeof(char *) * (nword + 1))))
		return (NULL);
	i = 0;
	while (i < nword)
	{
		while (is_sep(*str, sep))
			str++;
		if (!(tab[i] = my_malloc(sizeof(char) * (size_word(str, sep) + 1))))
		{
			free_tab(tab);
			return (NULL);
		}
		str += get_word(tab[i], str, sep);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
