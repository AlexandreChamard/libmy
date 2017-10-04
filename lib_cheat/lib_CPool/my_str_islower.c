/*
** my_str_islower.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 20:45:32 2017 Alexandre Chamard-bois
** Last update Wed Oct  4 12:12:28 2017 Alexandre Chamard-bois
*/

int my_str_islower(char *str)
{
  return (*str ? *str < 'a' || *str > 'z' ? 0 : my_str_islower(str + 1) : 1);
}
