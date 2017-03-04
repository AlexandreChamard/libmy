/*
** get_next_line.c in /home/alexandre/Documents/tek-1/CPE_2016_getnextline/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Wed Jan  4 22:01:04 2017 Alexandre Chamard-bois
** Last update Sat Mar  4 15:16:21 2017 Alexandre Chamard-bois
*/

#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

char *my_realoc(char *str, int *size, int plus)
{
  char *n_str;
  int i;

  *size += plus;
  if ((n_str = malloc(sizeof(char) * (*size + READ_SIZE + 1))) == NULL)
    return (NULL);
  i = 0;
  while (i < *size)
  {
    n_str[i] = str[i];
    i++;
  }
  n_str[i] = 0;
  free(str);
  return (n_str);
}

int verif(char *str, int end)
{
  int i;
  int find;

  i = 0;
  find = 0;
  str[end] = 0;
  while (str[i])
  {
    if (str[i] == '\n')
      find = 1;
    i++;
  }
  if (find == 1)
    return (i);
  return (-1);
}

char *create_save(char *str, int *size, int plus)
{
  char *save;
  int i;

  *size -= plus + 1;
  if (*size < 0)
    *size = 0;
  if (*size == 0)
    return (NULL);
  if ((save = malloc(sizeof(char) * (*size + READ_SIZE + 1))) == NULL)
    return (NULL);
  i = 0;
  while (i < *size)
  {
    save[i] = str[i];
    i++;
  }
  while (i < *size + READ_SIZE)
  {
    save[i] = 0;
    i++;
  }
  return (save);
}

void free_func(char *save, char *str)
{
  if (save != NULL)
    free(save);
  if (str != NULL)
    free(str);
}

char *get_next_line(const int fd)
{
  static char *save = NULL;
  static int s = 0;
  char *str;
  int i;
  int end;

  str = save;
  end = s;
  if (str == NULL)
    if ((str = malloc(sizeof(char) * (READ_SIZE + 1))) == NULL)
      return (NULL);
  while ((s = verif(str, end)) < 0 && (i = read(fd, str + end, READ_SIZE)) > 0)
    str = my_realoc(str, &end, i);
  if (str == NULL || ((s < 0 && i <= 0) && str[0] == 0))
  {
    free_func(save, str);
    s = 0;
    return (NULL);
  }
  i = -1;
  while (str[++i] && str[i] != '\n');
  str[i] = 0;
  save = create_save(str + i + 1, &s, i);
  return (str);
}
