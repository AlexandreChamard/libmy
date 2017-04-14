/*
** size_line.c for ok in /home/alexandre/Documents/lib_cheat/jsp/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Wed Jan  4 13:20:24 2017 Alexandre Chamard-bois
** Last update Wed Jan  4 15:01:59 2017 Alexandre Chamard-bois
*/

int size_line(char *s)
{
  return (*s ? *s != '\n' ? size_line(s + 1) + 1 : 0 : 0);
}
