/*
** main.c for ok in /home/alexandre/Documents/lib/my_lib/lib/scanf/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Fri Apr 28 14:15:40 2017 Alexandre Chamard-bois
** Last update Thu Nov 09 11:58:33 2017 alexandre Chamard-bois
*/

#include <stdlib.h>
#include <unistd.h>
#include "libmy.h"
#include "scanf.h"

int reset_buff(myfd_t *fd)
{
	fd->buffer.i = 0;
	my_memset(fd->buffer.str, 0, READ_SIZE);
	if (read(fd->fd, fd->buffer.str, READ_SIZE) <= 0) {
		fd->end = 1;
		return (1);
	}
	return (0);
}

int is_blank(myfd_t *fd)
{
	while (BLANK(POS(fd->buffer))) {
		if (INCR(fd)) {
			return (-1);
		}
	}
	return (1);
}

int is_format(myfd_t *fd, char *format)
{
	int decal = 0;

	while (format[decal] && format[decal] != '%' && POS(fd->buffer) == format[decal]) {
		decal++;
		if (INCR(fd))
		return (-1);
	}
	return (format[decal] == '%' ? decal : -1);
}

int scan(myfd_t *fd, format_t format)
{
	int nb_read = 0;
	int ret;

	if (V_BUFF(fd->buffer.i, fd) && reset_buff(fd)) {
		return (0);
	}
	while (*format.str) {
		my_printf("act:%c\n", *format.str);
		if (*format.str == '%') {
			if ((ret = get_format(fd, &format)) > 0) {
				nb_read++;;
			}
		} else if (*format.str == ' ') {
			ret = is_blank(fd);
		} else {
			ret = is_format(fd, format.str);
		}
		if (ret < 0) {
			return (nb_read);
		}
		format.str += ret;
	}
	return (nb_read);
}
