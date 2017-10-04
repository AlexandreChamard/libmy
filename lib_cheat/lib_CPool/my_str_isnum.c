/*
** my_str_isnum.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 19:45:39 2017 Alexandre Chamard-bois
** Last update Wed Oct  4 12:12:48 2017 Alexandre Chamard-bois
*/

int my_str_isnum(char *str)
{
  return (*str ? *str < '0' && *str > '9' ? 0 : my_str_isnum(str + 1) : 1);
}
