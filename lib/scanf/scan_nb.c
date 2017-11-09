/*
** scan_nb.c for ok in /home/alexandre/Documents/lib/my_lib/lib/scanf/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Sat Apr 29 16:25:21 2017 Alexandre Chamard-bois
** Last update Thu Nov 09 12:05:28 2017 alexandre Chamard-bois
*/

#include "libmy.h"
#include "scanf.h"

int	_getll(myfd_t *fd, long long *nb)
{
	int 	neg;

	if (!NUM(POS(fd->buffer)) && POS(fd->buffer) != '-') {
		return (1);
	}
	*nb = 0;
	neg = 1;
	if (POS(fd->buffer) == '-') {
		neg = -1;
		if (INCR(fd)) {
			return (1);
		}
	}
	while (POS(fd->buffer) <= '9' && POS(fd->buffer) >= '0') {
		*nb = *nb * 10 + POS(fd->buffer) - '0';
		if (INCR(fd)) {
			return (1);
		}
	}
	*nb = *nb * neg;
	return (0);
}

static inline int	_verif_base(const char c, const char *base, size_t len)
{
	for (size_t i = 0; i < len; i++) {
		if (c == base[i])
		return (i);
	}
	return (-1);
}

int	_scan_nbrbase(myfd_t *fd, format_t *format, base_t base)
{
	int	*nb = va_arg(format->ap, int *);
	int	pos;

	if (_verif_base(POS(fd->buffer), base.base, base.size) == -1) {
		return (1);
	}
	if (!nb) {
		return (0);
	}
	*nb = 0;
	while ((pos = _verif_base(POS(fd->buffer), base.base, base.size)) != -1) {
		*nb = *nb * base.size + pos;
		if (INCR(fd)) {
			return (1);
		}
	}
	return (0);
}

int	_getfl(myfd_t *fd, double *nb)
{
	double	fl = 0;
	int	rang = 0;

	if (POS(fd->buffer) != '.') {
		return (0);
	}
	if (INCR(fd)) {
		return (1);
	}
	while (POS(fd->buffer) >= '0' && POS(fd->buffer) <= '9') {
		fl = fl * 10 + POS(fd->buffer) - '0';
		if (INCR(fd)) {
			return (1);
		}
		rang++;
	}
	while (rang) {
		fl /= 10.0;
		rang--;
	}
	*nb += fl;
	return (0);
}

int	_getfloat(myfd_t *fd, double *nb)
{
	int	neg = 1;

	if (!NUM(POS(fd->buffer)) && POS(fd->buffer) != '-'&& POS(fd->buffer) != '.') {
		return (1);
	}
	*nb = 0;
	if (POS(fd->buffer) == '-')
	{
		neg *= -1;
		if (INCR(fd)) {
			return (1);
		}
	}
	while (POS(fd->buffer) >= '0' && POS(fd->buffer) <= '9') {
		*nb = *nb * 10 + POS(fd->buffer) - '0';
		if (INCR(fd)) {
			return (1);
		}
	}
	if (_getfl(fd, nb)) {
		return (1);
	}
	*nb *= neg;
	return (0);
}
