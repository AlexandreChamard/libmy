/*
** my_nb_line.c for ok in /home/alexandre/Documents/lib/my_lib/lib/my/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Fri Jan 27 16:54:35 2017 Alexandre Chamard-bois
** Last update Wed Apr 12 21:53:20 2017 Alexandre Chamard-bois
*/

int my_nb_line(const char **tab)
{
  int i;

  i = 0;
  while (tab[i])
    i++;
  return (i);
}
