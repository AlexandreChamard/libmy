/*
** my_square_root.c for my_square_root in /home/Alex.Chamardbois/CPool/CPool_Day05
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Fri Oct  7 20:53:54 2016 Alexandre Chamard-bois
** Last update Wed Apr 12 22:27:37 2017 Alexandre Chamard-bois
*/

#include "libmy.h"

int		my_square_root(const int nb)
{
	int	nombre;
	int	au_carre;

	au_carre = 0;
	nombre = 0;
	while (nb > au_carre)
	{
		nombre++;
		au_carre = my_power_rec(nombre, 2);
	}
	if (nb == au_carre)
		return (nombre);
	return (0);
}
