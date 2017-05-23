/*
** my_strcat.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Wed Jan  4 08:19:51 2017 Alexandre Chamard-bois
** Last update Tue May 23 11:42:43 2017 Alexandre Chamard-bois
*/

#include <stdlib.h>

int my_strlen(char *str);

char *conc(char *dest, char *src, char *str)
{
  *src ? (*str = *src) && conc(dest, src + 1, str + 1) : 0;
  *dest ? (*str = *dest) && conc(dest + 1, src, str + 1) : 0;
  return (str + (*(str + my_strlen(dest) + my_strlen(src)) = 0));
}

char *my_strcat(char *dest, char *src)
{
  return (conc(dest, src, malloc((my_strlen(dest) + my_strlen(src) + 1))));
}
