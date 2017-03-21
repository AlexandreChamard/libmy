/*
** my_memset.c for ok in /home/alexandre/Documents/lib/my_lib/lib/my/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Tue Mar 21 16:15:35 2017 Alexandre Chamard-bois
** Last update Tue Mar 21 16:24:24 2017 Alexandre Chamard-bois
*/

void my_memset(void *data, char type, int size)
{
  char *str;
  int i;

  i = -1;
  str = data;
  while (++i < size)
    str[i] = type;
}
