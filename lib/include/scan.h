/*
** scan.h for ok in /home/alexandre/Documents/lib/my_lib/lib/include/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Fri Apr 28 14:13:24 2017 Alexandre Chamard-bois
** Last update Mon May  8 12:03:59 2017 Alexandre Chamard-bois
*/

#include <stdarg.h>
#include "macro.h"

#ifndef SCAN_H_
#define SCAN_H_

#define POS(buffer)   (buffer->str[buffer->i])
#define INCR(buffer)  (++buffer->i == READ_SIZE && reset_buff(buffer) ? 1 : 0)

typedef struct  s_buffer
{
  char          str[READ_SIZE + 1];
  int           i;
}               t_buffer;

typedef struct  s_format
{
  char          *str;
  va_list       ap;
}               t_format;

typedef struct   s_option
{
  int             nb_max;
  char            without[42];
}                 t_option;

typedef struct  s_scan
{
  char          *patern;
  int           (*func)(t_format*, t_buffer *buffer, t_option option);
}               t_scan;

int my_scanf(char *format, ...);
int reset_buff(t_buffer *buffer);
int get_format(t_buffer *buffer, t_format *format);
int is_blank(t_buffer *buffer);
int _getll(t_buffer *buffer, long long *nb);
int _getfloat(t_buffer *buffer, double *nb);
int _scan_nbrbase(t_format *format, t_buffer *buff, const char *base, int len);

/* SCAN */
int _scan_int(t_format *format, t_buffer *buffer, t_option option);
int _scan_octal(t_format *format, t_buffer *buffer, t_option option);
int _scan_hexa1(t_format *format, t_buffer *buffer, t_option option);
int _scan_hexa2(t_format *format, t_buffer *buffer, t_option option);
int _scan_bin(t_format *format, t_buffer *buffer, t_option option);
int _scan_long(t_format *format, t_buffer *buffer, t_option option);
int _scan_longlong(t_format *format, t_buffer *buffer, t_option option);
int _scan_float(t_format *format, t_buffer *buffer, t_option option);
int _scan_str(t_format *format, t_buffer *buffer, t_option option);
int _scan_char(t_format *format, t_buffer *buffer, t_option option);

#endif
