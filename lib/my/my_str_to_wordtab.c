/*
** mystrtowordtab.c for  in /home/Alex.Chamardbois/CPool/CPool_Day08/task04
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Fri Oct 14 17:39:59 2016 Alexandre Chamard-bois
** Last update Fri Jan 27 13:05:34 2017 Alexandre Chamard-bois
*/
#include <stdlib.h>

int	nb_word(char *s, int i, int n)
{
	*s ? *s != ' ' && !i ? n += 1 : 0 : 0;
	return (*s ? *s == ' ' ? nb_word(s + 1, 0, n) : nb_word(s + 1, 1, n) : n);
}

int	size_word(char *s)
{
	return (*s != ' ' ? size_word(s + 1) + 1 : 0);
}

int		get_word(char *tab, char *str)
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

char		**my_str_to_wordtab(char *str)
{
	char	**tab;
	int		i;
	int		j;

	i = nb_word(str, 0, 0);
	if ((tab = malloc(sizeof(char *) * (i + 1))) == NULL)
		return (NULL);
	j = i;
	while (j > 0)
	{
		while (*str == ' ')
			str += 1;
		if ((tab[i - j] = malloc(sizeof(char) * (size_word(str) + 1))) == NULL)
			return (NULL);
		str += get_word(tab[i - j], str);
		j--;
	}
	tab[i] = NULL;
	return (tab);
}
