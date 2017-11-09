/*
** my_strdup.c for mystrdup in /home/Alex.Chamardbois/CPool/CPool_Day08
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Wed Oct 12 10:27:02 2016 Alexandre Chamard-bois
** Last update Wed Nov 08 13:38:27 2017 alexandre Chamard-bois
*/
#include <stdlib.h>
#include "libmy.h"

char		*my_strdup(const char *src)
{
	char	*str;

	if (!src) {
		return (NULL);
	}
	str = my_malloc(sizeof(char) * (my_strlen(src) + 1));
	if (!str) {
		return (NULL);
	}
	my_strcpy(str, src);
	return (str);
}

char		*my_strndup(const char *src, size_t i)
{
	char	*str;
	size_t	size_str;

	if (!src) {
		return (NULL);
	}
	size_str = MIN(my_strlen(src), i);
	if (!(str = my_malloc(sizeof(char) * (size_str + 1))))
		return (NULL);
	my_strncpy(str, src, size_str);
	return (str);
}

char 		*my_worddup(const char *str)
{
	int 	i;
	char 	*word;
	int 	quote;

	i = 0;
	quote = 0;
	while (str[i])
	{
		if (QUOTE(str[i]))
			quote = QUOTE(str[i]);
		if (SPACE(str[i]) && !quote)
			break;
		i++;
	}
	if (!i)
		return (NULL);
	if (!(word = my_malloc(sizeof(char) * (i + 1))))
		return (NULL);
	word = my_strncpy(word, str, i - 1);
	word[i] = 0;
	return (word);
}

char **my_tabdup(const char **tab)
{
	char **new_tab;
	int i;
	int j;

	i = my_nb_line(tab) - 1;
	if (!(new_tab = my_malloc(sizeof(char *) * (i + 1))))
		return (NULL);
	new_tab[i] = NULL;
	while (i >= 0)
	{
		j = my_strlen(tab[i]) - 1;
		if (!(new_tab[i] = my_malloc(sizeof(char) * (j + 1))))
			return (NULL);
		new_tab[i][j] = 0;
		while (j >= 0)
		{
			new_tab[i][j] = tab[i][j];
			j--;
		}
		i--;
	}
	return (new_tab);
}

void *my_memdup(const void *ptr, size_t size)
{
  void *new_ptr;

  if (!(new_ptr = my_malloc(sizeof(size))))
    return (NULL);
  my_memcpy(new_ptr, ptr, size);
  return (new_ptr);
}
