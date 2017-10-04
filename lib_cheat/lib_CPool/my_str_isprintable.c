/*
** my_str_isprintable.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 20:59:56 2017 Alexandre Chamard-bois
** Last update Wed Oct  4 12:13:32 2017 Alexandre Chamard-bois
*/

int my_str_isprintable(char *s)
{
  return (*s ? *s > 32 && *s < 126 ? my_str_isprintable(s + 1) : 0 : 1);
}
