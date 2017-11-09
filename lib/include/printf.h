/*
** printf.h for ok in /home/alexandre/Documents/projet_perso/printf2.0/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Sat Feb  4 23:06:20 2017 Alexandre Chamard-bois
** Last update Thu Nov 09 12:00:57 2017 alexandre Chamard-bois
*/

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

#ifndef PRINTF_H_
# define PRINTF_H_

typedef struct	s_print {
	char	c;
	char	*(*func)(va_list ap, char *str);
}	print_t;

int	my_printf(const char *start, ...);
int	my_dprintf(const int i, const char *str, ...);
char	*my_sprintf(const char *str, ...);
char	*my_print(const char *str, va_list ap);
void	my_printnbr_base(char *str, int nbr, char *base);
void	my_printnbr(char *str, int nbr);
int	my_printstr(char *str, char *next);
int	my_printchar(char *str, char c);
char	*_printf_realloc(char *str, size_t newsize);
char	*put_char(char *str, char c);
int	my_printstrlen(char *str);
char	*my_printrevstr(char *str, int start);

char	*call_putchar(va_list ap, char *str);
char	*call_percent(va_list ap, char *str);
char	*call_putstr(va_list ap, char *str);
char	*call_put_nbr(va_list ap, char *str);
char	*call_put_unsigned_nbr(va_list ap, char *str);
char	*call_put_o_nbr(va_list ap, char *str);
char	*call_put_b_nbr(va_list ap, char *str);
char	*call_put_x_nbr(va_list ap, char *str);
char	*call_put_X_nbr(va_list ap, char *str);

#endif
