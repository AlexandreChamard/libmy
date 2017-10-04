/*
** my_strcapitalize.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Mon Jan  2 23:09:42 2017 Alexandre Chamard-bois
** Last update Wed Oct  4 14:08:04 2017 Alexandre Chamard-bois
*/

int n(char c)
{
  return (c < '0' || c > '9' ? 0 : 1);
}

int an(char c)
{
  return (c < 'A' || c > 'z' ? n(c) : c > 'Z' ? c < 'a' ? 0 : 2 : 3);
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
