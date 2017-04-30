/*
** my_show_wordtab.c for myshowwordtab in /home/Alex.Chamardbois/CPool/CPool_Day08/task03
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Thu Oct 13 09:34:29 2016 Alexandre Chamard-bois
** Last update Sun Apr 30 12:53:39 2017 Alexandre Chamard-bois
*/

#include "libmy.h"

void		my_show_wordtab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		my_puts(tab[i]);
		i++;
	}
}
