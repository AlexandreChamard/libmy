/*
** my_nb_line.c for ok in /home/alexandre/Documents/lib/my_lib/lib/my/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Fri Jan 27 16:54:35 2017 Alexandre Chamard-bois
** Last update Thu Nov 09 10:58:28 2017 alexandre Chamard-bois
*/

#include <sys/types.h>

int my_nb_line(const char **tab)
{
	size_t i = 0;

	while (tab[i]) {
		i++;
	}
	return (i);
}
