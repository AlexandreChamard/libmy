/*
** my_free.c for ok in /home/alexandre/Documents/lib/my_lib/lib/my/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Fri Apr 14 08:13:04 2017 Alexandre Chamard-bois
** Last update Wed Nov 08 13:43:07 2017 alexandre Chamard-bois
*/

#include <stdlib.h>
#include "libmy.h"

char **free_tab(char **tab)
{
	size_t i = 0;

	while (tab[i]) {
		my_free(tab[i]);
		i++;
	}
	my_free(tab);
	return (NULL);
}
