/*
** my_putchar.c for myputchar in /home/Alex.Chamardbois/CPool/CPool_Day07/lib/my
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Tue Oct 11 10:36:40 2016 Alexandre Chamard-bois
** Last update Fri Jan 27 13:30:10 2017 Alexandre Chamard-bois
*/

#include "my_printf.h"

void my_putchar(char c)
{
	write(1, &c, 1);
}
