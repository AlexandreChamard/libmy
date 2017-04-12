/*
** my_nb_line.c for ok in /home/alexandre/Documents/lib/my_lib/lib/my/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Fri Jan 27 16:54:35 2017 Alexandre Chamard-bois
** Last update Wed Apr 12 23:14:41 2017 Alexandre Chamard-bois
*/

int my_nb_line(char **tab)
{
  return (*tab ? my_nb_line(tab + 1) + 1 : 0);
}
