/*
** my_revstr.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 17:27:06 2017 Alexandre Chamard-bois
** Last update Wed Mar  1 19:20:31 2017 Alexandre Chamard-bois
*/

char *my_strstr(char *str, char *to_find);

char swa(char *un, char *deux, char trois)
{
  return ((*deux = *un) && (*un = trois));
}

char *end(char *str)
{
  return (*str ? end(str + 1) : str);
}

char rev(char *str, char *re)
{
  return (!my_strstr(re, str) ? swa(str, re, *re) && rev(str + 1, re - 1) : 0);
}

char *my_revstr(char *str)
{
  return (*str ? rev(str, end(str) - 1) + str : str);
}
