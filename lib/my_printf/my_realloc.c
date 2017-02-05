/*
** my_realloc.c for ok in /home/alexandre/Documents/projet_perso/printf2.0/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Sun Feb  5 00:20:43 2017 Alexandre Chamard-bois
** Last update Sun Feb  5 01:22:51 2017 Alexandre Chamard-bois
*/

#include "myprint.h"

char *my_realloc(char *str, int newsize)
{
  int i;
  char *newstr;

  if (!(newstr = malloc(sizeof(char) * newsize)))
    return (NULL);
  i = 0;
  if (str)
  {
    while (str[i] && i < newsize)
    {
      newstr[i] = str[i];
      i++;
    }
    free(str);
  }
  newstr[i] = 0;
  return (newstr);
}
