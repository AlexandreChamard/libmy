/*
** my_show_wordtab.c for myshowwordtab in /home/Alex.Chamardbois/CPool/CPool_Day08/task03
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Thu Oct 13 09:34:29 2016 Alexandre Chamard-bois
** Last update Thu Nov 09 11:02:31 2017 alexandre Chamard-bois
*/

#include "libmy.h"

void	my_show_wordtab(char **tab)
{
	for (size_t i = 0; tab[i]; i++) {
		my_puts(tab[i]);
	}
}
