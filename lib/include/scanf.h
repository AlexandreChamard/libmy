/*
** scanf.h for ok in /home/alexandre/Documents/lib/my_lib/lib/include/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Fri Apr 28 14:13:24 2017 Alexandre Chamard-bois
** Last update Sun Aug 20 18:01:05 2017 Alexandre Chamard-bois
*/

#ifndef SCAN_H_
#define SCAN_H_

#include <stdarg.h>
#include "myfd.h"
#include "macro.h"

#define POS(buffer)   (buffer.str[buffer.i])
#define INCR(fd)  (++fd->buffer.i == READ_SIZE && reset_buff(fd) ? 1 : 0)

typedef struct  s_format
{
  const int     fd;
  char          *str;
  va_list       ap;
}               t_format;

typedef struct   s_option
{
  int             nb_max;
  char            without[42];
}                 t_option;

typedef struct   s_base
{
  int             size;
  char            base[16];
}                 t_base;

typedef struct  s_scan
{
  char          *patern;
  int           (*func)(t_myfd *, t_format*, t_option option);
}               t_scan;

int scan(t_myfd *fd, t_format format);
int reset_buff(t_myfd *fd);
int get_format(t_myfd *fd, t_format *format);
int is_blank(t_myfd *fd);
int _getll(t_myfd *fd, long long *nb);
int _getfloat(t_myfd *fd, double *nb);
int _scan_nbrbase(t_myfd *fd, t_format *format, t_base base);

/* SCAN */
int _scan_int(t_myfd *fd, t_format *format, t_option opt);
int _scan_octal(t_myfd *fd, t_format *format, t_option opt);
int _scan_hexa1(t_myfd *fd, t_format *format, t_option opt);
int _scan_hexa2(t_myfd *fd, t_format *format, t_option opt);
int _scan_bin(t_myfd *fd, t_format *format, t_option opt);
int _scan_long(t_myfd *fd, t_format *format, t_option opt);
int _scan_longlong(t_myfd *fd, t_format *format, t_option opt);
int _scan_float(t_myfd *fd, t_format *format, t_option opt);
int _scan_str(t_myfd *fd, t_format *format, t_option opt);
int _scan_char(t_myfd *fd, t_format *format, t_option opt);

#endif
