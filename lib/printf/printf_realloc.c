/*
** my_realloc.c for ok in /home/alexandre/Documents/projet_perso/printf2.0/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Sun Feb  5 00:20:43 2017 Alexandre Chamard-bois
** Last update Sun Aug 20 20:32:18 2017 Alexandre Chamard-bois
*/

#include "printf.h"
#include "libmy.h"

char *_printf_realloc(char *str, int newsize)
{
  int i;
  char *newstr;

  if (!(newstr = my_malloc(sizeof(char) * newsize)))
    return (NULL);
  i = 0;
  if (str)
  {
    while (str[i] && i < newsize)
    {
      newstr[i] = str[i];
      i++;
    }
    my_free(str);
  }
  newstr[i] = 0;
  return (newstr);
}
