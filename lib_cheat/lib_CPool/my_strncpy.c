/*
** my_strncpy.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 17:52:34 2017 Alexandre Chamard-bois
** Last update Tue May 23 11:12:42 2017 Alexandre Chamard-bois
*/

char  *my_strncpy(char *d, char *s, int n)
{
  return (*s && n > 0 ? *d = *s, my_strncpy(d + 1, s + 1, n - 1) : 0, d);
}
