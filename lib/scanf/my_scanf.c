/*
** my_scanf.c for ok in /home/alexandre/Documents/balek/platform/lib/scanf/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Fri Aug 18 22:00:08 2017 Alexandre Chamard-bois
** Last update Thu Nov 09 11:44:27 2017 alexandre Chamard-bois
*/

#include "libmy.h"
#include "scanf.h"

int	my_scanf(char *str, ...)
{
	static myfd_t	fd = {0, 0, (buffer_t){"", 0}};
	format_t	format;
	int		nb_read;

	if (fd.end) {
		return (-1);
	}
	format.str = str;
	va_start(format.ap, str);
	nb_read = scan(&fd, format);
	va_end(format.ap);
	return (nb_read);
}

int	my_dscanf(myfd_t *fd, char *str, ...)
{
	format_t	format;
	int		nb_read;

	format.str = str;
	va_start(format.ap, str);
	nb_read = scan(fd, format);
	va_end(format.ap);
	return (nb_read);
}
