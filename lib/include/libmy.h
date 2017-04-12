/*
** libmy.h for ok in /home/alexandre/Documents/lib/my_lib/lib/include/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Wed Apr 12 20:19:13 2017 Alexandre Chamard-bois
** Last update Wed Apr 12 21:40:42 2017 Alexandre Chamard-bois
*/

#include "macro.h"

#ifndef LIBMY_H_
# define LIBMY_H_

# ifndef  READ_SIZE
#  define   READ_SIZE (1024)
# endif    /*!READ_SIZE*/

char    *get_next_line(const int);

int     my_printf(char *start, ...);
int     my_dprintf(int i, char *str, ...);
char    *my_sprintf(char *str, ...);

int	    my_find_prime_sup(int);
int	    my_getnbr(char *);
double	my_atof(char *);
int	    my_isneg(int);
int	    my_is_prime(int);
int	    my_power_rec(int, int);
void	  my_putchar(char);
int	    my_put_nbr(int);
void	  my_putstr(char *);
char    *my_revstr(char *);
int	    my_showmem(char *, int);
int	    my_showstr(char);
int	    my_sort_int_tab(int *, int);
int	    my_square_root(int);
char    *my_strcapitalize(char *);
char    *my_strcat(char *, char *);
int	    my_strcmp(char *, char *);
char    *my_strcpy(char *, const char *);
int	    my_str_isalpha(char *);
int	    my_str_islower(char *);
int	    my_str_isnum(char *);
int	    my_str_isprintable(char *);
int	    my_str_isupper(char *);
int	    my_strlen(const char *);
char    *my_strlowcase(char *);
char    *my_strncat(char *, char *, int);
char    *my_strncpy(char *, const char *, int);
char    *my_strdup(const char *);
char    *my_strndup(const char *, int);
char    my_strstr(char *, char *);
char    *my_strupcase(char *);
int	    my_swap(int *, int *);
int	    my_show_wordtab(char **);
int     my_nb_line(char **);
void    my_memset(void *, char, int);
int     my_wordcmp(char *s1, char *s2);
char    *my_strtoc(const char *str, const char *c);
char    *clean_line(char *str);
char    *my_split(char *str, int *who, int nb, ...);

#endif
