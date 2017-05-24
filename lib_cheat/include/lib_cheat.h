/*
** lib_cheat.h for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 11:08:38 2017 Alexandre Chamard-bois
** Last update Wed May 24 10:47:37 2017 Alexandre Chamard-bois
*/

#ifndef   LIB_CHEAT_H
# define  LIB_CHEAT_H

#define LEN my_strlen
#define NL nb_line
#define NW nb_word
#define SL size_line
#define SW size_word

// BONUS //

char  **my_str_to_wordtab(char *str);                         /* 4 6 */
char  *my_getline(int fd);                                    /* 3 5 */
int   nb_line(char *str);                                     /* 1 1 */
int   nb_word(char *str, int i, int n);   /*(str, 0, 0)*/     /* 1 2 */
int   size_line(char *str);                                   /* 1 1 */
int   size_word(char *str);                                   /* 1 1 */
int   my_swapp(int *a, int *b);                               /* 1 3 */

// DONE //                                                    /* 49 59 */

int   my_find_prime_sup(int nb);                              /* 1 1 */
int   my_getnbr(char *str);                                   /* 2 2 */
int   my_is_prime(int nombre);                                /* 2 2 */
int   my_isneg(int nb);                                       /* 1 1 */
int   my_power_rec(int nb, int power);                        /* 1 1 */
int   my_put_nbr(int nb);                                     /* 3 3 */
void  my_putchar(char c);                                     /* 1 1 */
int   my_putnbr_base(int nb, char *base);                     /* 3 3 */
int   my_putstr(char *str);                                   /* 1 1 */
char  *my_revstr(char *str);                                  /* 3 5 */
int   my_showstr(char *str);                                  /* 2 3 */
void  my_sort_int_tab(int *tab, int size);                    /* 2 2 */
int   my_square_root(int nb);                                 /* 2 2 */
int   my_str_isalpha(char *str);                              /* 2 2 */
int   my_str_islower(char *str);                              /* 1 1 */
int   my_str_isnum(char *str);                                /* 1 1 */
int   my_str_isprintable(char *str);                          /* 1 1 */
int   my_str_isupper(char *str);                              /* 1 1 */
char  *my_strcapitalize(char *str);                           /* 4 5 */
char  *my_strcat(char *dest, char *src);                      /* 2 4 */
int   my_strcmp(char *s1, char *s2);                          /* 1 1 */
char  *my_strncpy(char *dest, char* src, int n);              /* 1 1 */
int   my_strlen(char *str);                                   /* 1 1 */
char  *my_strlowcase(char *str);                              /* 1 1 */
char  *my_strncat(char *dest, char *src, int nb);             /* 3 5 */
int   my_strncmp(char *s1, char *s2, int n);                  /* 1 1 */
char  *my_strcpy(char *dest, char *src);                      /* 1 1 */
char  *my_strstr(char *str, char *to_find);                   /* 2 4 */
char  *my_strupcase(char *str);                               /* 1 1 */
int   my_swap(int *a, int *b);                                /* 1 1 */

// NEVER //

int   my_showmem(char *str, int size);

#endif
