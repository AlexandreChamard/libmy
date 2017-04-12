/*
** my_square_root.c for my_square_root in /home/Alex.Chamardbois/CPool/CPool_Day05
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Fri Oct  7 20:53:54 2016 Alexandre Chamard-bois
** Last update Wed Apr 12 23:21:49 2017 Alexandre Chamard-bois
*/

#include "libmy.h"

int		my_square_root(const int nb)
{
	int	nombre;
	int	au_carre;

	au_carre = 0;
	nombre = 0;
	while (au_carre < nb)
	{
		nombre++;
		au_carre = nombre * nombre;
	}
	if (nb == au_carre)
		return (nombre);
	return (0);
}
