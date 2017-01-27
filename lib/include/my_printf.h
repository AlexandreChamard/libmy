/*
** my.h for ok in /home/alexandre/Documents/tek-1/PSU_2016_my_printf_bootstrap/my/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Thu Nov 10 15:43:36 2016 John Doe
** Last update Thu Nov 24 16:52:15 2016 Alexandre Chamard-bois
*/

#include <unistd.h>
#include <stdarg.h>

typedef struct s_print
{
  char c;
  int (*func)(va_list);
} t_print;

int my_printf(char *, ...);
int my_strlen(char *);
void my_putchar(char);
int my_putstr(char *, int);
int my_putstr_S(char *, int);
int my_put_nbr(int, int);
int my_lower_case(char *);
int my_upper_case(char *);
int my_put_unsigned_nbr(unsigned int, int);
int my_put_nbr_base(unsigned int, char *, int);
int my_put_adr(unsigned long int, char *, int);
int call_putchar(va_list);
int call_percent(va_list);
int call_put_nbr(va_list);
int call_put_unsigned_nbr(va_list);
int call_put_o_nbr(va_list);
int call_put_b_nbr(va_list);
int call_put_x_nbr(va_list);
int call_put_X_nbr(va_list);
int call_putstr(va_list);
int call_putstr_S(va_list);
int call_put_adr(va_list);
int my_printf(char *, ...);
