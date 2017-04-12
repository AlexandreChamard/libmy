/*
** myprint.h for ok in /home/alexandre/Documents/projet_perso/printf2.0/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Sat Feb  4 23:06:20 2017 Alexandre Chamard-bois
** Last update Wed Apr 12 20:20:38 2017 Alexandre Chamard-bois
*/

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

#ifndef PRINT_H
# define PRINT_H

typedef struct  s_print
{
  char          c;
  char          *(*func)(va_list ap, char *str);
}               t_print;

int my_printf(char *start, ...);
int my_dprintf(int i, char *str, ...);
char *my_sprintf(char *str, ...);
char *my_print(char *str, va_list ap);
int     my_printstrlen(char *str);
char		*my_printrevstr(char *str, int start);
void my_putnbr_base(char *str, int nbr, char *base);
void my_put_nbr(char *str, int nbr);
int my_putstr(char *str, char *next);
int my_putchar(char *str, char c);
char *my_realloc(char *str, int newsize);
char *put_char(char *str, char c);

char  *call_putchar(va_list ap, char *str);
char	*call_percent(va_list ap, char *str);
char	*call_putstr(va_list ap, char *str);
char	*call_put_nbr(va_list ap, char *str);
char  *call_put_unsigned_nbr(va_list ap, char *str);
char	*call_put_o_nbr(va_list ap, char *str);
char  *call_put_b_nbr(va_list ap, char *str);
char  *call_put_x_nbr(va_list ap, char *str);
char  *call_put_X_nbr(va_list ap, char *str);

#endif
