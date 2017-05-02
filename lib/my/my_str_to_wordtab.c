/*
** mystrtowordtab.c for  in /home/Alex.Chamardbois/CPool/CPool_Day08/task04
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Fri Oct 14 17:39:59 2016 Alexandre Chamard-bois
** Last update Mon May  1 10:59:52 2017 Alexandre Chamard-bois
*/

#include <stdlib.h>
#include "macro.h"

int	nb_word(const char *str)
{
	int in_word;
  int nb_word;

  nb_word = 0;
  if (BLANK(*str))
    in_word = 0;
  else
  {
    in_word = 1;
    nb_word = 1;
  }
  while (*str)
  {
    if (!BLANK(*str) && in_word == 0)
      nb_word++;
    if (BLANK(*str))
      in_word = 0;
    else
      in_word = 1;
    str++;
  }
  return (nb_word);
}

int	size_word(const char *str)
{
  int i;

  i = 0;
  while (str[i] && !BLANK(str[i]))
    i++;
  return (i);
}

int		get_word(char *tab, const char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != ' ')
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = 0;
	return (i);
}

char		**my_str_to_wordtab(const char *str)
{
	char	**tab;
	int		i;
	int		j;

	i = nb_word(str);
	if ((tab = malloc(sizeof(char *) * (i + 1))) == NULL)
		return (NULL);
	j = i;
	while (j > 0)
	{
		while (*str == ' ')
			str++;
		if ((tab[i - j] = malloc(sizeof(char) * (size_word(str) + 1))) == NULL)
			return (NULL);
		str += get_word(tab[i - j], str);
		j--;
	}
	tab[i] = NULL;
	return (tab);
}
