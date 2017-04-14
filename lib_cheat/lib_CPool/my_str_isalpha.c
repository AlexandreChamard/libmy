/*
** my_str_isalpha.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 20:41:30 2017 Alexandre Chamard-bois
** Last update Tue Jan  3 20:49:16 2017 Alexandre Chamard-bois
*/

int is_alpha(char c)
{
  return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ? 1 : 0);
}

int my_str_isalpha(char *str)
{
  return (*str ? is_alpha(*str) ? my_str_isalpha(str + 1) : 0 : 1);
}
