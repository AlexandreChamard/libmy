/*
** my_str_isupper.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 20:47:16 2017 Alexandre Chamard-bois
** Last update Wed Oct  4 15:04:55 2017 Alexandre Chamard-bois
*/

int my_str_isupper(char *str)
{
  return (*str ? *str < 'A' || *str > 'Z' ? 0 : my_str_isupper(str + 1) : 1);
}
