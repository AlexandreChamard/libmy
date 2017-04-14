/*
** my_putchar.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 12:13:00 2017 Alexandre Chamard-bois
** Last update Wed Jan  4 10:20:51 2017 Alexandre Chamard-bois
*/

#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}
