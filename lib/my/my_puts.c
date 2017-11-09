/*
** puts.c for ok in /home/alexandre/Documents/lib/my_lib/lib/my/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Wed Apr 12 22:43:24 2017 Alexandre Chamard-bois
** Last update Thu Nov 09 11:00:45 2017 alexandre Chamard-bois
*/

#include <unistd.h>
#include "libmy.h"

void my_putchar(const char c)
{
	write(1, &c, 1);
}

void my_putstr(const char *str)
{
	if (str) {
		write(1, str, my_strlen(str));
	}
}

void my_puts(const char *str)
{
	if (str) {
		write(1, str, my_strlen(str));
	}
	write(1, "\n", 1);
}

void my_putnbr(const int nb)
{
	char c = nb % 10;

	if (nb >= 10) {
		my_putnbr(nb / 10);
	}
	write(1, &c, 1);
}

void my_putnbr_base(const int nb, const char *base)
{
	int size = my_strlen(base);
	char c = nb % size - '0';

	if (nb >= size) {
		my_putnbr_base(nb / size, base);
	}
	write(1, &c, 1);
}
