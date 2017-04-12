/*
** my_strlen.c for my_strlen in /home/Alex.Chamardbois/CPool/CPool_Day04
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Thu Oct  6 15:32:00 2016 Alexandre Chamard-bois
** Last update Wed Apr 12 21:20:51 2017 Alexandre Chamard-bois
*/

int		my_strlen(const char *str)
{
  return (*str ? my_strlen(str + 1) + 1 : 0);
}
