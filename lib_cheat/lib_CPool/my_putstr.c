/*
** my_putstr.c for my_putstr in /home/guilhem/CPool/SRC/mind_fuck/
**
** Made by Guilhem Fulcrand
** Login   <guilhem.fulcrand@epitech.eu@epitech.eu>
**
** Started on  Thu Dec  1 16:44:47 2016 Guilhem Fulcrand
** Last update Mon Jan  2 15:17:45 2017 Alexandre Chamard-bois
*/

#include <unistd.h>

int 	my_strlen(char *);

void my_putstr(char *str)
{
	write(1, str, my_strlen(str));
}
