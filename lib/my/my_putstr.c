/*
** my_putstr.c for my_putstr in /home/Alex.Chamardbois/CPool/CPool_Day04
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Thu Oct  6 12:08:47 2016 Alexandre Chamard-bois
** Last update Fri Jan 27 12:56:05 2017 Alexandre Chamard-bois
*/

#include <unistd.h>

int my_strlen(char *str);

int	my_putstr(char *str)
{
	write(1, str, my_strlen(str));
	return (0);
}
