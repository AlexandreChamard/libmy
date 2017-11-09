/*
** scan_str.c for ok in /home/alexandre/Documents/lib/my_lib/lib/scanf/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Sun Apr 30 13:00:59 2017 Alexandre Chamard-bois
** Last update Thu Nov 09 11:56:28 2017 alexandre Chamard-bois
*/

#include "libmy.h"
#include "scanf.h"

int	verif_option(char c, int act, option_t option)
{
	if (option.nb_max && act >= option.nb_max) {
		return (0);
	}
	for (size_t i = 0; option.without[i] && i < 42; i++) {
		if (c == option.without[i]) {
			return (0);
		}
	}
	return (1);
}

int	_scan_str(myfd_t *fd, format_t *format, option_t option)
{
	char	*str = va_arg(format->ap, char *);
	size_t	i = 0;

	if (!str) {
		return (0);
	}
	if (!verif_option(POS(fd->buffer), i, option)) {
		return (1);
	}
	while (!BLANK(POS(fd->buffer)) && verif_option(POS(fd->buffer), i, option)) {
		str[i] = POS(fd->buffer);
		if (INCR(fd)) {
			return (1);
		}
		i++;
	}
	return (0);
}

int	_scan_char(myfd_t *fd, format_t *format, option_t option)
{
	char	*c = va_arg(format->ap, char *);

	(void) option;
	(void) fd;
	if (!c) {
		return (0);
	}
	*c = POS(fd->buffer);
	fd->buffer.i++;
	return (0);
}
