/*
** nb_line.c for ok in /home/alexandre/Documents/lib_cheat/jsp/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Wed Jan  4 13:21:16 2017 Alexandre Chamard-bois
** Last update Wed Jan  4 13:21:34 2017 Alexandre Chamard-bois
*/

int nb_line(char *s)
{
  return ((*s) ? *s == '\n' ? nb_line(s + 1) + 1 : nb_line(s + 1) : 0);
}
