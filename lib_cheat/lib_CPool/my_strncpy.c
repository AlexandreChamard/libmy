/*
** my_strncpy.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 17:52:34 2017 Alexandre Chamard-bois
** Last update Tue Jan  3 17:54:45 2017 Alexandre Chamard-bois
*/

char  *my_strncpy(char *dest, char *src, int n)
{
  *src && n > 0 ? (*dest = *src) && my_strncpy(dest + 1, src + 1, n - 1) : 0;
  return (dest);
}
