/*
** my_strlowcase.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 20:57:51 2017 Alexandre Chamard-bois
** Last update Tue May 23 11:16:47 2017 Alexandre Chamard-bois
*/

char	*my_strupcase(char *s)
{
  return (*s >= 'A' && *s <= 'Z' ? (*s += 32) && my_strupcase(s + 1) : 0, s);
}
