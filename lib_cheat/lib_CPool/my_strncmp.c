/*
** my_strncmp.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 19:39:02 2017 Alexandre Chamard-bois
** Last update Wed Feb 28 19:53:06 2018 alexandre Chamard-bois
*/

int 		my_strncmp(char *s, char *d, int n)
{
  return (*s - *d && n > 0 ? *s - *d : *s ? my_strncmp(++s, ++d, n - 1) : 0);
}
