/*
** scan.h for ok in /home/alexandre/Documents/lib/my_lib/lib/include/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Fri Apr 28 14:13:24 2017 Alexandre Chamard-bois
** Last update Fri Aug 18 23:13:07 2017 Alexandre Chamard-bois
*/

#include <stdarg.h>
#include "macro.h"

#ifndef SCAN_H_
#define SCAN_H_

#define POS(buffer)   (buffer->str[buffer->i])
#define INCR(f, buff)  (++buff->i == READ_SIZE && reset_buff(f, buff) ? 1 : 0)

typedef struct  s_buffer
{
  char          str[READ_SIZE + 1];
  int           i;
}               t_buffer;

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
  int           (*func)(const int, t_format*, t_buffer *buffer, t_option option);
}               t_scan;

int scan(const int fd, t_format format);
int reset_buff(const int fd, t_buffer *buffer);
int get_format(const int fd, t_buffer *buffer, t_format *format);
int is_blank(const int fd, t_buffer *buffer);
int _getll(const int fd, t_buffer *buffer, long long *nb);
int _getfloat(const int fd, t_buffer *buffer, double *nb);
int _scan_nbrbase(const int fd, t_format *format, t_buffer *buff, t_base base);

/* SCAN */
int _scan_int(const int fd, t_format *format, t_buffer *buff, t_option opt);
int _scan_octal(const int fd, t_format *format, t_buffer *buff, t_option opt);
int _scan_hexa1(const int fd, t_format *format, t_buffer *buff, t_option opt);
int _scan_hexa2(const int fd, t_format *format, t_buffer *buff, t_option opt);
int _scan_bin(const int fd, t_format *format, t_buffer *buff, t_option opt);
int _scan_long(const int fd, t_format *format, t_buffer *buff, t_option opt);
int _scan_longlong(const int fd, t_format *form, t_buffer *buff, t_option opt);
int _scan_float(const int fd, t_format *format, t_buffer *buff, t_option opt);
int _scan_str(const int fd, t_format *format, t_buffer *buff, t_option opt);
int _scan_char(const int fd, t_format *format, t_buffer *buff, t_option opt);

#endif
