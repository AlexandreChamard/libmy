/*
** my_getline.c for ok in /home/alexandre/Documents/lib/my_lib/lib/gnl/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Tue May 30 09:25:19 2017 Alexandre Chamard-bois
** Last update Sun Aug 20 19:38:33 2017 Alexandre Chamard-bois
*/

#include <unistd.h>
#include "libmy.h"

static char *my_realloc(char *str, char buff[READ_SIZE])
{
  char *new_str;

  if (str)
    new_str = my_strcat(str, buff);
  else
    new_str = my_strdup(buff);
  my_memset(buff, 0, READ_SIZE + 1);
  if (str)
    free(str);
  return (new_str);
}

char *verif_str(char *str)
{
  int i;
  char *save;

  i = 0;
  if (!str)
    return (NULL);
  save = NULL;
  while (str[i])
  {
    if (str[i] == '\n')
    {
      save = my_strdup(str + i + 1);
      str[i] = 0;
      break;
    }
    i++;
  }
  return (save);
}

char *my_getline(const int fd)
{
  char buff[READ_SIZE + 1];
  static char *save = NULL;
  char *str;
  int len;

  len = 0;
  str = save;
  my_memset(buff, 0, READ_SIZE + 1);
  while (!(save = verif_str(str)) && read(fd, buff, READ_SIZE) > 0)
  {
    len += READ_SIZE;
    if (!(str = my_realloc(str, buff)))
      return (NULL);
  }
  if (!len && !*buff)
  {
    if (str)
      free(str);
    return (NULL);
  }
  return (str);
}
