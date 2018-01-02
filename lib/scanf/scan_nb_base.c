/*
** scan_nb_base.c for ok in /home/alexandre/Documents/lib/my_lib/lib/scanf/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Sun Apr 30 15:40:22 2017 Alexandre Chamard-bois
** Last update Thu Nov 09 11:47:28 2017 alexandre Chamard-bois
*/

#include "libmy.h"
#include "scanf.h"

int	_scan_octal(myfd_t *fd, format_t *format, option_t option)
{
	base_t	base = {8, "01234567"};

	(void) option;
	if (POS(fd->buffer) == '\\' && INCR(fd)) {
		return (1);
	}
	return (_scan_nbrbase(fd, format, base));
}

int	_scan_hexa1(myfd_t *fd, format_t *format, option_t option)
{
	base_t	base = {16, "0123456789abcdef"};

	(void) option;
	if (!my_wordcmp(&POS(fd->buffer), "0x")) {
		fd->buffer.i += 2;
		if (fd->buffer.i == READ_SIZE && reset_buff(fd)) {
			return (1);
		}
	}
	return (_scan_nbrbase(fd, format, base));
}

int	_scan_hexa2(myfd_t *fd, format_t *format, option_t option)
{
	base_t	base = {16, "0123456789ABCDEF"};

	(void) option;
	if (!my_wordcmp(&POS(fd->buffer), "0x")) {
		fd->buffer.i += 2;
		if (fd->buffer.i == READ_SIZE && reset_buff(fd)) {
			return (1);
		}
	}
	return (_scan_nbrbase(fd, format, base));
}

int	_scan_bin(myfd_t *fd, format_t *format, option_t option)
{
	base_t	base = {2, "01"};

	(void) option;
	if (!my_wordcmp(&POS(fd->buffer), "0b")) {
		fd->buffer.i += 2;
		if (fd->buffer.i == READ_SIZE && reset_buff(fd)) {
			return (1);
		}
	}
	return (_scan_nbrbase(fd, format, base));
}
