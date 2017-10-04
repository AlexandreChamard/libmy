/*
** my_revstr.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 17:27:06 2017 Alexandre Chamard-bois
** Last update Wed Oct  4 14:36:08 2017 Alexandre Chamard-bois
*/

char *end(char *str)
{
  return (*str ? end(str + 1) : str - 1);
}

char rev(char *s, char *r)
{
  return (s < r ? *s = *r + *s - (*r = *s), rev(s + 1, r - 1) : 0);
}

char *my_revstr(char *str)
{
  return (rev(str, end(str)), str);
}
