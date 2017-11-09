/*
** my_square_root.c for my_square_root in /home/Alex.Chamardbois/CPool/CPool_Day05
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Fri Oct  7 20:53:54 2016 Alexandre Chamard-bois
** Last update Thu Nov 09 11:10:43 2017 alexandre Chamard-bois
*/

#include "libmy.h"

int		my_square_root(const int nb)
{
	int	nombre = 0;
	int	au_carre = 0;

	while (au_carre < nb) {
		au_carre = nombre * nombre;
		nombre++;
	}
	return (nb == au_carre ? nombre : 0);
}
