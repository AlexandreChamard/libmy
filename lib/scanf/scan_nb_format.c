/*
** scan_nb_format.c for ok in /home/alexandre/Documents/lib/my_lib/lib/scanf/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Sun Apr 30 14:38:32 2017 Alexandre Chamard-bois
** Last update Thu Nov 09 11:49:38 2017 alexandre Chamard-bois
*/

#include <stdarg.h>
#include "scanf.h"

int	_scan_float(myfd_t *fd, format_t *format, option_t option)
{
	float	*res = va_arg(format->ap, float *);
	double	nb;

	(void) option;
	if (!res) {
		return (0);
	}
	if (_getfloat(fd, &nb)) {
		return (1);
	}
	*res = (float) nb;
	return (0);
}

int	_scan_int(myfd_t *fd, format_t *format, option_t option)
{
	int		*res = va_arg(format->ap, int *);
	long long	nb;

	(void) option;
	if (!res) {
		return (0);
	}
	if (_getll(fd, &nb)) {
		return (1);
	}
	*res = (int) nb;
	return (0);
}

int	_scan_long(myfd_t *fd, format_t *format, option_t option)
{
	long		*res = va_arg(format->ap, long *);
	long long	nb;

	(void) option;
	if (!res) {
		return (0);
	}
	if (_getll(fd, &nb)) {
		return (1);
	}
	*res = (long) nb;
	return (0);
}

int	_scan_longlong(myfd_t *fd, format_t *format, option_t option)
{
	long long	*res = va_arg(format->ap, long long *);
	long long	nb;

	(void) option;
	if (!res) {
		return (0);
	}
	if (_getll(fd, &nb)) {
		return (1);
	}
	*res = nb;
	return (0);
}
