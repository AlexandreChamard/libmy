/*
** libmy.h for ok in /home/alexandre/Documents/lib/my_lib/lib/include/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Wed Apr 12 20:19:13 2017 Alexandre Chamard-bois
** Last update Wed Apr 12 22:51:41 2017 Alexandre Chamard-bois
*/

#include "macro.h"

#ifndef LIBMY_H_
# define LIBMY_H_

# ifndef  READ_SIZE
#  define   READ_SIZE (1024)
# endif    /*!READ_SIZE*/

char    *get_next_line(const int fd);

int     my_printf(char *str, ...);
int     my_dprintf(int fd, char *str, ...);
char    *my_sprintf(char *str, ...);

int	    my_find_prime_sup(const int nb);
int	    my_getnbr(const char *str);
int     my_getnbr_base(const char *str, const char *base);
double	my_atof(const char *str);
int	    my_is_prime(const int nb);
int	    my_power_rec(const int nb, const int p);
void	  my_putchar(const char c);
void	  my_puts(const char *str);
void	  my_put_nbr(const int nb);
void	  my_put_nbr_base(const int nb, const char *base);
char    *my_revstr(char *str);
int	    my_showmem(char *, int);
int	    my_sort_int_tab(int *array, const int size);
int	    my_square_root(const int nb);
char    *my_strcapitalize(char *);
char    *my_strcat(const char *first, char *second);
int	    my_strcmp(const char *s1, const char *s2);
int	    my_strncmp(const char *s1, const char *s2, int n);
int     my_wordcmp(char *s1, char *s2);
char    *my_strcpy(char *, const char *);
int	    my_str_isalpha(const char *str);
int	    my_str_islower(const char *str);
int	    my_str_isnum(const char *str);
int	    my_str_isprintable(const char *str);
int	    my_str_isupper(const char *str);
int	    my_strlen(const char *);
char    *my_strlowcase(char *);
char    *my_strncat(char *, const char *, const int);
char    *my_strncpy(char *, const char *, int);
char    *my_strdup(const char *str);
char    *my_strndup(const char *str, const int size);
char 		*my_worddup(const char *str);
char    my_strstr(const char *str, const char *to_find);
char    *my_strupcase(char *);
int	    my_swap(int *, int *);
int	    my_show_wordtab(char **);
int     my_nb_line(const char **tab);
void    my_memset(void *data, const char type, const int size);
char    *my_strtoc(const char *str, const char *c);
char    *clean_line(char *str);
char    *my_split(char *str, int *who, const int nb, ...);
char    **my_str_to_wordtab(const char *str);
#endif
