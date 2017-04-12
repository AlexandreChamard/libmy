/*
** my_show_wordtab.c for myshowwordtab in /home/Alex.Chamardbois/CPool/CPool_Day08/task03
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Thu Oct 13 09:34:29 2016 Alexandre Chamard-bois
** Last update Wed Apr 12 23:18:51 2017 Alexandre Chamard-bois
*/

#include "libmy.h"

void		my_show_wordtab(char **tab)
{
	int	i;

	i = -1;
	while (tab[++i])
		my_puts(tab[i]);
}
