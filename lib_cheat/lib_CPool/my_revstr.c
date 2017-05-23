/*
** my_revstr.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 17:27:06 2017 Alexandre Chamard-bois
** Last update Tue May 23 11:27:59 2017 Alexandre Chamard-bois
*/

char *end(char *str)
{
  return (*str ? end(str + 1) : str - 1);
}

char rev(char *str, char *re)
{
  char c;

  return (str < re ? c = *str, *str = *re, *re = c, rev(str + 1, re - 1) : 0);
}

char *my_revstr(char *str)
{
  return (rev(str, end(str)), str);
}
