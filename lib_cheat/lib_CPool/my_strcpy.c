/*
** my_strcpy.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 17:41:36 2017 Alexandre Chamard-bois
** Last update Tue May 23 11:01:38 2017 Alexandre Chamard-bois
*/

char  *my_strcpy(char *dest, char *src)
{
  return (*src ? *dest = *src, my_strcpy(dest + 1, src + 1) : 0, dest);
}
