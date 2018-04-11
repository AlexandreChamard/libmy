/*
** my_strcapitalize.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Mon Jan  2 23:09:42 2017 Alexandre Chamard-bois
** Last update Wed Feb 28 20:05:48 2018 alexandre Chamard-bois
*/

int an(char c)
{
  return (c < 65 || c > 122 ? c > 39 && c < 58 : c > 90 ? c < 97 ? 0 : 2 : 3);
}

void capitalize(char *s, int n)
{
  *s ? capitalize(s + 1, an(*s)) : 0;
  an(*s) == 2 && !n ? *s -= 32 : an(*s) == 3 && n ? *s += 32 : 0;
}

char	*my_strcapitalize(char *str)
{
  return (capitalize(str, 0), str);
}
