/*
** my_nb_line.c for ok in /home/alexandre/Documents/lib/my_lib/lib/my/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Fri Jan 27 16:54:35 2017 Alexandre Chamard-bois
** Last update Fri Apr 14 08:17:25 2017 Alexandre Chamard-bois
*/

int my_nb_line(const char **tab)
{
  int i;

  i = -1;
  while (tab[++i]);
  return (i);
}
