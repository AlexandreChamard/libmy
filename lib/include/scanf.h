/*
** scanf.h for ok in /home/alexandre/Documents/lib/my_lib/lib/include/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Fri Apr 28 14:13:24 2017 Alexandre Chamard-bois
** Last update Wed Nov 08 13:01:12 2017 alexandre Chamard-bois
*/

#ifndef SCAN_H_
#define SCAN_H_

#include <stdarg.h>
#include "myfd.h"
#include "macro.h"

# define POS(buffer)   (buffer.str[buffer.i])
# define V_BUFF(i, fd)  ((i) == READ_SIZE || !POS(fd->buffer) ? 1 : 0)
# define INCR(fd)  (V_BUFF(++fd->buffer.i, fd) && reset_buff(fd) ? 1 : 0)

typedef struct		s_format {
	const int	fd;
	char		*str;
	va_list		ap;
}	format_t;

typedef struct	s_option {
	int	nb_max;
	char	without[42];
}	option_t;

typedef struct	s_base {
	int	size;
	char	base[16];
}	base_t;

typedef struct	s_scan {
	char	*patern;
	int	(*func)(myfd_t *, format_t*, option_t option);
}	scan_t;

int	scan(myfd_t *fd, format_t format);
int	reset_buff(myfd_t *fd);
int	get_format(myfd_t *fd, format_t *format);
int	is_blank(myfd_t *fd);
int	_getll(myfd_t *fd, long long *nb);
int	_getfloat(myfd_t *fd, double *nb);
int	_scan_nbrbase(myfd_t *fd, format_t *format, base_t base);

/* SCAN */
int	_scan_int(myfd_t *fd, format_t *format, option_t opt);
int	_scan_octal(myfd_t *fd, format_t *format, option_t opt);
int	_scan_hexa1(myfd_t *fd, format_t *format, option_t opt);
int	_scan_hexa2(myfd_t *fd, format_t *format, option_t opt);
int	_scan_bin(myfd_t *fd, format_t *format, option_t opt);
int	_scan_long(myfd_t *fd, format_t *format, option_t opt);
int	_scan_longlong(myfd_t *fd, format_t *format, option_t opt);
int	_scan_float(myfd_t *fd, format_t *format, option_t opt);
int	_scan_str(myfd_t *fd, format_t *format, option_t opt);
int	_scan_char(myfd_t *fd, format_t *format, option_t opt);

#endif
