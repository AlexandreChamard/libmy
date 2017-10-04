/*
** my_strlowcase.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 20:57:51 2017 Alexandre Chamard-bois
** Last update Wed Oct  4 14:32:32 2017 Alexandre Chamard-bois
*/

char	*my_strlowcase(char *s)
{
  *s ? *s < 'A' || *s > 'Z' ? 0 : (*s -= 32), my_strlowcase(s + 1) : 0;
  return (s);
}
