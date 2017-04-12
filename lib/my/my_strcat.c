/*
** my_strcat.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Mon Jan  2 15:13:31 2017 Alexandre Chamard-bois
** Last update Wed Apr 12 23:28:47 2017 Alexandre Chamard-bois
*/

#include <stdlib.h>
#include <unistd.h>
#include "macro.h"

char		*my_strcat(const char *first, const char *second)
{
	int		i;
	int		j;
	char	*concat;

	i = -1;
	while (first[++i]);
	j = -1;
	while (second[++j]);
	if (!(concat = malloc(sizeof(char) * (i + j + 1))))
		return (NULL);
	i = -1;
	while (first[++i])
		concat[i] = first[i];
	j = -1;
	while (second[++j])
		concat[i + j] = second[j];
	concat[i + j] = 0;
	return (concat);
}

char	*my_strncat(const char *first, const char *second, const int n)
{
	int		i;
	int		j;
	char	*concat;

	i = -1;
	while (first[++i]);
	j = -1;
	while (second[++j]);
	j = MIN(j, n);
	if (!(concat = malloc(sizeof(char) * (i + j + 1))))
		return (NULL);
	i = -1;
	while (first[++i])
		concat[i] = first[i];
	j = -1;
	while (second[++j] && j < n)
		concat[i + j] = second[j];
	concat[i + j] = 0;
	return (concat);
}
