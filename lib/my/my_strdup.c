/*
** my_strdup.c for mystrdup in /home/Alex.Chamardbois/CPool/CPool_Day08
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Wed Oct 12 10:27:02 2016 Alexandre Chamard-bois
** Last update Wed Apr 12 21:36:58 2017 Alexandre Chamard-bois
*/
#include <stdlib.h>
#include "libmy.h"

char		*my_strdup(const char *src)
{
	char	*str;
	int		size_str;

	size_str = my_strlen(src);
	if (!(str = malloc(sizeof(char) * (size_str + 1))))
		return (NULL);
	if (!str)
		return (NULL);
	my_strcpy(str, src);
	return (str);
}

char		*my_strndup(const char *src, int i)
{
	char	*str;
	int		size_str;

	size_str = MIN(my_strlen(src), i);
	if (!(str = malloc(sizeof(char) * (size_str + 1))))
		return (NULL);
	if (!str)
		return (NULL);
	my_strncpy(str, src, size_str);
	str[size_str] = 0;
	return (str);
}

char 		*my_worddup(char *str)
{
	int 	i;
	char 	*word;
	int 	quote;

	i = 0;
	quote = 0;
	while (str[i])
	{
		if (IS_QUOTE(str[i]))
			quote = IS_QUOTE(str[i]);
		if (!IS_SPACE(str[i]) && !quote)
			break;
		i++;
	}
	if (!i)
		return (NULL);
	if (!(word = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	word = my_strncpy(word, str, i - 1);
	word[i] = 0;
	return (word);
}
